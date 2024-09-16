#ifndef DEVICE_H_
#define DEVICE_H_

// Ports:
#define PORT_DI1			PortA, pin0
#define PORT_DI1_1			PortA, pin1

#define PORT_DI2			PortA, pin2
#define PORT_DI2_1			PortA, pin3

#define PORT_DI3			PortA, pin4
#define PORT_DI3_1			PortA, pin5

#define PORT_DI4			PortA, pin6
#define PORT_DI4_1			PortA, pin7

#define PORT_DI5			PortE, pin2
#define PORT_DI5_1			PortE, pin3

#define PORT_DI6			PortG, pin1
#define PORT_DI6_1			PortG, pin2

#define PORT_DI7			PortB, pin4
#define PORT_DI7_1			PortB, pin5

#define PORT_DI8			PortB, pin6
#define PORT_DI8_1			PortB, pin7

#define PORT_DI9			PortC, pin0
#define PORT_DI9_1			PortC, pin1

#define PORT_DI10			PortC, pin2
#define PORT_DI10_1			PortC, pin3

#define PORT_DI11			PortC, pin4
#define PORT_DI11_1			PortC, pin5

#define PORT_DI12			PortC, pin6
#define PORT_DI12_1			PortC, pin7

#define PORT_DI13			PortD, pin2
#define PORT_DI13_1			PortD, pin3

#define PORT_DI14			PortD, pin4
#define PORT_DI14_1			PortD, pin5

#define PORT_DI15			PortD, pin6
#define PORT_DI15_1			PortD, pin7

#define PORT_DI16			PortG, pin3
#define PORT_DI16_1			PortG, pin4

#define PORT_TEST			PortB, pin0

// Addresses
#define I2C_SLAVE_ADDRESS	0b00000001

#include "config.h"
#include "device.h"

// Reg map
typedef enum
{
	RegisterMap_CrcA = 0,
	RegisterMap_CrcB = 1,

}RegisterMap;

#define REG_CRC_A		RegisterMap_CrcA
#define REG_CRC_B		RegisterMap_CrcB

#endif