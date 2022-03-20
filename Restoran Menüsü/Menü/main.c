#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"Turkish");


/*

    MENÜ       SÝPARÝÞ KODU      FÝYATI
 Baþlangýçlar       1            5.5 TL
 Ara Sýcaklar       2            7.5 TL
 Salatalar          3            12  TL
 Ana Yemekler       4            17.75 TL
 Tatlýlar           5            11.25 TL
 Ýçecekler          6            2.25 TL

*/


 int SiparisNo;
 float toplamtutar;



    printf("Menü\t\tSipariþ Kodu\tFiyat\n");
    printf("Baþlangýçlar\t\t1\t5.5 TL\n");
    printf("Ara Sýcaklar\t\t2\t7.5 TL\n");
    printf("Salatalar\t\t3\t12 TL\n");
    printf("Ana Yemekler\t\t4\t17.75 TL\n");
    printf("Tatlýlar\t\t5\t11.25 TL\n");
    printf("Ýçecekler\t\t6\t2.25 TL\n");








 menu:   printf("\nLütfen Yemek Ýstediðiniz ürünün sipariþ kodunu giriniz...\n");
    scanf("%d",&SiparisNo);

    if(SiparisNo == -1){
goto cikis;
}

    switch(SiparisNo){
   case 1 :printf("\nBaþlangýç menüsünü seçtiniz...\n");
   toplamtutar += 5.5;
   break;

   case 2 : printf("\nAra Sýcaklar menüsünü seçtiniz...\n");
   toplamtutar += 7.5;
   break;

   case 3 : printf("\nSalatalar menüsünü seçtiniz...\n");
   toplamtutar += 12;
   break;

   case 4 : printf("\nAna Yemekler menüsünü seçtiniz...\n");
  toplamtutar += 17.75;
   break;

   case 5 : printf("\nTatlýlar menüsünü seçtiniz...\n");
   toplamtutar += 11.25;
   break;

   case 6 : printf("\nÝçecekler menüsünü seçtiniz...\n");
   toplamtutar += 2.25;
   break;

default : printf("\nLütfem 1 ile 6 arasý seçim yapýnýz...\n");break;


}

   goto menu;
   cikis:
    printf ("\nHesabýnýz: %.2f\n",toplamtutar);

    printf ("Sipariþiniz tamamlandý\n\n");





 return 0;
}
