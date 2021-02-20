#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
//#include <graphics.h>
#include <math.h>

int main() {
    int birx, biry, x, a;
    int ikix, ikiy;
    int ucx, ucy;
    int dortx, dorty;
    int bx;
    int by;
    int cx;
    int cy;
    int y;
    //int line();
    int d;
    int wbir;
    int wiki;
    int wuc;
    int i, j; //i satır j sütun
    int initwindow;
    //int line;
    int koordinat[50][50];
    //    int initwindow();
    int bas, bass, basi, basu, basd, basb, basa, basy, basss;

    printf("DIKKAT\n\tx ve y koordinatlarini en fazla 50 olacak sekilde giriniz.\n");
bass:
    printf("1. x koordinati giriniz: ");
    scanf("%d", &birx);
    if (birx >= 50) {
        printf("Hatali giris.");
        goto bass;
    }
    else goto bas;

bas: printf("1. y koordinati giriniz: ");
    scanf("%d", &biry);
    if (biry >= 50) {
        printf("Hatali giris.");
        goto bas;
    }
    else goto basi;

   basi: printf("2. x koordinati giriniz: ");
    scanf("%d", &ikix);
    if (ikix >= 50) {
        printf("Hatali giris.");
        goto basi;
    }
    else goto basu;

    basu: printf("2. y koordinati giriniz: ");
    scanf("%d", &ikiy);
    if (ikiy >= 50) {
        printf("Hatali giris.");
        goto basu;
    }
    else goto basd;

    basd: printf("3. x koordinati giriniz: ");
    scanf("%d", &ucx);

    if (ucx >= 50) {
        printf("Hatali giris.");
        goto basd;
    }
    else goto basb;

    basb: printf("3. y koordinati giriniz: ");
    scanf("%d", &ucy);
    if (ucy >= 50) {
        printf("Hatali giris.");
        goto basb;
    }
    else goto basa;

    /*Yapısı: line(x1,y1,x3,y3) //taban çizgisi
    line(x1,y1,x2,y2) //sol çizgi
    line (x3,y3,x2,y2) //sağ çizgi

    Yapıya Örnek:
    line(100,400,400,400); //taban
    line(100,400,250,100); //sol
    line(400,400,250,100); //sağ
    */


    basa: printf("4. x koordinati giriniz: ");
    scanf("%d", &dortx);
    if (dortx >= 50) {
        printf("Hatali giris.");
        goto basa;
    }
    else goto basy;

    basy: printf("4. y koordinati giriniz: ");
    scanf("%d", &dorty);
    if (dorty >= 50) {
        printf("Hatali giris.");
        goto basy;
    }
    else goto basss;

    /*initwindow(500,500,0,0);

    line(birx, biry, ucx, ucy);
    line(birx, biry, ikix, ikiy);
    line(ucx, ucy, ikix, ikiy);
    getch();
    */
    basss:
    bx = ikix - birx;
    by = ikiy - biry;
    cx = ucx - birx;
    cy = ucy - biry;
    x = dortx - birx;
    y = dorty - biry;

    d = ikix * ucy - ucx * ikiy;
    wbir = (x * (ikiy - ucy) + y * (ucx - ikix) + ikix * ucy - ucx * ikiy) / d;
    wiki = (x * ucy - y * ucx) / d;
    wuc = (y * ucx - x * ikiy) / d;

    if ((wbir <= 1 && wbir >= 0) && (wiki <= 1 && wiki >= 0) && (wuc <= 1 && wuc >= 0)) {
        printf("Ucgenin icinde bir nokta yazdiniz.");

    }

else
        printf("Yazdiginiz nokta ucgenin icinde degil.");

 return 0;
    }