/**
 * @file    program_01.c
 * @brief   A simple test.
 */

#include <dice.h>
#include "board.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {

	init();

	//Init Variables
	bool active = false;
	bool old_active = false;

	//Init of 7-Segment
	set_output(PTD7, low_level);
	set_output(PTD6, low_level);
	set_output(PTD5, low_level);
	set_output(PTD4, low_level);
	set_output(PTD3, low_level);
	set_output(PTD2, low_level);
	set_output(PTD1, low_level);
	set_output(PTD0, high_level);

	//Check-Input Loop
	while (true) {
		if (get_input(PTA2) == high_level) {
			active = false;
			wait_ms(5);
		} else {
			active = true;
			wait_ms(5);
		}

		//execute code if button-state has changed
		if (active != old_active){
			old_active = active;

			if(!old_active) {
				printf("Button is pressed\n");
				set_output(PTD0, low_level);
				dice();
				set_output(PTD0, high_level);
			}else{
				printf("Button is released\n");
			}
		}
	}
	return 0;
}
