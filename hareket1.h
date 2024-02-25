#ifndef hareket1_h
#define hareket1_h
#include "gotolar.h"
#include <windows.h>
#include "degiskenler.h"


void hareket1() {
    while (1) {
        gotoxy(agirliksagy, agirliksagx);
        printf("%s", matris);
        gotoxy(solkolx, solkoly);
        printf("V");
        gotoxy(6, 8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 219);
        solkoly = solkoly - 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly + 1);
        printf("|");
        sagkoly = sagkoly - 1;
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(sagkolx, sagkoly + 1);
        printf("|");
        sagkoly = sagkoly - 1;
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(sagkolx, sagkoly + 1);
        printf("V");
        Sleep(1);
        solkoly = solkoly - 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly + 1);
        printf("V");
        Sleep(200);

        sagkoly = sagkoly + 1;
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(sagkolx, sagkoly);
        solkoly = solkoly + 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly);

        sagkoly = sagkoly + 1;
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(sagkolx, sagkoly);

        solkoly = solkoly + 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly);

        gotoxy(solkolx, solkoly);
        printf("V");
        gotoxy(solkolx, solkoly);
        printf("V");
        gotoxy(sagkolx, sagkoly);
        printf("V");
        Sleep(0);

        for (p; p < 46; p++) {
            gotoxy(5, 8);
            printf("                       ");
        }
        p = 2;
        gotoxy(6, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 219);
        break;
    }
}


#endif 