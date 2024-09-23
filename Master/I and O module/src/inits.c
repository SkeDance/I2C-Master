#include "inits.h"

void Init_PORT()
{
	Port_init(PORT_DI1, IN, true);
	Port_init(PORT_DI1_1, IN, true);
	Port_init(PORT_DI2, IN, true);
	Port_init(PORT_DI2_1, IN, true);
	Port_init(PORT_DI3, IN, true);
	Port_init(PORT_DI3_1, IN, true);
	Port_init(PORT_DI4, IN, true);
	Port_init(PORT_DI4_1, IN, true);
	Port_init(PORT_DI5, IN, true);
	Port_init(PORT_DI5_1, IN, true);
	Port_init(PORT_DI6, IN, true);
	Port_init(PORT_DI6_1, IN, true);
	Port_init(PORT_DI7, IN, true);
	Port_init(PORT_DI7_1, IN, true);
	Port_init(PORT_DI8, IN, true);
	Port_init(PORT_DI8_1, IN, true);
	Port_init(PORT_DI9, IN, true);
	Port_init(PORT_DI9_1, IN, true);
	Port_init(PORT_DI10, IN, true);
	Port_init(PORT_DI10_1, IN, true);
	Port_init(PORT_DI11, IN, true);
	Port_init(PORT_DI11_1, IN, true);
	Port_init(PORT_DI12, IN, true);
	Port_init(PORT_DI12_1, IN, true);
	Port_init(PORT_DI13, IN, true);
	Port_init(PORT_DI13_1, IN, true);
	Port_init(PORT_DI14, IN, true);
	Port_init(PORT_DI14_1, IN, true);
	Port_init(PORT_DI15, IN, true);
	Port_init(PORT_DI15_1, IN, true);
	Port_init(PORT_DI16, IN, true);
	Port_init(PORT_DI16_1, IN, true);
}

void Init_I2C(){
	I2C_initMaster();
}

void Init_Planner()
{
	Planner_addTask(Compare, 500, true);
	Planner_addTask(transmit_data, 500, true);
	Planner_init();
}


