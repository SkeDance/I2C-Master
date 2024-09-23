#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "mtr_planner/mtr_planner.h"
#include "inits.h"

int main(void)
{
    cli();
    
    Init_PORT();
	Init_I2C();
    Init_Planner();
	

    sei();
	
    while (1) 
    {
		Planner_runTasks();
    }
}

