EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "CAN-BLE HID"
Date "2021-04-10"
Rev "1"
Comp "Burdecki Wiktor"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Nordic:nRF51x22-QFxx U5
U 1 1 606AEA63
P 8900 3650
F 0 "U5" H 8850 4450 50  0000 C CNN
F 1 "nRF51822-QFAC" H 8850 4350 50  0000 C CNN
F 2 "Package_DFN_QFN:QFN-48-1EP_6x6mm_P0.4mm_EP4.6x4.6mm" H 8900 3650 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/nrf51822-qfac-t/mikrokontrolery-pozostale/nordic-semiconductor/" H 8500 3550 50  0001 C CNN
	1    8900 3650
	1    0    0    -1  
$EndComp
Text GLabel 9800 2450 2    50   Input ~ 0
SPI_CS
Text GLabel 9800 2550 2    50   Input ~ 0
SPI_MISO
Text GLabel 9800 2650 2    50   Input ~ 0
SPI_MOSI
Text GLabel 9800 2750 2    50   Input ~ 0
SPI_SCK
Text GLabel 9800 2850 2    50   Input ~ 0
MCP2515_INT
Text GLabel 9800 2150 2    50   Input ~ 0
UART_TX
Text GLabel 9800 2250 2    50   Input ~ 0
UART_RX
Text GLabel 8000 4750 0    50   Input ~ 0
SWCLK
Text GLabel 8000 4650 0    50   Input ~ 0
SWDIO
$Comp
L Device:Crystal Y2
U 1 1 606B0F3F
P 7500 3600
F 0 "Y2" V 7454 3731 50  0000 L CNN
F 1 "16M" V 7545 3731 50  0000 L CNN
F 2 "XT224-16:XT224-16" H 7500 3600 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/16.00m-smdxt224/rezonatory-kwarcowe-smd/yic/" H 7500 3600 50  0001 C CNN
	1    7500 3600
	0    1    1    0   
$EndComp
$Comp
L Device:Crystal Y3
U 1 1 606B272D
P 10300 4900
F 0 "Y3" V 10254 5031 50  0000 L CNN
F 1 "32,768k" V 10345 5031 50  0000 L CNN
F 2 "Crystal:Crystal_SMD_3215-2Pin_3.2x1.5mm" H 10300 4900 50  0001 C CNN
F 3 "~" H 10300 4900 50  0001 C CNN
	1    10300 4900
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR043
U 1 1 606B41EB
P 10950 5050
F 0 "#PWR043" H 10950 4800 50  0001 C CNN
F 1 "GND" H 10955 4877 50  0000 C CNN
F 2 "" H 10950 5050 50  0001 C CNN
F 3 "" H 10950 5050 50  0001 C CNN
	1    10950 5050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR029
U 1 1 606B5417
P 6850 3950
F 0 "#PWR029" H 6850 3700 50  0001 C CNN
F 1 "GND" H 6855 3777 50  0000 C CNN
F 2 "" H 6850 3950 50  0001 C CNN
F 3 "" H 6850 3950 50  0001 C CNN
	1    6850 3950
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C25
U 1 1 606B684E
P 10750 4750
F 0 "C25" V 10521 4750 50  0000 C CNN
F 1 "12pF" V 10612 4750 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 10750 4750 50  0001 C CNN
F 3 "~" H 10750 4750 50  0001 C CNN
	1    10750 4750
	0    1    1    0   
$EndComp
$Comp
L Device:C_Small C26
U 1 1 606B7DB3
P 10750 5050
F 0 "C26" V 10850 4950 50  0000 C CNN
F 1 "12pF" V 10950 4950 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 10750 5050 50  0001 C CNN
F 3 "~" H 10750 5050 50  0001 C CNN
	1    10750 5050
	0    1    1    0   
$EndComp
Wire Wire Line
	9800 4850 10100 4850
Wire Wire Line
	10100 4850 10100 4750
Wire Wire Line
	10100 4750 10300 4750
Wire Wire Line
	9800 4950 10100 4950
Wire Wire Line
	10100 4950 10100 5050
Wire Wire Line
	10100 5050 10300 5050
Wire Wire Line
	10300 5050 10650 5050
Connection ~ 10300 5050
Wire Wire Line
	10300 4750 10650 4750
Connection ~ 10300 4750
Wire Wire Line
	10850 4750 10950 4750
Wire Wire Line
	10950 4750 10950 5050
Wire Wire Line
	10850 5050 10950 5050
Connection ~ 10950 5050
$Comp
L Device:C_Small C18
U 1 1 606BA4D3
P 7200 3350
F 0 "C18" V 6971 3350 50  0000 C CNN
F 1 "12pF" V 7062 3350 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 7200 3350 50  0001 C CNN
F 3 "~" H 7200 3350 50  0001 C CNN
	1    7200 3350
	0    1    1    0   
$EndComp
$Comp
L Device:C_Small C19
U 1 1 606BB836
P 7200 3950
F 0 "C19" V 6950 3950 50  0000 C CNN
F 1 "12pF" V 7050 3950 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 7200 3950 50  0001 C CNN
F 3 "~" H 7200 3950 50  0001 C CNN
	1    7200 3950
	0    1    1    0   
$EndComp
Wire Wire Line
	8000 3350 7500 3350
Wire Wire Line
	7500 3350 7500 3450
Wire Wire Line
	8000 3950 7500 3950
Wire Wire Line
	7500 3950 7500 3750
Wire Wire Line
	7500 3950 7300 3950
Connection ~ 7500 3950
Wire Wire Line
	7500 3350 7300 3350
Connection ~ 7500 3350
Wire Wire Line
	7100 3350 6850 3350
Wire Wire Line
	6850 3350 6850 3950
Wire Wire Line
	7100 3950 6850 3950
Connection ~ 6850 3950
$Comp
L Device:C_Small C21
U 1 1 606BE60A
P 8350 1600
F 0 "C21" H 8550 1500 50  0000 R CNN
F 1 "100n" H 8650 1600 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 8350 1600 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 8350 1600 50  0001 C CNN
	1    8350 1600
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR033
U 1 1 606C0A73
P 8350 1700
F 0 "#PWR033" H 8350 1450 50  0001 C CNN
F 1 "GND" H 8250 1600 50  0000 C CNN
F 2 "" H 8350 1700 50  0001 C CNN
F 3 "" H 8350 1700 50  0001 C CNN
	1    8350 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	8600 1500 8350 1500
Wire Wire Line
	8600 1500 8600 1850
