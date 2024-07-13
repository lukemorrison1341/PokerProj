#include <stdio.h>
#include <stdlib.h>
#include "poker.h"
static unsigned short DECK[52] = {H_2,H_3,H_4,H_5,H_6,H_7,H_8,H_9,H_10,H_J,H_K,H_Q,H_A
                                  ,D_2,D_3,D_4,D_5,D_6,D_7,D_8,D_9,D_10,D_J,D_K,D_Q,D_A,
                                  C_2,C_3,C_4,C_5,C_6,C_7,C_8,C_9,C_10,C_J,C_K,C_Q,C_A,
                                  S_2,S_3,S_4,S_5,S_6,S_7,S_8,S_9,S_10,S_J,S_K,S_Q,S_A
};

int main(){
    char name[32];
    unsigned int main_player_buy_in;
    struct Player * TABLE_PLAYERS[MAX_PLAYERS]; 
    struct Table * PLAYING_TABLE;
    unsigned int player_count;
    
    printf("How many players will there be(including you)?\n");
    scanf("%u",&player_count);
    printf("What is your name\n");
    scanf("%s",&name);
    printf("How much will you buy in?");
    scanf("%d",&main_player_buy_in);
    TABLE_PLAYERS[0] = Create_Player(name,&main_player_buy_in);
    for(int i = 1; i< player_count;i++){
        TABLE_PLAYERS[i] = Generate_RandomPlayer();
    }
    Shuffle_Deck(&DECK);
    return 0;

}

void Shuffle_Deck(unsigned short* DECK){
    unsigned int choose_index = lcg() % 53;
    unsigned int replace_index = lcg() % 53;
    unsigned short temp;

    for(int i = 0; i<52; i++){
        temp = DECK[replace_index];
        DECK[replace_index] = DECK[choose_index];
        DECK[choose_index] = temp;
        choose_index = lcg() % 53;
        replace_index = lcg() % 53;
        
    }

}
