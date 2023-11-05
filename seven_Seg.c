/*
 * func.c
 *
 *  Created on: 27.09.2023
 *      Author: nathzenh
 */

#include <seven_Seg.h>
#include <show_seven_Seg.h>
#include <stdio.h>
#include "board.h"

void seven_seg(int i) {
	clear_seven_seg_off();

	// switch case for 7-segment display
	printf("starting switch\n");
	switch(i){
		case 0:
			zero_seven_seg();
			break;
		case 1:
			one_seven_seg();
			break;
		case 2:
			two_seven_seg();
			break;
		case 3:
			three_seven_seg();
			break;
		case 4:
			four_seven_seg();
			break;
		case 5:
			five_seven_seg();
			break;
		default:
			printf("ERROR in show7Seg on Line 38\n");

	}
}
