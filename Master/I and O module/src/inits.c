#include "inits.h"

void Init_PORT()
{
	Port_init(PORT_DI1, OUT, true);
	Port_init(PORT_DI1_1, OUT, true);
	Port_init(PORT_DI2, OUT, true);
	Port_init(PORT_DI2_1, IN, true);
	Port_init(PORT_DI3, IN, true);
	Port_init(PORT_DI3_1, IN, true);
	Port_init(PORT_DI4, IN, true);
	Port_init(PORT_DI4_1, OUT, true);
	Port_init(PORT_DI5, IN, true);
	Port_init(PORT_DI5_1, IN, true);
	Port_init(PORT_DI6, OUT, true);
	Port_init(PORT_DI6_1, OUT, true);
	Port_init(PORT_DI7, OUT, true);
	Port_init(PORT_DI7_1, OUT, true);
	Port_init(PORT_DI8, OUT, true);
	Port_init(PORT_DI8_1, OUT, true);
	Port_init(PORT_DI9, OUT, true);
	Port_init(PORT_DI9_1, OUT, true);
	Port_init(PORT_DI10, OUT, true);
	Port_init(PORT_DI10_1, OUT, true);
	Port_init(PORT_DI11, OUT, true);
	Port_init(PORT_DI11_1, OUT, true);
	Port_init(PORT_DI12, OUT, true);
	Port_init(PORT_DI12_1, OUT, true);
	Port_init(PORT_DI13, OUT, true);
	Port_init(PORT_DI13_1, OUT, true);
	Port_init(PORT_DI14, OUT, true);
	Port_init(PORT_DI14_1, OUT, true);
	Port_init(PORT_DI15, OUT, true);
	Port_init(PORT_DI15_1, OUT, true);
	Port_init(PORT_DI16, OUT, true);
	Port_init(PORT_DI16_1, OUT, true);
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


