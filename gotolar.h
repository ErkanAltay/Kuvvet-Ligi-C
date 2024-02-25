#ifndef gotolar_h
#define gotolar_h
#include <windows.h>
void gotoxy(short x, short y) {
    HANDLE hConsoleOutput;
    COORD Cursor_Pos = {x - 1, y - 1};
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}

void hizaliYazdir(char* metin) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int screenWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int screenHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    int x = (screenWidth - strlen(metin)) / 2;
    int y = screenHeight / 2;

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    printf("%s", metin);
}
 #endif