/*
 * software_timer.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Welcome
 */
#include "software_timer.h"

int TICK = 10;// time cycle

// timer1 is used to run time as a clock
int timer1_flag = 0;
int timer1_counter = 0;

// timer2 is used to control 4 led 7-SEG
int timer2_flag = 0;
int timer2_counter = 0;

// timer3 is used to control LED-RED and DOT-LED
int timer3_flag = 0;
int timer3_counter = 0;


void setTimer1(int duration){
	timer1_counter = duration/TICK;
	timer1_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration/TICK;
	timer2_flag = 0;
}

void setTimer3(int duration){
	timer3_counter = duration/TICK;
	timer3_flag = 0;
}

void timerRun(){
	if(timer1_counter > 0) timer1_counter--;
	if(timer1_counter == 0){
		timer1_flag = 1;
	}

	if(timer2_counter > 0) timer2_counter--;
	if(timer2_counter == 0){
		timer2_flag = 1;
	}

	if(timer3_counter > 0) timer3_counter--;
	if(timer3_counter == 0){
		timer3_flag = 1;
	}
}

