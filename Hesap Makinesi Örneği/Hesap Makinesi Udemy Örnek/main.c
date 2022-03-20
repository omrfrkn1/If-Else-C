#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //Matematik fonksiyonlarý olan kütüphaneyi dahil ediyor...

int main(){

  setlocale(LC_ALL,"Turkish");

//Mükemmel Bir Hesap Makinesi
/*
int secim;

float sayi1,sayi2;

 menu: printf("\n\nLütfen Yapmak istediðiniz iþlemi seçiniz...\n\n");

    printf("1.Toplama\n2.Çýkarma\n3.Çarpma\n4.Bölme\n5.Karekök\n6.Kuvvet\n\n");
    printf("lütfen çýkmak için -1 deðerini giriniz...\n");
    scanf("%d",&secim);


if( secim == -1){
goto cikis;
}


    if(secim >0 && secim<7){
      printf("\nLütfen 2 adet sayý giriniz...\n");
      scanf("%f%f",&sayi1,&sayi2);
}


      switch (secim){
  case 1 : printf("\nToplam: %.3f\n",sayi1+sayi2);
  break;

  case 2 : printf("\nÇýkarma: %.2f\n",sayi1,sayi2);
  break;

  case 3 : printf("\nÇarpma: %2.f\n",sayi1*sayi2);
  break;

  case 4 : printf("\nBölme: %2.f\n",sayi1/sayi2);
  break;

  case 5 : printf("\nKarekök %.0f = %.2f  \nKarekök %.0f = %.2f\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));
  break;

  case 6 : printf("\n%.0f üzeri %.0f = %.0f",sayi1,sayi2,pow(sayi1,sayi2));
  break;


  default :
    printf("\nLütfen 1-6 aralýðýnda seçim yapýnýz...\n");
}

goto menu;

 cikis: printf("\nHesap Makinesi Ýþlemleri tamamlandý...\n");
*/


return 0;
}
