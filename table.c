#include "table.h"
struct Table * Create_Table(unsigned short PlayerCount, struct Player * All_Players){
    struct Table t;
    t.PlayerCount = PlayerCount; //PlayerCount must be less than MAX_PLAYER
    t.All_Players = All_Players;
    for(int i = 0; i<PlayerCount;i++){
        t.MoneySpent[i] = 0;
    }

}