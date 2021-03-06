/*
 * Wiktor Burdecki 2021
 *
 * MCP2515 driver uses code from linux kernel and Fabio Baltieri's open-usb-can project
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 */
#include <stdio.h>
#include <string.h>

#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "spi.h"
#include "mcp2515.h"

struct can_config can_cfg;

void mcp2515_init()
{
	spi0_init();
	mcp2515_reset();
	mcp2515_soft_reset();

	nrf_gpio_cfg_output(9);
	nrf_gpio_pin_clear(9);//enable CAN transciever

	memset(&can_cfg, 0, sizeof(can_cfg));
	nrf_delay_ms(2);
}

uint8_t mcp2515_read_reg(uint8_t addr)
{
	uint8_t ret;
	spi0_cs_low();
	spi0_transfer(INSTRUCTION_READ);
	spi0_transfer(addr);
	ret = spi0_transfer(0xff);
	spi0_cs_high();

	return ret;
}

uint8_t mcp2515_read_rx_status()
{
	uint8_t ret;
	spi0_cs_low();
	spi0_transfer(INSTRUCTION_RX_STATUS);
	ret = spi0_transfer(0xff);
	spi0_cs_high();

	return ret;
}

void mcp2515_write_reg(uint8_t addr, uint8_t data)
{
	spi0_cs_low();
	spi0_transfer(INSTRUCTION_WRITE);
	spi0_transfer(addr);
	spi0_transfer(data);
	spi0_cs_high();
}



static void mcp2515_reset(void){
	nrf_gpio_cfg_output(8);
	nrf_gpio_pin_clear(8);
	nrf_delay_ms(1);
	nrf_gpio_pin_set(8);
}
static void mcp2515_soft_reset(void)
{
	spi0_cs_low();
	spi0_transfer(INSTRUCTION_RESET);
	spi0_cs_high();
}

uint8_t mcp2515_start(void)
{
	//set clocks for 33k3 CAN baudrate
	mcp2515_write_reg(CNF1, MCP_16MHz_33k3BPS_CFG1);
	mcp2515_write_reg(CNF2, MCP_16MHz_33k3BPS_CFG2);
	mcp2515_write_reg(CNF3, MCP_16MHz_33k3BPS_CFG3);


	mcp2515_write_reg(RXBCTRL(0),0x00); //configure RXB0 so only frames meeting filter criteria will end up in buffer

	//set up filter 0 to filter all except can-id 0x10438040 (steering wheel multimedia signals)
	mcp2515_write_reg(RXF0SIDH,0x82);
	mcp2515_write_reg(RXF0SIDL,0x0B);
	mcp2515_write_reg(RXF0EID8,0x80);
	mcp2515_write_reg(RXF0EID0,0x40);
	//set up mask 0 to filter by all bits in extended id
	mcp2515_write_reg(RXM0SIDH,0xFF);
	mcp2515_write_reg(RXM0SIDL,0xE3);
	mcp2515_write_reg(RXM0EID8,0xFF);
	mcp2515_write_reg(RXM0EID0,0xFF);

	//@TODO: set up MCU sleep based on can messages (241 07 AE 04 01 00 00 00 00 Accessory Power Relay off 241 07 AE 04 01 01 00 00 00 Accessory Power Relay on

	//@TODO: disable operation when car radio not in AUX - set up filter 0 to also allow frames with information about current car audio source

	mcp2515_write_reg(CANINTE,CANINTE_RX0IE); //enable interrupt on INT pin when rx buffer 0 received message

	mcp2515_write_reg(CANCTRL, 0x00); //Normal operating mode

	return 0;
}

void mcp2515_sleep(){
	mcp2515_write_reg(CANINTE,CANINTE_WAKIE); //enable interrupt to wake up on CAN bus activity
	mcp2515_write_reg(CANCTRL,0x20); //request sleep mode
}

void mcp2515_rx(struct can_frame * frame)
{
	uint8_t buf;
	uint8_t i;

	spi0_cs_low();
	spi0_transfer(INSTRUCTION_READ_RXB(0));

	buf = spi0_transfer(0xff); /* RXBnSIDH */
	frame->can_id = buf << RXBSIDH_SHIFT;
	buf = spi0_transfer(0xff); /* RXBnSIDL */
	frame->can_id |= buf >> RXBSIDL_SHIFT;

	if (buf & RXBSIDL_IDE) {
		frame->can_id = frame->can_id << 18;
		frame->can_id |= CAN_EFF_FLAG;
		frame->can_id |= (uint32_t)(buf & RXBSIDL_EID) << 16;
		buf = spi0_transfer(0xff); /* RXBnEID8 */
		frame->can_id |= (uint32_t)buf << 8;
		buf = spi0_transfer(0xff); /* RXBnEID0 */
		frame->can_id |= buf;
		buf = spi0_transfer(0xff); /* RXBnDLC */
		frame->can_id |= (buf & RXBDLC_RTR) ? CAN_RTR_FLAG : 0;
	} else {
		frame->can_id |= (buf & RXBSIDL_SRR) ? CAN_RTR_FLAG : 0;
		spi0_transfer(0xff); /* RXBnEID8 */
		spi0_transfer(0xff); /* RXBnEID0 */
		buf = spi0_transfer(0xff); /* RXBnDLC */
	}
	frame->can_dlc = buf & RXBDLC_LEN_MASK;

	for (i = 0; i < frame->can_dlc; i++) /* TXBnDn */
		frame->data[i] = spi0_transfer(0xff); /* RXBnDn */
	spi0_cs_high();
}
