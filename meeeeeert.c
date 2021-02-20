#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
int sec,a;
void tasmenu(){
printf("\t***TASLAR**\n");
printf("TASLAR BEYAZ KABUL EDILECEK !!! \a\a\n");
printf("1-Piyon\n2-Sah\n3-Fil\n4-vezir\n5-At\n6-Kale\n");
printf("Bir tas seciniz: ");
scanf("%d",&sec);
switch(sec){
    case 1:piyon(); break;
    case 2:sah(); break;
    case 3: fil(); break;
    case 4: vezir();break;
    case 5: at(); break;
    case 6: kale(); break;
    default: printf("Yanlis secim yaptiniz\n"); tasmenu(); break;



}
}
void piyon(){
    printf("piyonumuzun konumu 1A dir\n");
     int tahta[8][8];
    for(int i=8;i>0;i--){
        for(int j=0;j<8;j++){
            printf("[  %d %c ]",i,j+65);

        }
printf("\n");
    }

    printf("PIYONUN GIDEBILECEGI YERLER \n2A \n3A");
    tasmenu();

}
void sah(){
    printf("Sah konumu 1B dir\n");
         int tahta[8][8];
    for(int i=8;i>0;i--){
        for(int j=0;j<8;j++){
            printf("[  %d %c ]",i,j+65);

        }
printf("\n");
    }
    printf("SAH GIDEBILECEGI YERLER\n1A\n2A\n2B\n2C\n1C");
    tasmenu();

}
void fil(){
    printf("Fil konumu 1Cdir\n");
         int tahta[8][8];
    for(int i=8;i>0;i--){
        for(int j=0;j<8;j++){
            printf("[  %d %c ]",i,j+65);

        }
printf("\n");
    }
    printf("\nFILIN GIDEBILDIGI YERLER\n2B\n3A\n2D\n3E\n4F\n5G\n6H");
    tasmenu();
}
void vezir(){
    printf("Vezirin konumu 1D dir");
       int tahta[8][8];
    for(int i=8;i>0;i--){
        for(int j=0;j<8;j++){
            printf("[  %d %c ]",i,j+65);

        }
printf("\n");
    }
    printf("VEZIRIN GIDEBILECEGI YERLER \n1A\n1B\n1C\n4A\n3B\n2C\n2D\n3D\n4D\n5D\n6D\n7D\n8D\n2E\n3F\n4G\n5H\n1E\n1F\n1G\n1H");
    tasmenu();
}
void at(){
    printf("At konumu 1E dir\n");
     int tahta[8][8];
    for(int i=8;i>0;i--){
        for(int j=0;j<8;j++){
            printf("[  %d %c ]",i,j+65);

        }
printf("\n");
    }
    printf("AT GIDEBILECEGI YERLER\n2C\n3D\n3F\n2G");
    tasmenu();
}
void kale(){
    printf("Kale konum 1F dir\n");
    int tahta[8][8];
    for(int i=8;i>0;i--){
        for(int j=0;j<8;j++){
            printf("[  %d %c ]",i,j+65);

        }
printf("\n");
    }
    printf("KALE GIDEBILECEGI YERLER\n1A\n1B\n1C\n1D\n1E\n2F\n3F\n4F\n5F\n6F\n7F\n8F\n1G\n1H");
    tasmenu();
}





int main() {

tasmenu();

return 0;
    }