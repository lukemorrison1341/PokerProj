#include "player.h"
struct Player * Create_Player(char * name, unsigned int * Buy_In){
    struct Player p;
    p.cards = {NO_CARD,NO_CARD};
    p.name = *name;
    p.Buy_In = *Buy_In;
    return &p;
}

struct Player * Generate_RandomPlayer(){
    struct Player p;
    unsigned int index = lcg % 52;
    p.name = Random_Names[index];
    p.cards = {NO_CARD,NO_CARD};
    p.Buy_In = 0;
    return p;
}

