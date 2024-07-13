#ifndef POKER_H
#define POKER_H

#include "table.h"
#include "random.h"

#define H_2 0x0
#define H_3 0x1
#define H_4 0x2
#define H_5 0x3
#define H_6 0x4
#define H_7 0x5
#define H_8 0x6
#define H_9 0x7
#define H_10 0x8
#define H_J 0x9
#define H_K 0xA
#define H_Q 0xB
#define H_A 0xC

#define S_2 0xD
#define S_3 0xE
#define S_4 0xF
#define S_5 0x10
#define S_6 0x11
#define S_7 0x12
#define S_8 0x13
#define S_9 0x14
#define S_10 0x15
#define S_J 0x1A
#define S_K 0x1B
#define S_Q 0x1C
#define S_A 0x1D

#define D_2 0x1E
#define D_3 0x1F
#define D_4 0x20
#define D_5 0x21
#define D_6 0x22
#define D_7 0x23
#define D_8 0x24
#define D_9 0x25
#define D_10 0x26
#define D_J 0x27
#define D_K 0x28
#define D_Q 0x29
#define D_A 0x2A

#define C_2 0x2B
#define C_3 0x2C
#define C_4 0x2D
#define C_5 0x2E
#define C_6 0x2F
#define C_7 0x30
#define C_8 0x31
#define C_9 0x32
#define C_10 0x33
#define C_J 0x34
#define C_K 0x35
#define C_Q 0x36
#define C_A 0x37
#define NO_CARD 0x38 //For when a card is removed from the deck after it has been given to a player, or put onto the table.

#define MAIN_PLAYER 0x0
#define RISKY 0x1
#define CONSERVATIVE 0x2

#define MAX_MONEY 65535
#define MAX_PLAYERS 5

unsigned short DECK[52] = {H_2,H_3,H_4,H_5,H_6,H_7,H_8,H_9,H_10,H_J,H_K,H_Q,H_A
                                  ,D_2,D_3,D_4,D_5,D_6,D_7,D_8,D_9,D_10,D_J,D_K,D_Q,D_A,
                                  C_2,C_3,C_4,C_5,C_6,C_7,C_8,C_9,C_10,C_J,C_K,C_Q,C_A,
                                  S_2,S_3,S_4,S_5,S_6,S_7,S_8,S_9,S_10,S_J,S_K,S_Q,S_A
};







void Shuffle_Deck(unsigned short * DECK);

#endif