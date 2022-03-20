#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Turkish");


   char islem;
   printf("Bir iþlem seçiniz: ");
   scanf("%c",&islem);




 if (islem == '1'){
    printf("\nToplama Ýþlemi...\n");
}


 else if (islem == '2'){
    printf("\nÇýkarma Ýslemi...\n");
}

 else if (islem == '3'){
    printf("\nÇarpam Ýþlemi...\n");
}

 else{
   printf("\nHatalý Ýþlem...\n");
 }





 /*

 switch(islem){

  case '1' :
    printf("Toplama islemi...\n");
    break;

  case '2' :
    printf("Çýkarma Ýþlemi...\n");
    break;

  case '3' :
    printf("Çarpma Ýþlemi...\n");


  default :
    printf("Hatalý Ýslem...\n");
    break;
   }

*/




    return 0;
}
