#ifndef hareket2_h
#define hareket2_h
#include "gotolar.h"
#include <windows.h>
#include "degiskenler.h"
void hareket2() {
    int p = 2;
    while (1) {
        gotoxy(agirliksagy, agirliksagx);
        printf("%s", matris);
        gotoxy(agirliksolx, agirliksoly);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 219);

        agirliksolx = agirliksoly - 1;
        gotoxy(agirliksolx, agirliksoly);
        gotoxy(agirliksolx, agirliksoly + 1);
        printf(" ");
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(solkolx, solkoly);
        printf("V");

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
        solkoly = solkoly - 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly + 1);
        printf("V");
        Sleep(500);
        sagkoly = sagkoly + 1;
        gotoxy(sagkolx, sagkoly);
        printf(" ");
        gotoxy(sagkolx, sagkoly - 2);
        printf(" ");
        solkoly = solkoly + 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly - 2);
        printf(" 	");
        sagkoly = sagkoly + 1;
        gotoxy(sagkolx, sagkoly);
        printf(" ");
        gotoxy(sagkolx, sagkoly - 2);
        printf(" ");
        solkoly = solkoly + 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly - 2);
        printf(" 	");
        sagkoly = sagkoly + 1;
        gotoxy(sagkolx, sagkoly);
        printf(" ");
        gotoxy(sagkolx, sagkoly - 2);
        printf(" ");
        solkoly = solkoly + 1;
        gotoxy(solkolx, solkoly);
        printf("");
        gotoxy(solkolx, solkoly - 2);
        printf(" 	");
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(solkolx, solkoly);
        printf("V");
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(solkolx, solkoly);
        printf("V");
        gotoxy(agirliksolx, agirliksagy);
        sagkoly = sagkoly;
        gotoxy(sagkolx, sagkoly);
        printf("");
        gotoxy(sagkolx, sagkoly);
        printf("V");
        Sleep(0);
        gotoxy(44, 44);
        for (p; p < 46; p++) {
            gotoxy(p, agirliksoly);
            printf("                            ");
        }
        gotoxy(6, 9);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 219);
        break;
    }
}
#endif