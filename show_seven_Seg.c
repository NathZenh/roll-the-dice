/*
 * func.c
 *
 *  Created on: 27.09.2023
 *      Author: nathzenh
 */

#include <seven_Seg.h>
#include <stdio.h>
#include "board.h"


void clear_seven_seg_off(void) {
	// set output low (shows nothing)
	set_output(PTD7, low_level);
	set_output(PTD6, low_level);
	set_output(PTD5, low_level);
	set_output(PTD4, low_level);
	set_output(PTD3, low_level);
	set_output(PTD2, low_level);
	set_output(PTD1, low_level);
	printf("Sets everything low\n");
}

// set output to given number
void zero_seven_seg(void) {
	set_output(PTD1, high_level);
	printf("Shows 1\n");
}
void one_seven_seg(void) {
	set_output(PTD6, high_level);
	set_output(PTD3, high_level);
	printf("Shows 2\n");
}
void two_seven_seg(void) {
	set_output(PTD6, high_level);
	set_output(PTD3, high_level);
	set_output(PTD1, high_level);
	printf("Shows 3\n");
}
void three_seven_seg(void) {
	set_output(PTD6, high_level);
	set_output(PTD5, high_level);
	set_output(PTD3, high_level);
	set_output(PTD2, high_level);
	printf("Shows 4\n");
}
void four_seven_seg(void) {
	set_output(PTD6, high_level);
	set_output(PTD5, high_level);
	set_output(PTD3, high_level);
	set_output(PTD2, high_level);
	set_output(PTD1, high_level);
	printf("Shows 5\n");
}
void five_seven_seg(void) {
	set_output(PTD7, high_level);
	set_output(PTD6, high_level);
	set_output(PTD5, high_level);
	set_output(PTD4, high_level);
	set_output(PTD3, high_level);
	set_output(PTD2, high_level);
	printf("Shows 6\n");
}
