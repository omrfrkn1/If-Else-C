#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Turkish");

   int puan;
  printf("Lütfen puanýnýzý girin...\n\n");
  scanf("%d",&puan);

/*
if (puan >0){
    printf("\nPozitif Sayýdýr.\n");
}

  else if (puan==0){
    printf("\nNe pozitif ne negatif sayýdýr");
}

  else {
    printf("\nNegatif Sayýdýr\n");
  }

*/



/*
80-100 --> Çok iyi Puan
60-80  --> Ýyi Puan
40-60  --> Orta Puan
20-40  --> Kötü Puan
0-20   --> Çok Kötü Puan
*/







   if(puan >= 80){
  printf("\nÇok iyi Puan...\n");
}

   else if( puan >=60 && puan < 80);{
  printf("\nÝyi Puan...\n");
}

   else if( puan >= 40 && puan < 60);{
  printf("\nOrta Puan...\n");
}

   else if ( puan >= 20 && puan < 40);{
  printf("\nKötü Puan...\n");
}

   else if ( puan >=0 && puan < 20);{
  printf("\n Çok Kötü Puan...\n");
}
   else{
    printf("Lütfen 0-100 arasý deðer giriniz...");
}


return 0;
}
