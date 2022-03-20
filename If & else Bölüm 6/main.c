#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"Turkish");

  int yas;

  printf("Lütfen Yaþýnýzý girin...\n\n");
  scanf("%d",&yas);



   if(yas >= 18){
  printf("\nHür bir bireysinizzz :))\n");
}

   else {
  printf("\nReþit deðilsiniz...\n");
}


return 0;
}
