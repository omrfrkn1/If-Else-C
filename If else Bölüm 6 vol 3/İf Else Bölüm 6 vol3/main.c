#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL,"Turkish");


    char cinsiyet;
    float boy;

    printf("L�tfen Cinsiyetinizi Giriniz...E/K\n");
    scanf("%c",&cinsiyet);

    printf("L�tfen Boyunuzu Cm cinsinden Giriniz...\n");
    scanf("%f",&boy);


    if((cinsiyet =='E'  || cinsiyet == 'e') && boy>160){
    printf("Tebrikler boy m�lakat�n� ge�tiniz...\n");
}


    else if ((cinsiyet == 'K' || cinsiyet == 'k') && boy>150){
    printf("Tebrikler boy m�lakat�n� ge�tiniz...\n");
}


    else{
   printf("Maalesef elendiniz...\n");
}











/*
    char cinsiyet;
    printf("L�tfen Cinsiyetinizi Giriniz...E/K\n");
    scanf("%c",&cinsiyet);

    if ( cinsiyet == 'E'|| cinsiyet =='e'){
      printf("\nSiz erkeksiniz...\n");
}

    else if (cinsiyet == 'K'|| cinsiyet == 'k'){
   printf("Siz kad�ns�n�z...\n");
}


    else{
   printf("L�tfen E ya da K de�eri giriniz...\n");
}

*/




/*

   10 a b�l�n�r m� b�l�nmez mi kodu

    int sayi;

    printf("L�tfen Bir say� giriniz...\n");
    scanf("%d",&sayi);

    if(sayi % 10 == 0){
   printf("%d 10'a b�l�nebiliyor...\n",sayi);
}

    else {
    printf("%d 10'a b�l�nm�yor...\n",sayi);
}

*/


return 0;
}
