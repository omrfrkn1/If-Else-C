#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"Turkish");

  int yas;

  printf("L�tfen Ya��n�z� girin...\n\n");
  scanf("%d",&yas);



   if(yas >= 18){
  printf("\nH�r bir bireysinizzz :))\n");
}

   else {
  printf("\nRe�it de�ilsiniz...\n");
}


return 0;
}
