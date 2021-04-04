/*
 * spi.h
 *
 *  Created on: 2 lut 2021
 *      Author: Wiktor
 */

#include "nrf_drv_spi.h"
#include "app_error.h"

#define SPI_INSTANCE 0

#define SPI_CS_PIN 3
#define SPI_MISO_PIN 4
#define SPI_MOSI_PIN 5
#define SPI_SCK_PIN 6

static const nrf_drv_spi_t spi=NRF_DRV_SPI_INSTANCE(SPI_INSTANCE);

ret_code_t spi0_init();
void spi0_cs_low();
void spi0_cs_high();
uint8_t spi0_transfer(uint8_t data);
