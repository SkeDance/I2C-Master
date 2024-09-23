#ifndef TASKS_H_
#define TASKS_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "mtr_data/mtr_data.h"
#include "mtr_port/mtr_port.h"
#include "mtr_i2c/mtr_i2c.h"

#include "device.h"

void Compare();
void transmit_data();

#endif /* TASKS_H_ */