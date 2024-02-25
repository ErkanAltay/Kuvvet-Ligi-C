#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include "degiskenler.h"
#include "hareket1.h"
#include "hareket2.h"
     
FILE *fpr, *fpw;


int puan;
int tpuan;
char tplayer [15];
char player [15];

void hideCursor() 
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

void cerceve(int x1, int y1, int x2, int y2, int tur) 
{
    int i;
    for (i = x1; i <= x2; i++) {
        saha[i][y1] = tur;
        saha[i][y2] = tur;
    }
    for (i = y1; i <= y2; i++) {
        saha[x1][i] = tur;
        saha[x2][i] = tur;
    }
}

void ekrani_bas() 
{
    int x, y;
    for (x = 0; x < 80; x++) {
        for (y = 0; y < 23; y++) {
            gotoxy(x + 1, y + 1);
            if (saha[x][y] == 1) {
                printf("%c", 6);
            } else if (saha[x][y] == 2) {
                printf("%c", 6);
            } else if (saha[x][y] == 3) {
                printf("%c", 6);
            }
        }
    }
}

void mypause() 
{
    system("pause>nul");
}

void bilgilendirme() 
{
    system("clear || cls");
    printf("\033[1;34m");  // Mavi renkli başlık
    printf("=============================================\n");
    printf("               OYUN BILGILENDIRME              \n");
    printf("=============================================\n");
    printf("\033[0m");  // Renk sıfırlama
    printf("\033[1;34mOyun 'W' tusu ile oynanmaktadir.\n");
    printf("\033[0m");
    printf("Normal tiklamalar \033[1;34m10 puan\033[0m, Tukenis tekrarlari \033[1;34m20 puan\033[0m.\n");
    printf("Tukenis Tekrari icin \033 art arda 3 defa tiklamalisin w ye \033[0m icinde \033 3 defa hareket 2 yaparsan kaslarin zedelenir.\n");
    printf("Unutma, eger \033[1;34m2 saniye\033[0m icinde \033[1;34m4 defa\033[0m tiklarsan eklemlerine hasar verirsin.\n");
    printf("Her hasar, HP'yi azaltir.\n");
    printf("HP'nin 0 olmasi, eklemlerinin parcalanmasi demektir ve salondan atilirsin.\n");

    printf("\033[1;34m");  // Mavi renkli alt başlık
    printf("=============================================\n");
    printf("\033[0m");  // Renk sıfırlama

    printf("Devam etmek icin bir tusuna bas.\n");
    mypause();
}

void yukleme()
{
    printf("                Yukleniyor...\n");
    
    for (i = 1; i <= 120; i++) {
        Sleep(10);
        printf("\r");
        printf("%c", 219);
        for (j = 1; j <= i; j++) {
            printf("%c", 219);
        }
    }
    printf("%c", 219);
    system("cls");
}

	void cikiskayittut() 
{
               printf("----------------\n");
               printf("-Ne yaptiginin farkinda degilsin senden olmaz baska sporlara yonel-\n");
               printf("-Oyuncu Kayit-\n");
               printf("----------------\n\n");
   		    	fpw = fopen("oyuncu.txt", "a");
   			    printf("Oyuncu adi giriniz\n");
			   scanf("%s",&tplayer);
            	fprintf(fpw,"%s | %d Tom Platzi Onurlandiramadi.\n",tplayer,tpuan);
  	  		fclose(fpw);
            exit(0);
}

	void tukeniskayit() 
{
               printf("----------------\n");
               printf("-Oyuncu Kayit-\n");
               printf("-Sir Tom Platz Seninle Gurur Duyuyor-\n");
               printf("----------------\n\n");
   			fpw = fopen("oyuncu.txt", "a");
   			printf("Oyuncu adi giriniz ");
			   scanf("%s",&tplayer);
            	fprintf(fpw,"%s | %d Sir Tom Platz Seninle Gurur Duyuyor\n",tplayer,tpuan);
  	  		fclose(fpw);
            exit(0);
}



