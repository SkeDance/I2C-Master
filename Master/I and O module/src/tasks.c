#include "tasks.h"

	char message[5] = {1, 20, 0, 0, 0};

void Compare(){
	
	/*
	//bool DI1 = Request(PORT_DI1);
	//bool DI1_1 = Request(PORT_DI1_1);
	//bool DI2 = Request(PORT_DI2);
	bool DI2_1 = Request(PORT_DI2_1);
	bool DI3 = Request(PORT_DI3);
	bool DI3_1 = Request(PORT_DI3_1);
	bool DI4 = Request(PORT_DI4);
	//bool DI4_1 = Request(PORT_DI4_1); //unused
	bool DI5 = Request(PORT_DI5);
	bool DI5_1 = Request(PORT_DI5_1);
	bool DI6 = Request(PORT_DI6);
	bool DI6_1 = Request(PORT_DI6_1);
	bool DI7 = Request(PORT_DI7);
	bool DI7_1 = Request(PORT_DI7_1);
	bool DI8 = Request(PORT_DI8);
	bool DI8_1 = Request(PORT_DI8_1);
	bool DI9 = Request(PORT_DI9);
	bool DI9_1 = Request(PORT_DI9_1);
	bool DI10 = Request(PORT_DI10);
	bool DI10_1 = Request(PORT_DI10_1);
	bool DI11 = Request(PORT_DI11);
	bool DI11_1 = Request(PORT_DI11_1);
	bool DI12 = Request(PORT_DI12);
	bool DI12_1 = Request(PORT_DI12_1);
	bool DI13 = Request(PORT_DI13);
	bool DI13_1 = Request(PORT_DI13_1);
	bool DI14 = Request(PORT_DI14);
	bool DI14_1 = Request(PORT_DI14_1);
	bool DI15 = Request(PORT_DI15);
	bool DI15_1 = Request(PORT_DI15_1);
	bool DI16 = Request(PORT_DI16);
	bool DI16_1 = Request(PORT_DI16_1);
	*/
	
	if ((Port_getPin(PORT_DI2_1) == 1) & (Port_getPin(PORT_DI3) == 1)){
		Port_setPin(LED1);
		message[2] = 1;
	}
	else{
		Port_resetPin(LED1);
		message[2] = 0;
	}
	if ((Port_getPin(PORT_DI3_1) == 1) & (Port_getPin(PORT_DI4) == 1)){
		Port_setPin(LED2);
		message[3] = 1;
	}
	else{
		Port_resetPin(LED2);
		message[3] = 0;
	}
	if ((Port_getPin(PORT_DI5_1) == 1) & (Port_getPin(PORT_DI5) == 1)){
		Port_setPin(LED3);
		message[4] = 1;
	}
	else{
		Port_resetPin(LED3);
		message[4] = 0;
	}
}
void transmit_data(){
	I2C_sendMessage(message, 5);
}
