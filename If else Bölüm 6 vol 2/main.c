#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Turkish");

   int puan;
  printf("L�tfen puan�n�z� girin...\n\n");
  scanf("%d",&puan);

/*
if (puan >0){
    printf("\nPozitif Say�d�r.\n");
}

  else if (puan==0){
    printf("\nNe pozitif ne negatif say�d�r");
}

  else {
    printf("\nNegatif Say�d�r\n");
  }

*/



/*
80-100 --> �ok iyi Puan
60-80  --> �yi Puan
40-60  --> Orta Puan
20-40  --> K�t� Puan
0-20   --> �ok K�t� Puan
*/







   if(puan >= 80){
  printf("\n�ok iyi Puan...\n");
}

   else if( puan >=60 && puan < 80);{
  printf("\n�yi Puan...\n");
}

   else if( puan >= 40 && puan < 60);{
  printf("\nOrta Puan...\n");
}

   else if ( puan >= 20 && puan < 40);{
  printf("\nK�t� Puan...\n");
}

   else if ( puan >=0 && puan < 20);{
  printf("\n �ok K�t� Puan...\n");
}
   else{
    printf("L�tfen 0-100 aras� de�er giriniz...");
}


return 0;
}
