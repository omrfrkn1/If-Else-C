#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


//Ka��nc� Ay oldu�unu say�s�n girerek ��rendi�imiz kod
//Ve Hangi Ay�n hangi mevsim oldu�unu g�steren kod

    int ayinNumarasi;
    char ayinmevsimi;


    printf("��renmek istedi�iniz ay�n numaras�n� giriniz...\n\n");
    scanf("%d",&ayinNumarasi);


    switch(ayinNumarasi){
  case 1 : printf("\nOcak\n");
 ayinmevsimi = 'K';
 break;
  case 2 : printf("\n�ubat\n");
 ayinmevsimi = 'K';
 break;
  case 3: printf("\nMart\n");
 ayinmevsimi = 'I';
 break;
  case 4 : printf("\nNisan\n");
 ayinmevsimi = 'I';
 break;
  case 5 : printf("\nMay�s\n");
 ayinmevsimi = 'I';
 break;
  case 6 : printf("\nHaziran\n");
 ayinmevsimi = 'Y';
 break;
  case 7 : printf("\nTemmuz\n");
 ayinmevsimi = 'Y';
 break;
  case 8 : printf("\nA�ustos\n");
 ayinmevsimi = 'Y';
 break;
  case 9 : printf("\nEyl�l\n");
 ayinmevsimi = 'S';
 break;
  case 10 : printf("\nEkim\n");
 ayinmevsimi = 'S';
 break;
  case 11 : printf("\nKas�m\n");
 ayinmevsimi = 'S';
 break;
  case 12 : printf("\nAral�k\n");
 ayinmevsimi = 'S';
 break;

 default : printf("\nL�tfen 1-12 aral���nda de�er giriniz...\n");

}

 if(ayinmevsimi == 'I'){
     printf("\n�LKBAHAR MEVS�M�\n");
}


 else if(ayinmevsimi == 'Y'){
  printf("\nYAZ MEVS�M�\n");
}




 else if(ayinmevsimi == 'S'){
  printf("\nSONBAHAR MEVS�M�\n");
}


 else if(ayinmevsimi == 'K'){
  printf("\nKI� MEVS�M�\n");
}

    return 0;
}
