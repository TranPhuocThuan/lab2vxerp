/*
 * software_timer.h
 *
 *  Created on: Oct 11, 2022
 *      Author: Welcome
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TICK;

// timer1 is used to run time as a clock
extern int timer1_flag;
extern int timer1_counter;

// timer2 is used to control 4 led 7-SEG
extern int timer2_flag;
extern int timer2_counter;

// timer3 is used to control LED-RED and DOT-LED
extern int timer3_flag;
extern int timer3_counter;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