NoConn ~ 9400 1850
$Comp
L Device:C_Small C20
U 1 1 606C6DE8
P 8350 1100
F 0 "C20" H 8550 1000 50  0000 R CNN
F 1 "100n" H 8650 1100 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 8350 1100 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 8350 1100 50  0001 C CNN
	1    8350 1100
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR032
U 1 1 606C7B8A
P 8350 1200
F 0 "#PWR032" H 8350 950 50  0001 C CNN
F 1 "GND" H 8250 1100 50  0000 C CNN
F 2 "" H 8350 1200 50  0001 C CNN
F 3 "" H 8350 1200 50  0001 C CNN
	1    8350 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	8350 1000 8700 1000
Wire Wire Line
	8700 1000 8700 1850
$Comp
L power:+3V3 #PWR034
U 1 1 606C8A15
P 8900 950
F 0 "#PWR034" H 8900 800 50  0001 C CNN
F 1 "+3V3" H 8915 1123 50  0000 C CNN
F 2 "" H 8900 950 50  0001 C CNN
F 3 "" H 8900 950 50  0001 C CNN
	1    8900 950 
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C22
U 1 1 606CA95D
P 9100 1050
F 0 "C22" H 9000 1000 50  0000 R CNN
F 1 "100n" H 9000 1100 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9100 1050 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 9100 1050 50  0001 C CNN
	1    9100 1050
	-1   0    0    1   
$EndComp
$Comp
L Device:C_Small C23
U 1 1 606CEFFE
P 9450 1050
F 0 "C23" H 9350 1000 50  0000 R CNN
F 1 "100n" H 9350 1100 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9450 1050 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 9450 1050 50  0001 C CNN
	1    9450 1050
	-1   0    0    1   
$EndComp
Wire Wire Line
	8900 950  9100 950 
Wire Wire Line
	9450 950  9100 950 
Connection ~ 9100 950 
Wire Wire Line
	8900 950  8900 1850
Connection ~ 8900 950 
$Comp
L power:GND #PWR037
U 1 1 606D076A
P 9100 1150
F 0 "#PWR037" H 9100 900 50  0001 C CNN
F 1 "GND" H 9000 1050 50  0000 C CNN
F 2 "" H 9100 1150 50  0001 C CNN
F 3 "" H 9100 1150 50  0001 C CNN
	1    9100 1150
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR038
U 1 1 606D0C80
P 9450 1150
F 0 "#PWR038" H 9450 900 50  0001 C CNN
F 1 "GND" H 9350 1050 50  0000 C CNN
F 2 "" H 9450 1150 50  0001 C CNN
F 3 "" H 9450 1150 50  0001 C CNN
	1    9450 1150
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR040
U 1 1 606D2311
P 9700 1750
F 0 "#PWR040" H 9700 1500 50  0001 C CNN
F 1 "GND" H 9850 1650 50  0000 C CNN
F 2 "" H 9700 1750 50  0001 C CNN
F 3 "" H 9700 1750 50  0001 C CNN
	1    9700 1750
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C24
U 1 1 606D1A7E
P 9700 1650
F 0 "C24" H 9600 1600 50  0000 R CNN
F 1 "1n" H 9600 1700 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 9700 1650 50  0001 C CNN
F 3 "~" H 9700 1650 50  0001 C CNN
	1    9700 1650
	-1   0    0    1   
$EndComp
$Comp
L power:+3V3 #PWR039
U 1 1 606CA2EB
P 9700 1550
F 0 "#PWR039" H 9700 1400 50  0001 C CNN
F 1 "+3V3" H 9715 1723 50  0000 C CNN
F 2 "" H 9700 1550 50  0001 C CNN
F 3 "" H 9700 1550 50  0001 C CNN
	1    9700 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	9200 1550 9700 1550
Connection ~ 9700 1550
$Comp
L power:GND #PWR035
U 1 1 606DB554
P 8900 5450
F 0 "#PWR035" H 8900 5200 50  0001 C CNN
F 1 "GND" H 8800 5300 50  0000 C CNN
F 2 "" H 8900 5450 50  0001 C CNN
F 3 "" H 8900 5450 50  0001 C CNN
	1    8900 5450
	1    0    0    -1  
$EndComp
Text GLabel 9000 1400 2    50   Input ~ 0
VDD_PA
Wire Wire Line
	9200 1550 9200 1850
Wire Wire Line
	9000 1850 9000 1400
Text GLabel 8000 2450 0    50   Input ~ 0
ANT1
Text GLabel 8000 2650 0    50   Input ~ 0
ANT2
$Comp
L Device:L L1
U 1 1 606E1528
P 1600 4000
F 0 "L1" H 1652 4046 50  0000 L CNN
F 1 "4.7n" H 1652 3955 50  0000 L CNN
F 2 "Inductor_SMD:L_0603_1608Metric_Pad1.05x0.95mm_HandSolder" H 1600 4000 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/0402as-4n7k-08/dlawiki-smd-0402/fastron/" H 1600 4000 50  0001 C CNN
	1    1600 4000
	1    0    0    -1  
$EndComp
$Comp
L Device:L L2
U 1 1 606E3174
P 1600 4300
F 0 "L2" H 1652 4346 50  0000 L CNN
F 1 "27n" H 1652 4255 50  0000 L CNN
F 2 "Inductor_SMD:L_0603_1608Metric_Pad1.05x0.95mm_HandSolder" H 1600 4300 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/lqw18an27ng00d/dlawiki-smd-0603/murata/" H 1600 4300 50  0001 C CNN
	1    1600 4300
	1    0    0    -1  
$EndComp
$Comp
L Device:L L3
U 1 1 606E3576
P 2400 3850
F 0 "L3" V 2590 3850 50  0000 C CNN
F 1 "3.3n" V 2499 3850 50  0000 C CNN
F 2 "Inductor_SMD:L_0603_1608Metric_Pad1.05x0.95mm_HandSolder" H 2400 3850 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/lqg18hn3n3s00d/dlawiki-smd-0603/murata/" H 2400 3850 50  0001 C CNN
	1    2400 3850
	0    -1   -1   0   
$EndComp
$Comp
L Device:C_Small C4
U 1 1 606E46EC
P 1900 3850
F 0 "C4" H 1800 3800 50  0000 R CNN
F 1 "3.9p" H 1800 3900 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1900 3850 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/0603n3r9b500ct/kondensatory-mlcc-smd-0603/walsin/" H 1900 3850 50  0001 C CNN
	1    1900 3850
	0    1    1    0   
$EndComp
$Comp
L Device:C_Small C3
U 1 1 606E5D3B
P 1450 4550
F 0 "C3" H 1650 4500 50  0000 R CNN
F 1 "2.2n" H 1650 4600 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1450 4550 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/cl21b222kbannnc/kondensatory-mlcc-smd-0805/samsung/" H 1450 4550 50  0001 C CNN
	1    1450 4550
	-1   0    0    1   
