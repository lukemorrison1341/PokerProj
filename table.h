#ifndef TABLE_H
#define TABLE_H
#include "player.h"
typedef struct Table{
    unsigned short cards[5];
    unsigned short PlayerCount;
    struct Player All_Players[MAX_PLAYERS];
    unsigned int Money_Spent[MAX_PLAYERS];
};

struct Table * Create_Table(unsigned short PlayerCount, struct Player * All_Players);
 
void Initialize_Table(unsigned short PlayerCount, struct Player * All_Players);


#endif