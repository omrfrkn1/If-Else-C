#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

// Say�n�n Kat�n� bulma Kodu
   /* int buyuksayi,kucukSayi;

    printf("Birbirinin kat� oldu�unu ��renmek istedi�iniz 2 tane tam say� giriniz.(�nce b�y�k say�y� giriniz)...\n");
    scanf("%d%d",&buyuksayi,&kucukSayi);


    if(buyuksayi % kucukSayi ==0){
  printf ("\n%d %d 'nin bir �arpan�d�r.\n",kucukSayi,buyuksayi);
}


else{
    printf ("\n%d %d 'nin bir �arpan� de�ildir.\n",kucukSayi,buyuksayi);
}

*/



//Say�n�n �arpma Toplama Ortalama vb �eylerini bulma
 /*   int sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;

   printf("L�tfen ekrana 3 farkl� tam say� de�eri giriniz...\n");
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






  printf("\nToplam: %d\n�arpma: %d\nOrtalama: %d",toplam,carpim,ortalama);
  printf("\nK���k say� : %d \nB�y�k Say� : %d\n",kucuk,buyuk);
*/



//Say�n�n tek mi �ift mi oldu�unu Bildiren kod
 /*

  int sayi;

  printf("\"Tek mi �ift mi\" oldu�unu ��renmek istedi�iniz say�y� giriniz...\n"); //�ift t�rna��nda nas�l kullan�laca��n� koydum bu sat�ra
  scanf("%d",&sayi);  // \"........\" �eklinde �ift t�rnaklar�m�z�da yazabiliyoruz.
// Y�zdeyi printf ile bast�rmak i�in %% tane y�zde ile bast�rabiliriz
// \ de 2 tane \\ ile kullanabiliyoruz


  if(sayi % 2 == 0){   // Buraya  %2 yerine / 2 yaz�nca da oldu san�rsam ama emin de�ilim...
    printf("\nSay�m�z �ifttir...\n");
  }


  else{
   printf("\nSay�m�z tektir...\n");
}

*/



return 0;
}