$EndComp
$Comp
L Device:C_Small C5
U 1 1 606E71C7
P 2150 4100
F 0 "C5" H 2050 4050 50  0000 R CNN
F 1 "1p" H 2050 4150 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2150 4100 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/c0805c109c2gactu/kondensatory-mlcc-smd-0805/kemet/" H 2150 4100 50  0001 C CNN
	1    2150 4100
	-1   0    0    1   
$EndComp
$Comp
L Device:C_Small C8
U 1 1 606E7A46
P 2650 4100
F 0 "C8" H 2550 4050 50  0000 R CNN
F 1 "1.5p" H 2550 4150 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2650 4100 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/c0603c159c5gactu/kondensatory-mlcc-smd-0603/kemet/" H 2650 4100 50  0001 C CNN
	1    2650 4100
	-1   0    0    1   
$EndComp
Text GLabel 1200 4450 0    50   Input ~ 0
VDD_PA
$Comp
L power:GND #PWR04
U 1 1 606E82CB
P 1450 4650
F 0 "#PWR04" H 1450 4400 50  0001 C CNN
F 1 "GND" H 1600 4550 50  0000 C CNN
F 2 "" H 1450 4650 50  0001 C CNN
F 3 "" H 1450 4650 50  0001 C CNN
	1    1450 4650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR05
U 1 1 606E9052
P 2150 4200
F 0 "#PWR05" H 2150 3950 50  0001 C CNN
F 1 "GND" H 2300 4100 50  0000 C CNN
F 2 "" H 2150 4200 50  0001 C CNN
F 3 "" H 2150 4200 50  0001 C CNN
	1    2150 4200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR010
U 1 1 606E9F94
P 2650 4200
F 0 "#PWR010" H 2650 3950 50  0001 C CNN
F 1 "GND" H 2800 4100 50  0000 C CNN
F 2 "" H 2650 4200 50  0001 C CNN
F 3 "" H 2650 4200 50  0001 C CNN
	1    2650 4200
	1    0    0    -1  
$EndComp
$Comp
L Device:Antenna AE1
U 1 1 606EA780
P 2900 3300
F 0 "AE1" H 2650 3350 50  0000 L CNN
F 1 "2.45 GHz PCB antenna" H 2000 3250 50  0000 L CNN
F 2 "RF_Antenna:Texas_SWRA117D_2.4GHz_Left" H 2900 3300 50  0001 C CNN
F 3 "https://www.ti.com/lit/an/swra117d/swra117d.pdf" H 2900 3300 50  0001 C CNN
	1    2900 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	1200 4450 1450 4450
Wire Wire Line
	1450 4450 1600 4450
Connection ~ 1450 4450
Wire Wire Line
	1600 3850 1800 3850
Wire Wire Line
	2000 3850 2150 3850
Wire Wire Line
	2150 4000 2150 3850
Connection ~ 2150 3850
Wire Wire Line
	2150 3850 2250 3850
Wire Wire Line
	2550 3850 2650 3850
Wire Wire Line
	2650 3850 2650 4000
Wire Wire Line
	2650 3850 2900 3850
Wire Wire Line
	2900 3850 2900 3500
Connection ~ 2650 3850
Text GLabel 1550 3850 0    50   Input ~ 0
ANT2
Text GLabel 1550 4150 0    50   Input ~ 0
ANT1
Wire Wire Line
	1550 3850 1600 3850
Connection ~ 1600 3850
Wire Wire Line
	1550 4150 1600 4150
Connection ~ 1600 4150
$Comp
L Interface_CAN_LIN:MCP2515-xST U1
U 1 1 6070DE33
P 2300 6650
F 0 "U1" H 2250 6900 50  0000 C CNN
F 1 "MCP2515-xST" H 2250 6750 50  0000 C CNN
F 2 "Package_SO:TSSOP-20_4.4x6.5mm_P0.65mm" H 2300 5750 50  0001 C CIN
F 3 "https://www.tme.eu/pl/details/mcp2515-e_st/uklady-scalone-interfejs-can/microchip-technology/" H 2400 5850 50  0001 C CNN
	1    2300 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C7
U 1 1 607105F4
P 2500 5500
F 0 "C7" H 2400 5450 50  0000 R CNN
F 1 "100n" H 2400 5550 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 2500 5500 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 2500 5500 50  0001 C CNN
	1    2500 5500
	-1   0    0    1   
$EndComp
$Comp
L power:+3V3 #PWR06
U 1 1 60712755
P 2300 5400
F 0 "#PWR06" H 2300 5250 50  0001 C CNN
F 1 "+3V3" H 2315 5573 50  0000 C CNN
F 2 "" H 2300 5400 50  0001 C CNN
F 3 "" H 2300 5400 50  0001 C CNN
	1    2300 5400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR09
U 1 1 60713D0F
P 2500 5600
F 0 "#PWR09" H 2500 5350 50  0001 C CNN
F 1 "GND" H 2505 5427 50  0000 C CNN
F 2 "" H 2500 5600 50  0001 C CNN
F 3 "" H 2500 5600 50  0001 C CNN
	1    2500 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 5400 2300 5400
Wire Wire Line
	2300 5850 2300 5400
Connection ~ 2300 5400
$Comp
L power:GND #PWR07
U 1 1 60717215
P 2300 7450
F 0 "#PWR07" H 2300 7200 50  0001 C CNN
F 1 "GND" H 2305 7277 50  0000 C CNN
F 2 "" H 2300 7450 50  0001 C CNN
F 3 "" H 2300 7450 50  0001 C CNN
	1    2300 7450
	1    0    0    -1  
$EndComp
Text GLabel 2900 6650 2    50   Input ~ 0
MCP2515_INT
Text GLabel 1700 6350 0    50   Input ~ 0
SPI_SCK
Text GLabel 1700 6050 0    50   Input ~ 0
SPI_MOSI
Text GLabel 1700 6150 0    50   Input ~ 0
SPI_MISO
Text GLabel 1700 6250 0    50   Input ~ 0
SPI_CS
$Comp
L power:GND #PWR036
U 1 1 60718DE8
P 9000 5450
F 0 "#PWR036" H 9000 5200 50  0001 C CNN
F 1 "GND" H 9050 5300 50  0000 C CNN
F 2 "" H 9000 5450 50  0001 C CNN
F 3 "" H 9000 5450 50  0001 C CNN
	1    9000 5450
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R1
U 1 1 60719707
P 3250 7150
F 0 "R1" H 3309 7196 50  0000 L CNN
F 1 "10k" H 3309 7105 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3250 7150 50  0001 C CNN
F 3 "~" H 3250 7150 50  0001 C CNN
	1    3250 7150
	1    0    0    -1  
