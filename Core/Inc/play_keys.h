/*
 * play_keys.h
 *
 *  Created on: Jul 1, 2025
 *      Author: chandisecherine
 */

#ifndef INC_PLAY_KEYS_H_
#define INC_PLAY_KEYS_H_


//define note reload values
#define C4  10019
#define Db4 9477
#define D4  8929
#define Eb4 8441
#define E4  7955
#define F4  7522
#define Gb4 7095
#define G4  6696
#define Ab4 6325
#define A4  5966
#define Bb4 5633
#define B4  5314

#define C5  5019
#define	Db5	4738
#define	D5	4472
#define	Eb5	4220
#define	E5	3983
#define	F5	3761
#define	Gb5	3552
#define	G5	3348
#define	Ab5	3163
#define	A5	2983
#define	Bb5	2817
#define	B5	2657
#define	C6	2507



extern volatile uint8_t EN_flag;
extern uint32_t prev_input;
extern volatile uint32_t Index;
extern uint32_t output;

//4-bit 32 element sine wave
static const unsigned short wave[32] = {8,9,11,12,13,14,14,15,15,15,14,
								14,13,12,11,9,8,7,5,3,2,
								2,1,1,1,2,2,3,4,5,7};

//take in input
void Piano_In(uint32_t input, uint32_t PINA, uint32_t PINB, uint32_t PINC, uint32_t PIND);

//output to DAC
void DAC_OUT();


#endif /* INC_PLAY_KEYS_H_ */
