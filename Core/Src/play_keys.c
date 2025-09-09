/*
 * play_inputs.c
 *
 *  Created on: Jul 1, 2025
 *      Author: chandisecherine
 */
#include <stdint.h>
#include "main.h"
#include "play_keys.h"
#include "music.h"


//take in input
void Piano_In(uint32_t input, uint32_t PINA, uint32_t PINB, uint32_t PINC, uint32_t PIND){
	if(input == prev_input){ //don't do anything, same input is pressed
//		EN_flag = 1;
//		SysTick_Config(PINA);
		return;
	}


	//return the appropriate input pressed
	if( input == 0x01){
		EN_flag = 1;
		SysTick_Config(PINA);

	}else if( input == 0x02 ){
		EN_flag = 1;
		SysTick_Config(PINB);

	}else if( input == 0x04 ){
		EN_flag = 1;
		SysTick_Config(PINC);

	}else if( input == 0x20 ){
		EN_flag = 1;
		SysTick_Config(PIND);
//		play_song(Cycle_End);

	}else if( input == 0x03 ){
		EN_flag = 1;
//		SysTick_Config(PIND);
		play_song(Cycle_End);

	}else if( input == 0x05 ){
		EN_flag = 1;
//		SysTick_Config(PIND);
		play_song(Hot_Cross_Buns);

	}else if( input == 0x06 ){
		EN_flag = 1;
		play_song(Mario);

	}else{ //none or multiple inputs are pressed
		EN_flag = 0;
	}

	prev_input = input;
}

//0010 0111

//0000 1111

//output to DAC
void DAC_OUT(uint32_t value){

	if(EN_flag == 0){
		output = 0x00; //turn off all pins
	}else{
		output = value;
	}

	GPIOC->ODR = output;

	Index = (Index+1)&0x0000001F;
}