$EndComp
$Comp
L power:+3V3 #PWR013
U 1 1 6071C51D
P 3250 7050
F 0 "#PWR013" H 3250 6900 50  0001 C CNN
F 1 "+3V3" H 3265 7223 50  0000 C CNN
F 2 "" H 3250 7050 50  0001 C CNN
F 3 "" H 3250 7050 50  0001 C CNN
	1    3250 7050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 7250 2900 7250
NoConn ~ 2900 7150
NoConn ~ 2900 7050
NoConn ~ 2900 6950
NoConn ~ 2900 6850
NoConn ~ 2900 6750
$Comp
L Device:Crystal Y1
U 1 1 607209E3
P 1350 6850
F 0 "Y1" V 1304 6981 50  0000 L CNN
F 1 "16M" V 1395 6981 50  0000 L CNN
F 2 "XT224-16:XT224-16" H 1350 6850 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/16.00m-smdxt224/rezonatory-kwarcowe-smd/yic/" H 1350 6850 50  0001 C CNN
	1    1350 6850
	0    1    1    0   
$EndComp
$Comp
L Device:C_Small C2
U 1 1 6072295E
P 1050 7000
F 0 "C2" V 900 7000 50  0000 C CNN
F 1 "12pF" V 1200 7000 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1050 7000 50  0001 C CNN
F 3 "~" H 1050 7000 50  0001 C CNN
	1    1050 7000
	0    1    1    0   
$EndComp
$Comp
L Device:C_Small C1
U 1 1 607236C5
P 1050 6700
F 0 "C1" V 800 6700 50  0000 C CNN
F 1 "12pF" V 900 6700 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 1050 6700 50  0001 C CNN
F 3 "~" H 1050 6700 50  0001 C CNN
	1    1050 6700
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR01
U 1 1 60723D26
P 950 7200
F 0 "#PWR01" H 950 6950 50  0001 C CNN
F 1 "GND" H 955 7027 50  0000 C CNN
F 2 "" H 950 7200 50  0001 C CNN
F 3 "" H 950 7200 50  0001 C CNN
	1    950  7200
	1    0    0    -1  
$EndComp
Wire Wire Line
	950  7200 950  7000
Wire Wire Line
	950  7000 950  6700
Connection ~ 950  7000
Wire Wire Line
	1150 6700 1350 6700
Wire Wire Line
	1150 7000 1350 7000
Wire Wire Line
	1350 6700 1650 6700
Wire Wire Line
	1650 6700 1650 6850
Wire Wire Line
	1650 6850 1700 6850
Connection ~ 1350 6700
Wire Wire Line
	1350 7000 1550 7000
Wire Wire Line
	1550 7000 1550 6950
Wire Wire Line
	1550 6950 1700 6950
Connection ~ 1350 7000
NoConn ~ 1700 7050
Text GLabel 3500 7250 2    50   Input ~ 0
MCP2515_RST
Wire Wire Line
	3250 7250 3500 7250
Connection ~ 3250 7250
Text GLabel 9800 2950 2    50   Input ~ 0
MCP2515_RST
$Comp
L TLE7250:TLE7250V U2
U 1 1 60733C0F
P 4250 6250
F 0 "U2" H 4250 6715 50  0000 C CNN
F 1 "TLE7250V" H 4250 6624 50  0000 C CNN
F 2 "Package_SO:SO-8_5.3x6.2mm_P1.27mm" H 4250 6250 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/tle7250vsj/uklady-scalone-interfejs-can/infineon-technologies/tle7250vsjxuma1/" H 4250 6250 50  0001 C CNN
	1    4250 6250
	1    0    0    -1  
$EndComp
Wire Wire Line
	2900 6150 3450 6150
Wire Wire Line
	3450 6150 3450 6050
Wire Wire Line
	3450 6050 3800 6050
Wire Wire Line
	2900 6050 3150 6050
Wire Wire Line
	3150 6050 3150 6500
Wire Wire Line
	3150 6500 3800 6500
$Comp
L power:GND #PWR017
U 1 1 6073A45D
P 3750 6650
F 0 "#PWR017" H 3750 6400 50  0001 C CNN
F 1 "GND" H 3755 6477 50  0000 C CNN
F 2 "" H 3750 6650 50  0001 C CNN
F 3 "" H 3750 6650 50  0001 C CNN
	1    3750 6650
	1    0    0    -1  
$EndComp
Wire Wire Line
	3800 6200 3750 6200
Wire Wire Line
	3750 6200 3750 6650
$Comp
L power:+5V #PWR016
U 1 1 6073D0A2
P 3650 5650
F 0 "#PWR016" H 3650 5500 50  0001 C CNN
F 1 "+5V" H 3665 5823 50  0000 C CNN
F 2 "" H 3650 5650 50  0001 C CNN
F 3 "" H 3650 5650 50  0001 C CNN
	1    3650 5650
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 5650 3650 6350
Wire Wire Line
	3650 6350 3800 6350
$Comp
L Device:C_Small C11
U 1 1 607407B4
P 3300 5750
F 0 "C11" H 3200 5700 50  0000 R CNN
F 1 "100n" H 3200 5800 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3300 5750 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 3300 5750 50  0001 C CNN
	1    3300 5750
	-1   0    0    1   
$EndComp
Wire Wire Line
	3300 5650 3650 5650
Connection ~ 3650 5650
$Comp
L power:GND #PWR014
U 1 1 60742A2A
P 3300 5850
F 0 "#PWR014" H 3300 5600 50  0001 C CNN
F 1 "GND" H 3305 5677 50  0000 C CNN
F 2 "" H 3300 5850 50  0001 C CNN
F 3 "" H 3300 5850 50  0001 C CNN
	1    3300 5850
	1    0    0    -1  
$EndComp
$Comp
L power:+3V3 #PWR020
U 1 1 60742F39
P 4950 5650
F 0 "#PWR020" H 4950 5500 50  0001 C CNN
F 1 "+3V3" H 4965 5823 50  0000 C CNN
F 2 "" H 4950 5650 50  0001 C CNN
F 3 "" H 4950 5650 50  0001 C CNN
	1    4950 5650
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 6500 4950 6500
Wire Wire Line
	4950 6500 4950 5650
