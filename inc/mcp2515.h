/*
 * mcp2515.h
 *
 *  Created on: 2 lut 2021
 *      Author: Wiktor
 */
#define MCP2515_INT_PIN 7
#include "can.h"

#define INSTRUCTION_WRITE       0x02
#define INSTRUCTION_READ        0x03
#define INSTRUCTION_BIT_MODIFY  0x05
#define INSTRUCTION_LOAD_TXB(n) (0x40 + 2 * (n))
#define INSTRUCTION_READ_RXB(n) (((n) == 0) ? 0x90 : 0x94)
#define INSTRUCTION_STATUS      0xA0
#define INSTRUCTION_RESET       0xC0
#define INSTRUCTION_RX_STATUS	0xB0

/* Read status values */
#define STATUS_RX0IF       0x01
#define STATUS_RX1IF       0x02
#define STATUS_TX0REQ      0x04
#define STATUS_TX0IF       0x08
#define STATUS_TX1REQ      0x10
#define STATUS_TX1IF       0x20
#define STATUS_TX2REQ      0x40
#define STATUS_TX2IF       0x80

/* MPC251x registers */
#define CANSTAT       0x0e
#define CANCTRL       0x0f
#define CANCTRL_REQOP_MASK        0xe0
#define CANCTRL_REQOP_CONF        0x80
#define CANCTRL_REQOP_LISTEN_ONLY 0x60
#define CANCTRL_REQOP_LOOPBACK    0x40
#define CANCTRL_REQOP_SLEEP       0x20
#define CANCTRL_REQOP_NORMAL      0x00
#define CANCTRL_OSM               0x08
#define CANCTRL_ABAT              0x10
#define CANCTRL_CLKEN             0x04
#define TEC           0x1c
#define REC           0x1d
#define CNF1          0x2a
#define CNF1_SJW_SHIFT   6
#define CNF2          0x29
#  define CNF2_BTLMODE     0x80
#  define CNF2_SAM         0x40
#  define CNF2_PS1_SHIFT   3
#define CNF3          0x28
#  define CNF3_SOF         0x08
#  define CNF3_WAKFIL      0x04
#  define CNF3_PHSEG2_MASK 0x07
#define CANINTE       0x2b
#  define CANINTE_MERRE 0x80
#  define CANINTE_WAKIE 0x40
#  define CANINTE_ERRIE 0x20
#  define CANINTE_TX2IE 0x10
#  define CANINTE_TX1IE 0x08
#  define CANINTE_TX0IE 0x04
#  define CANINTE_RX1IE 0x02
#  define CANINTE_RX0IE 0x01
#define CANINTF       0x2c
#  define CANINTF_MERRF 0x80
#  define CANINTF_WAKIF 0x40
#  define CANINTF_ERRIF 0x20
#  define CANINTF_TX2IF 0x10
#  define CANINTF_TX1IF 0x08
#  define CANINTF_TX0IF 0x04
#  define CANINTF_RX1IF 0x02
#  define CANINTF_RX0IF 0x01
#  define CANINTF_RX (CANINTF_RX0IF | CANINTF_RX1IF)
#  define CANINTF_TX (CANINTF_TX2IF | CANINTF_TX1IF | CANINTF_TX0IF)
#  define CANINTF_ERR (CANINTF_ERRIF)
#define EFLG          0x2d
#  define EFLG_EWARN    0x01
#  define EFLG_RXWAR    0x02
#  define EFLG_TXWAR    0x04
#  define EFLG_RXEP     0x08
#  define EFLG_TXEP     0x10
#  define EFLG_TXBO     0x20
#  define EFLG_RX0OVR   0x40
#  define EFLG_RX1OVR   0x80
#define TXBCTRL(n)  (((n) * 0x10) + 0x30 + TXBCTRL_OFF)
#  define TXBCTRL_ABTF  0x40
#  define TXBCTRL_MLOA  0x20
#  define TXBCTRL_TXERR 0x10
#  define TXBCTRL_TXREQ 0x08
#define TXBSIDH(n)  (((n) * 0x10) + 0x30 + TXBSIDH_OFF)
#  define SIDH_SHIFT    3
#define TXBSIDL(n)  (((n) * 0x10) + 0x30 + TXBSIDL_OFF)
#  define SIDL_SID_MASK    7
#  define SIDL_SID_SHIFT   5
#  define SIDL_EXIDE_SHIFT 3
#  define SIDL_EID_SHIFT   16
#  define SIDL_EID_MASK    3
#define TXBEID8(n)  (((n) * 0x10) + 0x30 + TXBEID8_OFF)
#define TXBEID0(n)  (((n) * 0x10) + 0x30 + TXBEID0_OFF)
#define TXBDLC(n)   (((n) * 0x10) + 0x30 + TXBDLC_OFF)
#  define DLC_RTR_SHIFT    6
#define TXBCTRL_OFF 0
#define TXBSIDH_OFF 1
#define TXBSIDL_OFF 2
#define TXBEID8_OFF 3
#define TXBEID0_OFF 4
#define TXBDLC_OFF  5
#define TXBDAT_OFF  6
#define RXBCTRL(n)  (((n) * 0x10) + 0x60 + RXBCTRL_OFF)
#  define RXBCTRL_BUKT  0x04
#  define RXBCTRL_RXM0  0x20
#  define RXBCTRL_RXM1  0x40
#define RXBSIDH(n)  (((n) * 0x10) + 0x60 + RXBSIDH_OFF)
#  define RXBSIDH_SHIFT 3
#define RXBSIDL(n)  (((n) * 0x10) + 0x60 + RXBSIDL_OFF)
#  define RXBSIDL_IDE   0x08
#  define RXBSIDL_SRR   0x10
#  define RXBSIDL_EID   3
#  define RXBSIDL_SHIFT 5
#define RXBEID8(n)  (((n) * 0x10) + 0x60 + RXBEID8_OFF)
#define RXBEID0(n)  (((n) * 0x10) + 0x60 + RXBEID0_OFF)
#define RXBDLC(n)   (((n) * 0x10) + 0x60 + RXBDLC_OFF)
#  define RXBDLC_LEN_MASK  0x0f
#  define RXBDLC_RTR       0x40
#define RXF0SIDH	0x00
#define RXF0SIDL	0x01
#define RXF0EID8    0x02
#define RXF0EID0	0x03
#define RXM0SIDH	0x20
#define RXM0SIDL 	0x21
#define RXM0EID8	0x22
#define RXM0EID0	0x23
#define RXBCTRL_OFF 0
#define RXBSIDH_OFF 1
#define RXBSIDL_OFF 2
#define RXBEID8_OFF 3
#define RXBEID0_OFF 4
#define RXBDLC_OFF  5
#define RXBDAT_OFF  6

//OSCILLATOR and BAUDRATE settings

#define MCP_8MHz_33k3BPS_CFG1 (0x47)
#define MCP_8MHz_33k3BPS_CFG2 (0xE2)
#define MCP_8MHz_33k3BPS_CFG3 (0x05)

#define MCP_16MHz_33k3BPS_CFG1 (0x4E)
#define MCP_16MHz_33k3BPS_CFG2 (0xF1)
#define MCP_16MHz_33k3BPS_CFG3 (0xC5)


extern struct can_config can_cfg;

void mcp2515_init();
uint8_t mcp2515_read_reg(uint8_t addr);
uint8_t mcp2515_read_rx_status();
void mcp2515_write_reg(uint8_t addr, uint8_t data);
static void mcp2515_reset(void);
static void mcp2515_soft_reset(void);
uint8_t mcp2515_start(void);
void mcp2515_sleep(void);
void mcp2515_rx(struct can_frame * frame);

