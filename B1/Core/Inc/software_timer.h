/*
 * software_timer.h
 *
 *  Created on: Oct 5, 2022
 *      Author: minhl
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
void setTimer1(int duration);
void timerRun();
void reset();
void display7SEG(int nums);

#endif /* INC_SOFTWARE_TIMER_H_ */