void karakterbas() 
{
    gotoxy(6, 9);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219,22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22,219);
    gotoxy(10, 10);
    printf("V  (0_0)   V");
    gotoxy(10, 11);
    printf("|--{    }--|");
    gotoxy(10, 12);
    printf("   !    !");
    gotoxy(10, 13);
    printf("   !    !");
    gotoxy(10, 14);
    printf("   d    b");
}

void karakterbasolu() 
{
    system("CLS");
    cerceve(0,0,79,22,2);
    ekrani_bas();
     gotoxy(29,10);
    printf("Eklemlerini Parcaladin Hizli Degil Akilli Calis!");
    gotoxy(29,11);
    printf("Kaydini almaliyiz bir tusa bas.");
    gotoxy(6, 10);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 219);
    gotoxy(10, 11);
    printf(" --{    }-- ");
    gotoxy(10, 12);
    printf("   !    !");
    gotoxy(10, 13);
    printf("   !    !");
    gotoxy(10, 14);
    printf("   d    b");
}


int main() 
{
    hideCursor();
    bilgilendirme();
    yukleme();
    enbas:
    hideCursor();
    cerceve(0, 0, 79, 22, 2);
    ekrani_bas();
    karakterbas();
    stamina = 100;
    clock_t baslangic_zamani = clock();  // Başlangıç zamanını al
    clock_t mevcut_zaman = clock();
    double gecen_zaman = ((double) (mevcut_zaman - baslangic_zamani)) / CLOCKS_PER_SEC;

        while (1) {
            
          gotoxy(85, 2);
          printf("Staminan %d", stamina);
          gotoxy(85, 1);
          printf("Puanin %d", tpuan);
          gotoxy(85,3);
          printf("HP %d", hp);
            if (_kbhit()) 
            {
            ch = _getch();
                if (ch == 'W' || ch == 'w') {
                    wsayac++;
                    stamina -=10;
                    hareket1();
                    tpuan +=10;
                    gotoxy(94,2);
                    printf("00 ");
                        if (wsayac == 3) {
                        int hareket2say;
                        hareket2say++;
                        stamina -= 20;
                        tpuan += 25;
                        gotoxy(85, 1);
                        printf("Puanin %d", tpuan);
                        gotoxy(85, 2);
                        printf("Staminan %d", stamina);
                        hareket2();
                        if(hareket2say == 3 && gecen_zaman <= 1.0)
                                {
                                    gotoxy(85,10);
                                    printf("Eger 2 saniye icinde 4 defa tiklarsan eklemlerine hasar verirsin merak etme sonra ki set yenilenecek");
                                    hp -= 30;
                                    if(hp<=0){
                                    system("CLS");
                                    karakterbasolu();                                    
                                    mypause();
                                    system("CLS");
                                    cikiskayittut();
                                    break;
                                    }                  
                                }
                        wsayac = 0;
                        baslangic_zamani = clock();  // Zamanı sıfırla   
            }
                                        
        }
        }
            if (stamina <= 0) 
            {

                setsay++;
                if(setsay==3)
                {
                system("CLS");
                tukeniskayit();
                }
                else
                {
                    gotoxy(85, 3);
                    printf("Gucun bitti, biraz dinlenmelisin");
                    Sleep(10);
                    gotoxy(85, 3);
                    printf("                                 ");
                    gotoxy(85, 4);
                    printf("Devam etmek istiyorsan W istemiyorsan Q:");
                    gotoxy(124,4);
                    scanf("%s",&karar);
                        if(karar=='q') 
                         {
                            while(1)
                            {   
                                system("CLS");
     	                        cikiskayittut();	//oyuncunun puanını ve adını kaydeder
     	                        break;
	                        }
                         }
                        else
                        {
                            system("cls");
                            goto enbas;     
                        }
                    baslangic_zamani = clock();  // Zamanı sıfırla
        }
     }
  }
}
