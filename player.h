#ifndef PLAYER_H
#define PLAYER_H
#include "poker.h"
#include "random.h"
#include "PlayerAI.h"

struct Table;

typedef struct Player{
    unsigned short cards[2];
    unsigned short PlayerType;
    unsigned int Buy_In;
    char name[32];
};
struct Player * Create_Player(char * name, unsigned int * Buy_In);
struct Player * Generate_RandomPlayer();

static char Random_Names[32][8] = {"Bob","Dick","Casey","Melissa","Beau","Trump","Luke","Ryan"};

#endif