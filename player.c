#include <stdio.h>
#include "player.h"
#include "string.h"

void initPlayer(player* p, int arrsize){
    for(size_t i=0; i<arrsize; i++){
        (p+i)->isbangkrut = false;
        (p+i)->isbot = false;
        (p+i)->isnapi = false;
        strcpy((p+i)->nama, "0");
        (p+i)->posisi = 0;
        (p+i)->totalrumah = 0;
        (p+i)->totaltanah = 0;
        (p+i)->uang = 200;
    }
}

void setNamaPlayer(player* p, int arrsize){
    for(size_t i=0; i<arrsize; i++){
        char nama[32];
        puts("masukkan nama: \(maks 30 kata\)");
        puts("jika ingin bot, ketik \"bot\" atau \"ai\"");
        printf("nama: ");
        scanf("%30s", nama);
        strcpy((p+i)->nama, nama);
    }
}