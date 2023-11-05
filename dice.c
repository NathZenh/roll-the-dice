/*
 * dice.c
 *
 *  Created on: 31.10.2023
 *      Author: nathzenh
 */

#include <seven_Seg.h>
#include "board.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dice(void) {
	printf("DICE\n");
	//Init
	int number = 0;
	int old_number = 0;

	for(int x = 0; x < 7; x++){
		// generates time to wait longer and longer
		int ms_to_wait = pow(2, x+4);
		wait_ms(ms_to_wait);
		// Generate random Number 0-5 that isn't the same like before
		printf("Number is null: %d \n", number);
		printf("Oldnumber is null: %d \n", old_number);
		do{
			number = rand()%6;
			printf("Number is: %d \n", number);
		}while(number == old_number);

		old_number = number;
		//Sends the number to show7Seg.c
		seven_seg(number);
	}
}
