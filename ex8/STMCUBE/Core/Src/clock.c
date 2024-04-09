/*
 * comtrol_time.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Welcome
 */
#include "clock.h"
#include "global.h"

void clock(){
	second++;
	if(second == 60)
	{
		minute++;
		second = 0;
	}

	if(minute == 60)
	{
		hour++;
		minute = 0;
	}

	if(hour == 24) hour = 0;
}