Text GLabel 5050 6050 2    50   Input ~ 0
TLE7250_NEN
$Comp
L Device:R_Small R6
U 1 1 607464E4
P 5200 6350
F 0 "R6" H 5250 6450 50  0000 L CNN
F 1 "120R" H 5259 6350 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 5200 6350 50  0001 C CNN
F 3 "~" H 5200 6350 50  0001 C CNN
F 4 "NOMOUNT" H 5259 6259 50  0000 L CNN "MOUNT"
	1    5200 6350
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 6350 5000 6350
Wire Wire Line
	5000 6350 5000 6500
Wire Wire Line
	5000 6500 5200 6500
Wire Wire Line
	5200 6500 5200 6450
Wire Wire Line
	5200 6200 5200 6250
Wire Wire Line
	4700 6200 5200 6200
Text GLabel 6100 6200 2    50   Input ~ 0
CANH
Text GLabel 6100 6500 2    50   Input ~ 0
CANL
Connection ~ 5200 6200
Connection ~ 5200 6500
$Comp
L Power_Protection:NUP2105L D3
U 1 1 6075DE9F
P 5800 6800
F 0 "D3" H 6005 6846 50  0000 L CNN
F 1 "PESD1CAN" H 6005 6755 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 6025 6750 50  0001 L CNN
F 3 "https://www.tme.eu/pl/details/pesd1can.215/diody-transil-smd-dwukierunkowe/nexperia/" H 5925 6925 50  0001 C CNN
	1    5800 6800
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 6200 5700 6200
Wire Wire Line
	5200 6500 5900 6500
Wire Wire Line
	5700 6600 5700 6200
Connection ~ 5700 6200
Wire Wire Line
	5700 6200 6100 6200
Wire Wire Line
	5900 6600 5900 6500
Connection ~ 5900 6500
Wire Wire Line
	5900 6500 6100 6500
$Comp
L power:GND #PWR025
U 1 1 6076A847
P 5800 7000
F 0 "#PWR025" H 5800 6750 50  0001 C CNN
F 1 "GND" H 5805 6827 50  0000 C CNN
F 2 "" H 5800 7000 50  0001 C CNN
F 3 "" H 5800 7000 50  0001 C CNN
	1    5800 7000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 6050 5050 6050
Text GLabel 9800 3050 2    50   Input ~ 0
TLE7250_NEN
Connection ~ 6300 2350
$Comp
L power:+3V3 #PWR026
U 1 1 60868A98
P 6300 2350
F 0 "#PWR026" H 6300 2200 50  0001 C CNN
F 1 "+3V3" H 6315 2523 50  0000 C CNN
F 2 "" H 6300 2350 50  0001 C CNN
F 3 "" H 6300 2350 50  0001 C CNN
	1    6300 2350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5750 2350 6300 2350
Wire Wire Line
	6300 2350 6300 2400
$Comp
L power:GND #PWR027
U 1 1 6086369F
P 6300 2600
F 0 "#PWR027" H 6300 2350 50  0001 C CNN
F 1 "GND" H 6305 2427 50  0000 C CNN
F 2 "" H 6300 2600 50  0001 C CNN
F 3 "" H 6300 2600 50  0001 C CNN
	1    6300 2600
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR024
U 1 1 60863254
P 5750 2650
F 0 "#PWR024" H 5750 2400 50  0001 C CNN
F 1 "GND" H 5755 2477 50  0000 C CNN
F 2 "" H 5750 2650 50  0001 C CNN
F 3 "" H 5750 2650 50  0001 C CNN
	1    5750 2650
	1    0    0    -1  
$EndComp
Connection ~ 5750 2350
Wire Wire Line
	5650 2350 5750 2350
Wire Wire Line
	4700 2350 4850 2350
Connection ~ 4850 2350
$Comp
L power:+5V #PWR019
U 1 1 608553EC
P 4700 2350
F 0 "#PWR019" H 4700 2200 50  0001 C CNN
F 1 "+5V" H 4715 2523 50  0000 C CNN
F 2 "" H 4700 2350 50  0001 C CNN
F 3 "" H 4700 2350 50  0001 C CNN
	1    4700 2350
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C15
U 1 1 6084B688
P 6300 2500
F 0 "C15" H 6150 2450 50  0000 R CNN
F 1 "100n" H 6150 2550 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 6300 2500 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 6300 2500 50  0001 C CNN
	1    6300 2500
	-1   0    0    1   
$EndComp
$Comp
L Device:CP C13
U 1 1 6084A91E
P 5750 2500
F 0 "C13" H 5868 2546 50  0000 L CNN
F 1 "22u 6,3V" H 5868 2455 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5788 2350 50  0001 C CNN
F 3 "~" H 5750 2500 50  0001 C CNN
	1    5750 2500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR022
U 1 1 60849F2E
P 5250 2750
F 0 "#PWR022" H 5250 2500 50  0001 C CNN
F 1 "GND" H 5255 2577 50  0000 C CNN
F 2 "" H 5250 2750 50  0001 C CNN
F 3 "" H 5250 2750 50  0001 C CNN
	1    5250 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 2550 4850 2350
$Comp
L Regulator_Linear:MIC5504-3.3YM5 U4
U 1 1 608382D1
P 5250 2450
F 0 "U4" H 5250 2817 50  0000 C CNN
F 1 "MIC5504-3.3YM5" H 5250 2726 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23-5_HandSoldering" H 5250 2050 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/mic5504-3.3ym5-tr/stabilizatory-napiecia-nieregulowane-ldo/microchip-technology/" H 5000 2700 50  0001 C CNN
	1    5250 2450
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR031
U 1 1 60836316
P 7450 1200
F 0 "#PWR031" H 7450 1050 50  0001 C CNN
F 1 "+5V" H 7465 1373 50  0000 C CNN
F 2 "" H 7450 1200 50  0001 C CNN
F 3 "" H 7450 1200 50  0001 C CNN
	1    7450 1200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR030
U 1 1 60815C8B
P 7050 1400
F 0 "#PWR030" H 7050 1150 50  0001 C CNN
F 1 "GND" H 7055 1227 50  0000 C CNN
F 2 "" H 7050 1400 50  0001 C CNN
F 3 "" H 7050 1400 50  0001 C CNN
	1    7050 1400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR028
U 1 1 6081566E
P 6500 1500
F 0 "#PWR028" H 6500 1250 50  0001 C CNN
F 1 "GND" H 6505 1327 50  0000 C CNN
F 2 "" H 6500 1500 50  0001 C CNN
F 3 "" H 6500 1500 50  0001 C CNN
	1    6500 1500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR023
U 1 1 60814E4C
P 5700 1750
F 0 "#PWR023" H 5700 1500 50  0001 C CNN
F 1 "GND" H 5705 1577 50  0000 C CNN
F 2 "" H 5700 1750 50  0001 C CNN
F 3 "" H 5700 1750 50  0001 C CNN
	1    5700 1750
	1    0    0    -1  
