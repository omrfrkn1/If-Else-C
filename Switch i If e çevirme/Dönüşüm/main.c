#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Turkish");


   char islem;
   printf("Bir i�lem se�iniz: ");
   scanf("%c",&islem);




 if (islem == '1'){
    printf("\nToplama ��lemi...\n");
}


 else if (islem == '2'){
    printf("\n��karma �slemi...\n");
}

 else if (islem == '3'){
    printf("\n�arpam ��lemi...\n");
}

 else{
   printf("\nHatal� ��lem...\n");
 }





 /*

 switch(islem){

  case '1' :
    printf("Toplama islemi...\n");
    break;

  case '2' :
    printf("��karma ��lemi...\n");
    break;

  case '3' :
    printf("�arpma ��lemi...\n");


  default :
    printf("Hatal� �slem...\n");
    break;
   }

*/




    return 0;
}
