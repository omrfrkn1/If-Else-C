#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


//Kaçýncý Ay olduðunu sayýsýn girerek öðrendiðimiz kod
//Ve Hangi Ayýn hangi mevsim olduðunu gösteren kod

    int ayinNumarasi;
    char ayinmevsimi;


    printf("Öðrenmek istediðiniz ayýn numarasýný giriniz...\n\n");
    scanf("%d",&ayinNumarasi);


    switch(ayinNumarasi){
  case 1 : printf("\nOcak\n");
 ayinmevsimi = 'K';
 break;
  case 2 : printf("\nÞubat\n");
 ayinmevsimi = 'K';
 break;
  case 3: printf("\nMart\n");
 ayinmevsimi = 'I';
 break;
  case 4 : printf("\nNisan\n");
 ayinmevsimi = 'I';
 break;
  case 5 : printf("\nMayýs\n");
 ayinmevsimi = 'I';
 break;
  case 6 : printf("\nHaziran\n");
 ayinmevsimi = 'Y';
 break;
  case 7 : printf("\nTemmuz\n");
 ayinmevsimi = 'Y';
 break;
  case 8 : printf("\nAðustos\n");
 ayinmevsimi = 'Y';
 break;
  case 9 : printf("\nEylül\n");
 ayinmevsimi = 'S';
 break;
  case 10 : printf("\nEkim\n");
 ayinmevsimi = 'S';
 break;
  case 11 : printf("\nKasým\n");
 ayinmevsimi = 'S';
 break;
  case 12 : printf("\nAralýk\n");
 ayinmevsimi = 'S';
 break;

 default : printf("\nLütfen 1-12 aralýðýnda deðer giriniz...\n");

}

 if(ayinmevsimi == 'I'){
     printf("\nÝLKBAHAR MEVSÝMÝ\n");
}


 else if(ayinmevsimi == 'Y'){
  printf("\nYAZ MEVSÝMÝ\n");
}




 else if(ayinmevsimi == 'S'){
  printf("\nSONBAHAR MEVSÝMÝ\n");
}


 else if(ayinmevsimi == 'K'){
  printf("\nKIÞ MEVSÝMÝ\n");
}

    return 0;
}