$EndComp
Connection ~ 7050 1200
$Comp
L Device:C_Small C17
U 1 1 6080C563
P 7050 1300
F 0 "C17" H 6950 1300 50  0000 R CNN
F 1 "100n" H 6950 1400 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 7050 1300 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 7050 1300 50  0001 C CNN
	1    7050 1300
	-1   0    0    1   
$EndComp
Wire Wire Line
	6500 1200 7050 1200
Wire Wire Line
	5700 1200 6500 1200
Connection ~ 6500 1200
$Comp
L Device:CP C16
U 1 1 6080AA66
P 6500 1350
F 0 "C16" H 6618 1396 50  0000 L CNN
F 1 "22u 6,3V" H 6618 1305 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 6538 1200 50  0001 C CNN
F 3 "~" H 6500 1350 50  0001 C CNN
	1    6500 1350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 1350 4750 1350
Wire Wire Line
	5350 1350 5300 1350
Wire Wire Line
	5350 1500 5350 1350
Wire Wire Line
	5700 1500 5350 1500
Wire Wire Line
	5700 1500 5700 1550
Connection ~ 5700 1500
Wire Wire Line
	6000 1500 5700 1500
Wire Wire Line
	6000 1300 5700 1300
Wire Wire Line
	5700 1200 5700 1300
Connection ~ 5700 1200
Wire Wire Line
	5650 1200 5700 1200
$Comp
L Device:R_Small R5
U 1 1 607F31A4
P 5200 1350
F 0 "R5" V 5100 1350 50  0000 C CNN
F 1 "20k" V 5000 1350 50  0000 C CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 5200 1350 50  0001 C CNN
F 3 "~" H 5200 1350 50  0001 C CNN
	1    5200 1350
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R9
U 1 1 607F2872
P 5700 1650
F 0 "R9" H 5550 1700 50  0000 L CNN
F 1 "7,5k" H 5500 1600 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5700 1650 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/smd0805-7k5-1%25/rezystory-smd-0805/royal-ohm/0805s8f7501t5e/" H 5700 1650 50  0001 C CNN
	1    5700 1650
	1    0    0    -1  
$EndComp
Connection ~ 5700 1300
$Comp
L Device:R_Small R8
U 1 1 607F1A3D
P 5700 1400
F 0 "R8" H 5500 1450 50  0000 L CNN
F 1 "40,2k" H 5450 1350 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5700 1400 50  0001 C CNN
F 3 "~" H 5700 1400 50  0001 C CNN
	1    5700 1400
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C14
U 1 1 607EFB71
P 6000 1400
F 0 "C14" H 5908 1354 50  0000 R CNN
F 1 "12pF" H 5908 1445 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 6000 1400 50  0001 C CNN
F 3 "~" H 6000 1400 50  0001 C CNN
	1    6000 1400
	-1   0    0    1   
$EndComp
$Comp
L Device:L L4
U 1 1 607EAB6D
P 5500 1200
F 0 "L4" V 5700 1200 50  0000 C CNN
F 1 "NL12KTC5R6" V 5600 1050 50  0000 C CNN
F 2 "Inductor_SMD:L_1812_4532Metric_Pad1.30x3.40mm_HandSolder" H 5500 1200 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/nl12ktc5r6/dlawiki-smd-1812/viking/" H 5500 1200 50  0001 C CNN
	1    5500 1200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4850 1050 4750 1050
Wire Wire Line
	4850 1000 4850 1050
Wire Wire Line
	5050 1200 5350 1200
Wire Wire Line
	5050 1200 4750 1200
Connection ~ 5050 1200
$Comp
L Device:C_Small C12
U 1 1 607E1F92
P 5050 1100
F 0 "C12" H 5250 1200 50  0000 R CNN
F 1 "100n" H 5350 1100 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5050 1100 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 5050 1100 50  0001 C CNN
	1    5050 1100
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R4
U 1 1 607E0E35
P 4950 1000
F 0 "R4" V 4754 1000 50  0000 C CNN
F 1 "20R" V 4845 1000 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 4950 1000 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/smd0805-20r-1%25/rezystory-smd-0805/royal-ohm/0805s8f200jt5e/" H 4950 1000 50  0001 C CNN
	1    4950 1000
	0    1    1    0   
$EndComp
Wire Wire Line
	3850 1200 3950 1200
Wire Wire Line
	3850 1250 3850 1200
Wire Wire Line
	3500 1250 3850 1250
$Comp
L Device:R_Small R2
U 1 1 607D9812
P 3500 1150
F 0 "R2" H 3559 1196 50  0000 L CNN
F 1 "75k" H 3559 1105 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3500 1150 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/smd0805-75k/rezystory-smd-0805/royal-ohm/0805s8j0753t5e/" H 3500 1150 50  0001 C CNN
	1    3500 1150
	1    0    0    -1  
$EndComp
Connection ~ 3500 1050
Wire Wire Line
	3950 1050 3500 1050
Wire Wire Line
	3250 1350 3250 1700
Wire Wire Line
	3950 1350 3250 1350
Wire Wire Line
	3650 1500 3650 1700
Wire Wire Line
	3950 1500 3650 1500
Wire Wire Line
	3900 1650 3900 1900
Wire Wire Line
	3950 1650 3900 1650
$Comp
L power:GND #PWR018
U 1 1 607C43E5
P 3900 1900
F 0 "#PWR018" H 3900 1650 50  0001 C CNN
F 1 "GND" H 3905 1727 50  0000 C CNN
F 2 "" H 3900 1900 50  0001 C CNN
F 3 "" H 3900 1900 50  0001 C CNN
	1    3900 1900
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR012
U 1 1 607BD0E7
P 3250 1900
F 0 "#PWR012" H 3250 1650 50  0001 C CNN
F 1 "GND" H 3255 1727 50  0000 C CNN
F 2 "" H 3250 1900 50  0001 C CNN
F 3 "" H 3250 1900 50  0001 C CNN
	1    3250 1900
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C10
U 1 1 607B971B
P 3250 1800
F 0 "C10" H 3150 1800 50  0000 R CNN
F 1 "100n" H 3150 1900 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3250 1800 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 3250 1800 50  0001 C CNN
	1    3250 1800
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR011
U 1 1 607B6544
P 3050 1250
F 0 "#PWR011" H 3050 1000 50  0001 C CNN
F 1 "GND" H 3055 1077 50  0000 C CNN
F 2 "" H 3050 1250 50  0001 C CNN
F 3 "" H 3050 1250 50  0001 C CNN
	1    3050 1250
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR08
U 1 1 607B5F34
P 2350 1350
F 0 "#PWR08" H 2350 1100 50  0001 C CNN
F 1 "GND" H 2355 1177 50  0000 C CNN
F 2 "" H 2350 1350 50  0001 C CNN
F 3 "" H 2350 1350 50  0001 C CNN
	1    2350 1350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2350 1050 3050 1050
