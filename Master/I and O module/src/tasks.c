#include "tasks.h"

volatile static int c = 0;
volatile static int k = 0;
	char message[5] = {1, 20, 0, 0, 0};
bool Request(Port_Name_t port, Port_Pin_t pin){
	int status;
	
	if (Port_getPin(port, pin) == 1){
		status = true;
	}
	if (Port_getPin(port, pin) == 0){
		status = false;
	}	
	return status;
}

void count_set_DI(){
	switch((k/2)){
		case 0:{
			Port_setPin(PORT_DI1);
			break;
		}
		case 1:{
			Port_setPin(PORT_DI1_1);
			break;
		}
		case 2:{
			Port_setPin(PORT_DI2);
			break;
		}
	}
}

void count_reset_DI(){
	switch((k/2)){
		case 0:{
			Port_resetPin(PORT_DI1);
			break;
		}
		case 1:{
			Port_resetPin(PORT_DI1_1);
			break;
		}
		case 2:{
			Port_resetPin(PORT_DI2);
			break;
		}
	}
}


void Compare(){

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
	/* unused
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

	char status[6] = {DI2_1, DI3, DI3_1, DI4, DI5, DI5_1};
	for (int i = 0; i < 6; i++){
		if ((status[k] == 1) & (status[(k + 1)] == 1)){
			count_set_DI(k);
			message[(2 + (k/2))] = 1;
			k = k + 2;
			if(k > 4){
				PORTA |= (1 << 7); //test for cycle
				k = 0;
			}	
		}
		else{
			count_reset_DI(k);
			message[(2 + (k/2))] = 0;
			k = k + 2;
			if(k > 4){
				k = 0;
			}
		}
		
		if (i > 6){
			i = 0;
		}
	}
}

void transmit_data(){
	I2C_sendMessage(message, 5);
}
