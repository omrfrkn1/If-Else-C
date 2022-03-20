
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


//Hava Durumuyla alakalý Switch
    /* int secim;



    printf("Lütfen seçiminizi yapýnýz...\n");
    printf("1.Ýlkbahar\n2.Yaz\n3.Sonbahar\n4.Kýþ\n");
    scanf("%d",&secim);


    switch(secim){
// break leri yazýyoruz ki caseleri tek tek alsýn

      case 1: printf("\nHava çok güzel...\n");break;
      case 2: printf("\nHava çok sýcak...\n");break;
      case 3: printf("\nHava yaðmurlu...\n");break;
      case 4: printf("\nHava karlý...\n");break

      default: printf("1-4 arasýnda seçim yapýnýz...");
}

*/



//Farklý bir Switch Case örneði
/*
   char karaktereGoreSecim;

   printf("Karakter Giriniz...\n");
   scanf("%c",&karaktereGoreSecim);


//C dilinin ö ç vb harfleri okumadýðýný göstermek için yapýlam
//bir örnek
   switch(karaktereGoreSecim){
   case 'a' : printf("\nAli geldi...\n");break;
   case 'b' : printf("\nBurcu geldi...\n");break;
   case 'c' : printf("\nCengiz geldi...\n");break;

   default : printf("Böyle birisini tanýmýyorum...\n");
}

   printf("\nSwitch-Case iþlemi tamamlandý...\n");

*/
    return 0;
}