Wire Wire Line
	3500 1050 3050 1050
Connection ~ 3050 1050
$Comp
L Device:C_Small C9
U 1 1 607B49E7
P 3050 1150
F 0 "C9" H 2950 1150 50  0000 R CNN
F 1 "100n" H 2950 1250 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3050 1150 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/vj0805y104kxacw1bc/kondensatory-mlcc-smd-0805/vishay/" H 3050 1150 50  0001 C CNN
	1    3050 1150
	-1   0    0    1   
$EndComp
$Comp
L Device:CP C6
U 1 1 607B1D31
P 2350 1200
F 0 "C6" H 2468 1246 50  0000 L CNN
F 1 "10u 16V" H 2468 1155 50  0000 L CNN
F 2 "Capacitor_SMD:C_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 2388 1050 50  0001 C CNN
F 3 "~" H 2350 1200 50  0001 C CNN
	1    2350 1200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR015
U 1 1 607A6E24
P 3650 1900
F 0 "#PWR015" H 3650 1650 50  0001 C CNN
F 1 "GND" H 3655 1727 50  0000 C CNN
F 2 "" H 3650 1900 50  0001 C CNN
F 3 "" H 3650 1900 50  0001 C CNN
	1    3650 1900
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R3
U 1 1 607A5A2B
P 3650 1800
F 0 "R3" H 3709 1846 50  0000 L CNN
F 1 "75k" H 3709 1755 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 3650 1800 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/smd0805-75k/rezystory-smd-0805/royal-ohm/0805s8j0753t5e/" H 3650 1800 50  0001 C CNN
	1    3650 1800
	1    0    0    -1  
$EndComp
$Comp
L MP2315:MP2315GJ-Z U3
U 1 1 60771163
P 4350 1250
F 0 "U3" H 4350 1715 50  0000 C CNN
F 1 "MP2315GJ-Z" H 4350 1624 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:TSOT-23-8_HandSoldering" H 4350 850 50  0001 C CNN
F 3 "https://www.tme.eu/Document/97a205ad669bca30061d3fc6908e138e/MP2315GJ-DTE.pdf" H 4350 1250 50  0001 C CNN
	1    4350 1250
	1    0    0    -1  
$EndComp
$Comp
L Device:D_Zener_ALT D1
U 1 1 6088F415
P 1400 1350
F 0 "D1" V 1354 1430 50  0000 L CNN
F 1 "SM6T15CA" V 1445 1430 50  0000 L CNN
F 2 "Diode_SMD:D_SMB_Handsoldering" H 1400 1350 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/sm6t15ca/diody-transil-smd-dwukierunkowe/stmicroelectronics/" H 1400 1350 50  0001 C CNN
	1    1400 1350
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR03
U 1 1 60890CCB
P 1400 1500
F 0 "#PWR03" H 1400 1250 50  0001 C CNN
F 1 "GND" H 1405 1327 50  0000 C CNN
F 2 "" H 1400 1500 50  0001 C CNN
F 3 "" H 1400 1500 50  0001 C CNN
	1    1400 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 1050 1850 1050
Wire Wire Line
	2200 1050 2350 1050
Connection ~ 2350 1050
$Comp
L Device:D_AAK D2
U 1 1 608A146B
P 2050 1050
F 0 "D2" H 2075 825 50  0000 C CNN
F 1 "BAV70" H 2075 916 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23_Handsoldering" H 2050 1050 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/bav70-dio/diody-uniwersalne-smd/diotec-semiconductor/bav70/" H 2050 1050 50  0001 C CNN
	1    2050 1050
	-1   0    0    1   
$EndComp
Wire Wire Line
	1850 1150 1800 1150
Wire Wire Line
	1800 1150 1800 1050
$Comp
L power:GND #PWR02
U 1 1 608D5C7F
P 1200 1150
F 0 "#PWR02" H 1200 900 50  0001 C CNN
F 1 "GND" H 1205 977 50  0000 C CNN
F 2 "" H 1200 1150 50  0001 C CNN
F 3 "" H 1200 1150 50  0001 C CNN
	1    1200 1150
	1    0    0    -1  
$EndComp
Text GLabel 800  1250 2    50   Input ~ 0
CANH
$Comp
L Device:R_Small R7
U 1 1 608DDCC4
P 5200 6700
F 0 "R7" H 5259 6791 50  0000 L CNN
F 1 "0R" H 5259 6700 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 5200 6700 50  0001 C CNN
F 3 "~" H 5200 6700 50  0001 C CNN
F 4 "SWCAN ON" H 4750 6700 50  0000 L CNN "Field4"
	1    5200 6700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR021
U 1 1 608DEDAB
P 5200 6800
F 0 "#PWR021" H 5200 6550 50  0001 C CNN
F 1 "GND" H 5205 6627 50  0000 C CNN
F 2 "" H 5200 6800 50  0001 C CNN
F 3 "" H 5200 6800 50  0001 C CNN
	1    5200 6800
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 6600 5200 6500
$Comp
L Device:R_Small R10
U 1 1 608E4EF2
P 7250 1200
F 0 "R10" V 7054 1200 50  0000 C CNN
F 1 "0R" V 7145 1200 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 7250 1200 50  0001 C CNN
F 3 "~" H 7250 1200 50  0001 C CNN
	1    7250 1200
	0    1    1    0   
$EndComp
Wire Wire Line
	7050 1200 7150 1200
Wire Wire Line
	7350 1200 7450 1200
Wire Wire Line
	1650 1050 1800 1050
Connection ~ 1800 1050
Wire Wire Line
	1450 1050 1400 1050
Wire Wire Line
	1400 1050 1400 1200
$Comp
L Device:Polyfuse_Small F2
U 1 1 60914F7F
P 1550 1050
F 0 "F2" V 1255 1050 50  0000 C CNN
F 1 "0ZCK0010FF2G" V 1346 1050 50  0000 C CNN
F 2 "Fuse:Fuse_1812_4532Metric_Pad1.30x3.40mm_HandSolder" H 1600 850 50  0001 L CNN
F 3 "https://www.tme.eu/pl/details/0zck0010ff2g/bezpieczniki-polimerowe-smd/bel-fuse/" H 1550 1050 50  0001 C CNN
F 4 "0,1A" V 1437 1050 50  0000 C CNN "i"
	1    1550 1050
	0    1    1    0   
