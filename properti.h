#ifndef _PROPERTI_H
#define _PROPERTI_H
#include <stdbool.h>

typedef struct properti{
    char* nama[32];
    int pemilik;
    int hargabeli;
    int hargabangunan;      // bisa rumah bisa hotel
    int hargasewa[5];       // 0 = tidak ada rumah, 1 = 1 bangunan, 2 = 2 bangunan, 3 = 3 bangunan, 4 = landmark
    int jumlahbangunan;
}properti;

#endif