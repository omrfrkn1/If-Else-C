#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //Matematik fonksiyonlar� olan k�t�phaneyi dahil ediyor...

int main(){

  setlocale(LC_ALL,"Turkish");

//M�kemmel Bir Hesap Makinesi
/*
int secim;

float sayi1,sayi2;

 menu: printf("\n\nL�tfen Yapmak istedi�iniz i�lemi se�iniz...\n\n");

    printf("1.Toplama\n2.��karma\n3.�arpma\n4.B�lme\n5.Karek�k\n6.Kuvvet\n\n");
    printf("l�tfen ��kmak i�in -1 de�erini giriniz...\n");
    scanf("%d",&secim);


if( secim == -1){
goto cikis;
}


    if(secim >0 && secim<7){
      printf("\nL�tfen 2 adet say� giriniz...\n");
      scanf("%f%f",&sayi1,&sayi2);
}


      switch (secim){
  case 1 : printf("\nToplam: %.3f\n",sayi1+sayi2);
  break;

  case 2 : printf("\n��karma: %.2f\n",sayi1,sayi2);
  break;

  case 3 : printf("\n�arpma: %2.f\n",sayi1*sayi2);
  break;

  case 4 : printf("\nB�lme: %2.f\n",sayi1/sayi2);
  break;

  case 5 : printf("\nKarek�k %.0f = %.2f  \nKarek�k %.0f = %.2f\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));
  break;

  case 6 : printf("\n%.0f �zeri %.0f = %.0f",sayi1,sayi2,pow(sayi1,sayi2));
  break;


  default :
    printf("\nL�tfen 1-6 aral���nda se�im yap�n�z...\n");
}

goto menu;

 cikis: printf("\nHesap Makinesi ��lemleri tamamland�...\n");
*/


return 0;
}
