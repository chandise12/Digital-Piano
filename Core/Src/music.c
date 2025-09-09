/*
 * music.c
 *
 *  Created on: Jul 3, 2025
 *      Author: chandisecherine
 */

#include "music.h"
#include "main.h"
#include <stdio.h>


extern TIM_HandleTypeDef htim2;
note_t *song_ = NULL;
volatile uint8_t rest_flag = 0;


volatile uint32_t note_Index = 0;
void play_song(note_t song[]){

	 song_ = song;


	TIM2->ARR = song_[0].duration;

	EN_flag = 1;
	SysTick_Config(song_[note_Index].pitch);
	TIM2->ARR = song_[note_Index].duration;
	note_Index++;
	HAL_TIM_Base_Start_IT(&htim2);



	while(song_[note_Index].duration != 0){

	}
	note_Index = 0;
	song_ = NULL;
}
