#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL,"Turkish");


    char cinsiyet;
    float boy;

    printf("Lütfen Cinsiyetinizi Giriniz...E/K\n");
    scanf("%c",&cinsiyet);

    printf("Lütfen Boyunuzu Cm cinsinden Giriniz...\n");
    scanf("%f",&boy);


    if((cinsiyet =='E'  || cinsiyet == 'e') && boy>160){
    printf("Tebrikler boy mülakatýný geçtiniz...\n");
}


    else if ((cinsiyet == 'K' || cinsiyet == 'k') && boy>150){
    printf("Tebrikler boy mülakatýný geçtiniz...\n");
}


    else{
   printf("Maalesef elendiniz...\n");
}











/*
    char cinsiyet;
    printf("Lütfen Cinsiyetinizi Giriniz...E/K\n");
    scanf("%c",&cinsiyet);

    if ( cinsiyet == 'E'|| cinsiyet =='e'){
      printf("\nSiz erkeksiniz...\n");
}

    else if (cinsiyet == 'K'|| cinsiyet == 'k'){
   printf("Siz kadýnsýnýz...\n");
}


    else{
   printf("Lütfen E ya da K deðeri giriniz...\n");
}

*/




/*

   10 a bölünür mü bölünmez mi kodu

    int sayi;

    printf("Lütfen Bir sayý giriniz...\n");
    scanf("%d",&sayi);

    if(sayi % 10 == 0){
   printf("%d 10'a bölünebiliyor...\n",sayi);
}

    else {
    printf("%d 10'a bölünmüyor...\n",sayi);
}

*/


return 0;
}
