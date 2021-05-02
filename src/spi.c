/** @file

 * @brief Library handling spi communication with MCP2515 module
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 *
 *  Created on: 2 lut 2021
 *      Author: Wiktor Burdecki
 */


#include "spi.h"
#include "nrf_gpio.h"


/**@brief Initialize SPI0 peripheral used to communicate with MCP2515 module
 *
 * @details Function configures output pin for CS (chip-select) line and spi peripheral used in
 * communication with MCP2515 chip
 *
 */

ret_code_t spi0_init(){
	nrf_gpio_cfg_output(SPI_CS_PIN);
	nrf_gpio_pin_set(SPI_CS_PIN);
	nrf_drv_spi_config_t spi_config = NRF_DRV_SPI_DEFAULT_CONFIG;
	spi_config.ss_pin   = NRF_DRV_SPI_PIN_NOT_USED;
	spi_config.miso_pin = SPI_MISO_PIN;
	spi_config.mosi_pin = SPI_MOSI_PIN;
	spi_config.sck_pin  = SPI_SCK_PIN;
	spi_config.frequency= SPI_FREQUENCY_FREQUENCY_M2;
	spi_config.mode		= NRF_DRV_SPI_MODE_0;
	spi_config.bit_order= NRF_DRV_SPI_BIT_ORDER_MSB_FIRST;
	return nrf_drv_spi_init(&spi, &spi_config, NULL);
}

/**@brief Chip-select pin control
 *
 * @details Software control od CS pin is needed since one edge on CS pin must account for one instruction,
 * 			and each MCP2515 instruction would send/receive different amount of bytes so can't be hardcoded.
 *
 */
void spi0_cs_low(){
	nrf_gpio_pin_clear(SPI_CS_PIN);
}

void spi0_cs_high(){
	nrf_gpio_pin_set(SPI_CS_PIN);
}

/**@brief Function used to send/receive byte from SPI peripheral
 *
 * @details This function is called to send/receive byte.
 * 			Doing this stuff one byte at a time and using NRF driver is painfully slow.
 * 			Doesn't matter here since receiving 1 CAN frame from MCP2515's internal buffer is still faster than transmitting one
 * 			CAN frame itself (at 33,3kbaud at least)
 *
 * @param[in]   data   byte to send
 */
uint8_t spi0_transfer(uint8_t data){
	//@TODO:that is really slow solution, for higher CAN baudrates might not work - new CAN frames transmitted over CAN BUS while MCU is still reading old one from buffer via SPI
	//		new,faster implementation of reading RXB0 buffer would be needed, this might still work for configuration/status stuff
	uint8_t spi_rx_buffer=0;
	nrf_drv_spi_transfer(&spi, &data, 1, &spi_rx_buffer, 1);
	return spi_rx_buffer;
}
