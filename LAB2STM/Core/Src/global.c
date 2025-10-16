/*
 * global.c
 *
 *  Created on: Oct 10, 2025
 *      Author: Đức Toàn
 */

#include "global.h"

int status = INIT;

int hour = 15;
int minute = 8;
int second = 50;

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {3, 2, 5, 7};

int TIME_7SEG = 25;
