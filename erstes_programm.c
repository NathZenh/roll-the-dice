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
	int old_active = 0;

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

			switch (old_active) {
			case 0:
				printf("Button is released\n");
				break;
			case 1:
				printf("Button is pressed\n");
				set_output(PTD0, low_level);
				dice();
				set_output(PTD0, high_level);
				break;
			default:
				printf("\n\nFEHLER\n\n");
			}
		}
	}
	return 0;
}

