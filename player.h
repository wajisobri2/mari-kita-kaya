#ifndef _PLAYER_H
#define _PLAYER_H
#include <stdbool.h>

typedef struct player{
    bool isbangkrut;
    bool isbot;
    bool isnapi;
    char nama[30];
    int posisi;
    int totalrumah;
    int totaltanah;
    int uang; 
}player;

void initPlayer(player* p, int arrsize);
void setNamaPlayer(player* p, int arrsize);

#endif