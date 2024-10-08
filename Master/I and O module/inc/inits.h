#ifndef INITS_H_
#define INITS_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "mtr_port/mtr_port.h"
#include "mtr_data/mtr_data.h"
#include "mtr_crc/mtr_crc.h"
#include "mtr_i2c/mtr_i2c.h"
#include "mtr_planner/mtr_planner.h"
#include "mtr_service/mtr_service.h"

#include "config.h"
#include "device.h"
#include "tasks.h"

void Init_PORT();
void Init_I2C();
void Init_Planner();

#endif