$EndComp
$Comp
L Device:Polyfuse_Small F1
U 1 1 60915EDE
P 1100 1050
F 0 "F1" V 700 1050 50  0000 C CNN
F 1 "0ZCF0200AF2C" V 800 1050 50  0000 C CNN
F 2 "Fuse:Fuse_2920_7451Metric_Pad2.10x5.45mm_HandSolder" H 1150 850 50  0001 L CNN
F 3 "https://www.tme.eu/pl/details/0zcf0200af2c/bezpieczniki-polimerowe-smd/bel-fuse/" H 1100 1050 50  0001 C CNN
F 4 "2A" V 1000 1050 50  0000 C CNN "I"
	1    1100 1050
	0    1    1    0   
$EndComp
Wire Wire Line
	1400 1050 1200 1050
Connection ~ 1400 1050
Wire Wire Line
	800  1050 1000 1050
Wire Wire Line
	800  1150 1200 1150
$Comp
L Device:LED D4
U 1 1 60937F55
P 10050 3550
F 0 "D4" H 10043 3295 50  0000 C CNN
F 1 "LED" H 10043 3386 50  0000 C CNN
F 2 "LED_SMD:LED_1206_3216Metric_Pad1.42x1.75mm_HandSolder" H 10050 3550 50  0001 C CNN
F 3 "~" H 10050 3550 50  0001 C CNN
	1    10050 3550
	-1   0    0    1   
$EndComp
$Comp
L Device:R_Small R11
U 1 1 6093C4CC
P 10450 3550
F 0 "R11" V 10254 3550 50  0000 C CNN
F 1 "1k" V 10345 3550 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.15x1.40mm_HandSolder" H 10450 3550 50  0001 C CNN
F 3 "~" H 10450 3550 50  0001 C CNN
	1    10450 3550
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR041
U 1 1 6093CF68
P 10650 3550
F 0 "#PWR041" H 10650 3300 50  0001 C CNN
F 1 "GND" H 10655 3377 50  0000 C CNN
F 2 "" H 10650 3550 50  0001 C CNN
F 3 "" H 10650 3550 50  0001 C CNN
	1    10650 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10650 3550 10550 3550
Wire Wire Line
	10350 3550 10200 3550
Wire Wire Line
	9900 3550 9800 3550
$Comp
L Switch:SW_Push_Dual SW1
U 1 1 6094F5CE
P 10450 4100
F 0 "SW1" H 10450 4385 50  0000 C CNN
F 1 "SW_Push_Dual" H 10450 4294 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_SPST_Omron_B3FS-100xP" H 10450 4300 50  0001 C CNN
F 3 "~" H 10450 4300 50  0001 C CNN
	1    10450 4100
	1    0    0    -1  
$EndComp
$Comp
L power:+3V3 #PWR042
U 1 1 60953787
P 10950 4100
F 0 "#PWR042" H 10950 3950 50  0001 C CNN
F 1 "+3V3" H 10965 4273 50  0000 C CNN
F 2 "" H 10950 4100 50  0001 C CNN
F 3 "" H 10950 4100 50  0001 C CNN
	1    10950 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10250 4100 10100 4100
Wire Wire Line
	10100 4100 10100 3750
Wire Wire Line
	10100 3750 9800 3750
$Comp
L Connector:Screw_Terminal_01x04 J1
U 1 1 6096D135
P 600 1250
F 0 "J1" H 600 1450 50  0000 C CNN
F 1 "AC300V-04P-5.0" H 350 1550 50  0000 C CNN
F 2 "TerminalBlock:TerminalBlock_Altech_AK300-4_P5.00mm" H 600 1250 50  0001 C CNN
F 3 "https://www.tme.eu/pl/details/tb-5.0-p-4p1_gy/listwy-zaciskowe-do-druku/ninigi/ac300v-04p-5-0-gray/" H 600 1250 50  0001 C CNN
	1    600  1250
	-1   0    0    1   
$EndComp
Text GLabel 800  1350 2    50   Input ~ 0
CANL
Text GLabel 5700 4500 0    50   Input ~ 0
UART_TX
Text GLabel 5700 4600 0    50   Input ~ 0
UART_RX
$Comp
L Connector:Conn_01x06_Male J2
U 1 1 6097BAF3
P 6050 4500
F 0 "J2" H 6022 4382 50  0000 R CNN
F 1 "UART" H 6022 4473 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 6050 4500 50  0001 C CNN
F 3 "~" H 6050 4500 50  0001 C CNN
	1    6050 4500
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR044
U 1 1 6097D481
P 5700 4700
F 0 "#PWR044" H 5700 4450 50  0001 C CNN
F 1 "GND" H 5705 4527 50  0000 C CNN
F 2 "" H 5700 4700 50  0001 C CNN
F 3 "" H 5700 4700 50  0001 C CNN
	1    5700 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 4500 5700 4500
Wire Wire Line
	5850 4600 5700 4600
Wire Wire Line
	5850 4700 5750 4700
Text GLabel 5850 4300 0    50   Input ~ 0
SWDIO
Text GLabel 5850 4200 0    50   Input ~ 0
SWCLK
Wire Wire Line
	5850 4400 5750 4400
Wire Wire Line
	5750 4400 5750 4700
Connection ~ 5750 4700
Wire Wire Line
	5750 4700 5700 4700
NoConn ~ 9800 5250
NoConn ~ 9800 5150
NoConn ~ 9800 5050
NoConn ~ 9800 4750
NoConn ~ 9800 4650
NoConn ~ 9800 4550
NoConn ~ 9800 4450
NoConn ~ 9800 4350
NoConn ~ 9800 4250
NoConn ~ 9800 4150
NoConn ~ 9800 4050
NoConn ~ 9800 3950
NoConn ~ 9800 3850
NoConn ~ 9800 3450
NoConn ~ 9800 3350
NoConn ~ 9800 3250
NoConn ~ 9800 3150
NoConn ~ 9800 2350
Wire Wire Line
	10950 4100 10950 4300
Wire Wire Line
	10950 4300 10650 4300
Wire Wire Line
	10650 4300 10650 4400
Wire Wire Line
	10650 4400 10250 4400
Wire Wire Line
	10250 4400 10250 4300
Connection ~ 10650 4300
Wire Wire Line
	10650 4100 10650 4150
Wire Wire Line
	10650 4150 10250 4150
Wire Wire Line
	10250 4150 10250 4100
Connection ~ 10250 4100
$EndSCHEMATC
