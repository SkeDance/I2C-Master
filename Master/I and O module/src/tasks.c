#include "tasks.h"
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	uint8_t* message;

void Compare(){

	message = (uint8_t*)malloc(17 * sizeof(uint8_t));
	message[0] = 1;
	message[1] = 20;

	if ((Port_getPin(PORT_DI1_1) == 1) & (Port_getPin(PORT_DI1) == 1)){
		message[2] = 1;
	}
	if ((Port_getPin(PORT_DI1_1) == 0) & (Port_getPin(PORT_DI1) == 0)){
		message[2] = 0;
	}
	if ((Port_getPin(PORT_DI2_1) == 1) & (Port_getPin(PORT_DI2) == 1)){
		message[3] = 1;
	}
	if ((Port_getPin(PORT_DI2_1) == 0) & (Port_getPin(PORT_DI2) == 0)){
		message[3] = 0;
	}
	if ((Port_getPin(PORT_DI3_1) == 1) & (Port_getPin(PORT_DI3) == 1)){
		message[4] = 1;
	}
	if ((Port_getPin(PORT_DI3_1) == 0) & (Port_getPin(PORT_DI3) == 0)){
		message[4] = 0;
	}
	if ((Port_getPin(PORT_DI4_1) == 1) & (Port_getPin(PORT_DI4) == 1)){
		message[5] = 1;
	}
	if ((Port_getPin(PORT_DI4_1) == 0) & (Port_getPin(PORT_DI4) == 0)){
		message[5] = 0;
	}
	if ((Port_getPin(PORT_DI5_1) == 1) & (Port_getPin(PORT_DI5) == 1)){
		message[6] = 1;
	}
	if ((Port_getPin(PORT_DI5_1) == 0) & (Port_getPin(PORT_DI5) == 0)){
		message[6] = 0;
	}
	if ((Port_getPin(PORT_DI6_1) == 1) & (Port_getPin(PORT_DI6) == 1)){
		message[7] = 1;
	}
	if ((Port_getPin(PORT_DI6_1) == 0) & (Port_getPin(PORT_DI6) == 0)){
		message[7] = 0;
	}
	if ((Port_getPin(PORT_DI7_1) == 1) & (Port_getPin(PORT_DI7) == 1)){
		message[8] = 1;
	}
	if ((Port_getPin(PORT_DI7_1) == 0) & (Port_getPin(PORT_DI7) == 0)){
		message[8] = 0;
	}
	if ((Port_getPin(PORT_DI8_1) == 1) & (Port_getPin(PORT_DI8) == 1)){
		message[9] = 1;
	}
	if ((Port_getPin(PORT_DI8_1) == 0) & (Port_getPin(PORT_DI8) == 0)){
		message[9] = 0;
	}
	if ((Port_getPin(PORT_DI9_1) == 1) & (Port_getPin(PORT_DI9) == 1)){
		message[10] = 1;
	}
	if ((Port_getPin(PORT_DI9_1) == 0) & (Port_getPin(PORT_DI9) == 0)){
		message[10] = 0;
	}
	if ((Port_getPin(PORT_DI10_1) == 1) & (Port_getPin(PORT_DI10) == 1)){
		message[11] = 1;
	}
	if ((Port_getPin(PORT_DI10_1) == 0) & (Port_getPin(PORT_DI10) == 0)){
		message[11] = 0;
	}
	if ((Port_getPin(PORT_DI11_1) == 1) & (Port_getPin(PORT_DI11) == 1)){
		message[12] = 1;
	}
	if ((Port_getPin(PORT_DI11_1) == 0) & (Port_getPin(PORT_DI11) == 0)){
		message[12] = 0;
	}
	if ((Port_getPin(PORT_DI12_1) == 1) & (Port_getPin(PORT_DI12) == 1)){
		message[13] = 1;
	}
	if ((Port_getPin(PORT_DI12_1) == 0) & (Port_getPin(PORT_DI12) == 0)){
		message[13] = 0;
	}
	if ((Port_getPin(PORT_DI13_1) == 1) & (Port_getPin(PORT_DI13) == 1)){
		message[14] = 1;
	}
	if ((Port_getPin(PORT_DI13_1) == 0) & (Port_getPin(PORT_DI13) == 0)){
		message[14] = 0;
	}
	if ((Port_getPin(PORT_DI14_1) == 1) & (Port_getPin(PORT_DI14) == 1)){
		message[15] = 1;
	}
	if ((Port_getPin(PORT_DI14_1) == 0) & (Port_getPin(PORT_DI14) == 0)){
		message[15] = 0;
	}
	if ((Port_getPin(PORT_DI15_1) == 1) & (Port_getPin(PORT_DI15) == 1)){
		message[16] = 1;
	}
	if ((Port_getPin(PORT_DI15_1) == 0) & (Port_getPin(PORT_DI15) == 0)){
		message[16] = 0;
	}
	if ((Port_getPin(PORT_DI16_1) == 1) & (Port_getPin(PORT_DI16) == 1)){
		message[17] = 1;
	}
	if ((Port_getPin(PORT_DI16_1) == 0) & (Port_getPin(PORT_DI16) == 0)){
		message[17] = 0;
	}
}

void transmit_data(){
	I2C_sendMessage(message, 17);
}
