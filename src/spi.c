/*
 * spi.c
 *
 *  Created on: 2 lut 2021
 *      Author: Wiktor
 */


#include "spi.h"
#include "nrf_gpio.h"

ret_code_t spi0_init(){
	nrf_gpio_cfg_output(SPI_CS_PIN);
	nrf_gpio_pin_set(SPI_CS_PIN);
	nrf_drv_spi_config_t spi_config = NRF_DRV_SPI_DEFAULT_CONFIG;
	spi_config.ss_pin   = NRF_DRV_SPI_PIN_NOT_USED;
	spi_config.miso_pin = SPI_MISO_PIN;
	spi_config.mosi_pin = SPI_MOSI_PIN;
	spi_config.sck_pin  = SPI_SCK_PIN;
	spi_config.frequency= SPI_FREQUENCY_FREQUENCY_K125;
	spi_config.mode		= NRF_DRV_SPI_MODE_0;
	spi_config.bit_order= NRF_DRV_SPI_BIT_ORDER_MSB_FIRST;
	return nrf_drv_spi_init(&spi, &spi_config, NULL);
}

void spi0_cs_low(){
	nrf_gpio_pin_clear(SPI_CS_PIN);
}

void spi0_cs_high(){
	nrf_gpio_pin_set(SPI_CS_PIN);
}
uint8_t spi0_transfer(uint8_t data){
	uint8_t spi_rx_buffer=0;
	APP_ERROR_CHECK(nrf_drv_spi_transfer(&spi, &data, 1, &spi_rx_buffer, 1));
	return spi_rx_buffer;
}
