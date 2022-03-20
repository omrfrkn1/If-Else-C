#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

// Sayýnýn Katýný bulma Kodu
   /* int buyuksayi,kucukSayi;

    printf("Birbirinin katý olduðunu öðrenmek istediðiniz 2 tane tam sayý giriniz.(Önce büyük sayýyý giriniz)...\n");
    scanf("%d%d",&buyuksayi,&kucukSayi);


    if(buyuksayi % kucukSayi ==0){
  printf ("\n%d %d 'nin bir çarpanýdýr.\n",kucukSayi,buyuksayi);
}


else{
    printf ("\n%d %d 'nin bir çarpaný deðildir.\n",kucukSayi,buyuksayi);
}

*/



//Sayýnýn Çarpma Toplama Ortalama vb þeylerini bulma
 /*   int sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;

   printf("Lütfen ekrana 3 farklý tam sayý deðeri giriniz...\n");
  scanf("%d%d%d",&sayi1,&sayi2,&sayi3);


  toplam = sayi1 + sayi2 + sayi3;
  carpim = sayi1 * sayi2 * sayi3;
  ortalama = toplam /3;

 kucuk = sayi1;


 if(sayi2 < kucuk){
    kucuk = sayi2;
}

 if(sayi3 < kucuk){
   kucuk = sayi3;
}



buyuk = sayi1;


 if(sayi2 > buyuk){
    buyuk= sayi2;
}

 if(sayi3 > buyuk){
   buyuk = sayi3;
}






  printf("\nToplam: %d\nÇarpma: %d\nOrtalama: %d",toplam,carpim,ortalama);
  printf("\nKüçük sayý : %d \nBüyük Sayý : %d\n",kucuk,buyuk);
*/



//Sayýnýn tek mi Çift mi olduðunu Bildiren kod
 /*

  int sayi;

  printf("\"Tek mi çift mi\" olduðunu öðrenmek istediðiniz sayýyý giriniz...\n"); //Çift týrnaðýnda nasýl kullanýlacaðýný koydum bu satýra
  scanf("%d",&sayi);  // \"........\" þeklinde çift týrnaklarýmýzýda yazabiliyoruz.
// Yüzdeyi printf ile bastýrmak için %% tane yüzde ile bastýrabiliriz
// \ de 2 tane \\ ile kullanabiliyoruz


  if(sayi % 2 == 0){   // Buraya  %2 yerine / 2 yazýnca da oldu sanýrsam ama emin deðilim...
    printf("\nSayýmýz çifttir...\n");
  }


  else{
   printf("\nSayýmýz tektir...\n");
}

*/



return 0;
}
