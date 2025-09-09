/*
 * music.h
 *
 *  Created on: Jul 3, 2025
 *      Author: chandisecherine
 */

#ifndef INC_MUSIC_H_
#define INC_MUSIC_H_

#include "main.h"
#include "play_keys.h"

// note length values
#define w 60000000
#define h w/2
#define q w/4
#define e w/8
#define d w/6
#define g w/20

extern volatile uint32_t note_Index;



struct note{
	uint32_t pitch;
	uint32_t duration;
};

typedef const struct note note_t;
extern note_t *song_;
extern volatile uint8_t rest_flag;

static const note_t Hot_Cross_Buns[] = {
		{E5,h-g},{1,g},
		{D5,h-g},{1,g},
		{C5,w-g},{1,g},
		{E5,h-g},{1,g},
		{D5,h-g},
		{1,g},
		{C5,w-g},
		{1,g},
		{C5,q-g},
		{1,g},
		{C5,q-g},
		{1,g},
		{C5,q-g},
		{1,g},
		{C5,q-g},
		{1,g},
		{D5,q-g},
		{1,g},
		{D5,q-g},
		{1,g},
		{D5,q-g},
		{1,g},
		{D5,q-g},
		{1,g},
		{E5,h-g},
		{1,g},
		{D5,h-g},
		{1,g},
		{C5,w-g},
		{1,g},
		{0, 0}
};

static const note_t Cycle_End[] = {
		{F5,h-g},{1,g},
		{Bb5,d-g},{1,g},
		{A5,d-g},{1,g},
		{G5,d-g},{1,g},
		{F5,h-g},{1,g},
		{D5,h-g},{1,g},
		{Eb5, d-g},{1,g},
		{F5,d-g},{1,g},
		{G5,d-g},{1,g},
		{C5,d-g},{1,g},
		{D5,d-g},{1,g},
		{Eb5,d-g},{1,g},
		{D5,h-g},{1,g},
		{F5,h-g},{1,g},
		{F5,h-g},{1,g},
		{Bb5,d-g},{1,g},
		{A5,d-g},{1,g},
		{G5,d-g},{1,g},
		{F5,h-g},{1,g},
		{Bb5,h-g},{1,g},
		{Bb5,d-g},{1,g},
		{C6,d-g},{1,g},
		{Bb5,d-g},{1,g},
		{A5,d-g},{1,g},
		{G5,d-g},{1,g},
		{A5,d-g},{1,g},
		{Bb5,w-g},{0,g},
		{0,0}
};

static const note_t Mario[] = {
		{E5,e-g},{1,g},
		{E5,e-g},{1,g},
		{1,e},
		{E5,e-g},{1,g},
		{1,e},
		{C5,e-g},{1,g},
		{E5,q-g},{1,g},
		{G5,q-g},{1,g},
		{1,q},
		{G4,q},{1,g},
		{1,q},
		{C5,q}, //NO GAP
		{C5,e-g},{1,g},
		{G4,e-g},{1,g},
		{1,q},
		{E4,q}, //NO GAP
		{E4,e-g},{1,g},
		{A4,q-g},{1,g},
		{B4,q-g},{1,g},
		{Bb4,e-g},{1,g},
		{A4,q-g},{1,g},
		{G4,d-g},{1,g},
		{E5,d-g},{1,g},
		{G5,d-g},{1,g},
		{A5,q-g},{1,g},
		{F5,e-g},{1,g},
		{G5,e-g},{1,g},
		{1,e},
		{E5,q-g},{1,g},
		{C5,e-g},{1,g},
		{D5,e-g}, {1,g},
		{B4,q}, //NO GAP
		{B4,e-g},{1,g},
		{C5,q}, //NO GAP
		{C5,e-g},{1,g},
		{G4,e-g},{1,g},
		{1,q},
		{E4,q}, //NO GAP
		{E4,e-g},{1,g},
		{A4,q-g},{1,g},
		{B4,q-g},{1,g},
		{Bb4,e-g},{1,g},
		{A4,q-g},{1,g},
		{G4,d-g},{1,g},
		{E5,d-g},{1,g},
		{G5,d-g},{1,g},
		{A5,q-g},{1,g},
		{F5,e-g},{1,g},
		{G5,e-g},{1,g},
		{1,e},
		{E5,q-g},{1,g},
		{C5,e-g},{1,g},
		{D5,e-g}, {1,g},
		{B4,q}, //NO GAP
		{B4,e-g},{1,g},
		{1,q},

		{G5,e-g},{1,g},
		{Gb5,e-g},{1,g},
		{F5,e-g},{1,g},
		{Eb5,q-g},{1,g},
		{E5,q-g},{1,g},
		{G4,e-g},{1,g},
		{A4,e-g},{1,g},
		{C5,e-g},{1,g},
		{1,e},
		{A4,e-g},{1,g},
		{C5,e-g},{1,g},
		{D5,e-g},{1,g},
		{1,q},
		{G5,e-g},{1,g},
		{Gb5,e-g},{1,g},
		{F5,e-g},{1,g},
		{Eb5,q-g},{1,g},
		{E5,q-g},{1,g},
		{1,e},
		{C6,q-g},{1,g},
		{C6,e-g},{1,g},
		{C6,h-g},{1,g},
		{1,q},
		{G5,e-g},{1,g},
		{Gb5,e-g},{1,g},
		{F5,e-g},{1,g},
		{Eb5,q-g},{1,g},
		{E5,q-g},{1,g},
		{G4,e-g},{1,g},
		{A4,e-g},{1,g},
		{C5,e-g},{1,g},
		{1,e},
		{A4,e-g},{1,g},
		{C5,e-g},{1,g},
		{D5,e-g},{1,g},
		{1,q},
		{Eb5,q-g},{1,g*2},
		{D5,q}, //NO GAP
		{D5,e-g},{1,g},
		{C5,h},{1,g},


		{0,0}

};



void play_song(note_t song[]);



#endif /* INC_MUSIC_H_ */
