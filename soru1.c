#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
       int i,a,m,sayac=0,kod,l,z,p;
       char x[150];
       char f[26] = {'a', 'b', 'c', 'd', 'e', 'f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
       char k[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void ana_menu(){
    p:;
printf("1-Giris\n");
printf("2-Cikis ");
scanf("%d",&z);
switch(z){
case 1:giris(); break;
case 2:cikis();break;
default: printf("Hatali giris yaptiniz\n"); goto p; break;

}

}
void giris(){
printf("Sifrelenecek yaziyi Turkce karakter kullanmadan giriniz: ");
       scanf("%d", getchar());
       while((x[m] = getchar())!='\n')
         m++;

printf("1-20 arasinda bir kod giriniz: ");
     scanf("%d",&kod);
     if(kod >=1 && kod <= 20 ){

        if(x[sayac] >='a' && x[m] <= 'z'){

                for(i=0;i<m;i++){

                    for(a=0;a<26;a++){
                        if(x[i]==f[a]){
                            a=a+kod;
                            a=a%26;
                            x[i]=f[a];
                            break;
                        }

                    }
                }
                sayac++;
        }
        if(x[sayac] >='A' && x[m] <= 'Z'){
            for(i=0;i<m;i++){

                    for(a=0;a<26;a++){
                        if(x[i]==k[a]){
                            a=a+kod;
                            a=a%26;
                            x[i]=k[a];

                            break;
                        }

                    }
                }
                sayac++;
        }

     }





printf("%s",x);
i=0;
a=0;
m=0;
sayac=0;
kod=0;
l=0;
z=0;
p=0;
giris();
        getch();



}
void cikis(){
printf("iyi gunler");
}






int main()
{

ana_menu();











   return 0;   }