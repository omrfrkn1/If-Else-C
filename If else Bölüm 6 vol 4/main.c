#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL,"Turkish");

 /*
0-100 adet --> adet fiyatı = 3tl
100-200 adet --> adet fiyatı = 2.5tl
200-300 adet --> adet fiyatı = 2tl
300-400 adet --> adet fiyatı = 1.25tl
400-... adet --> adet fiyatı = 0.75tl
*/


   int adet;
   float adetfiyati;


   printf("Kaç adet ürün alacaksınız ?\n\n");
   scanf("%d",&adet);


   if (adet >=400){
 adetfiyati = 0.75;

}

   else if (adet >=300 && adet <400){
    adetfiyati =  1.25;
}

   else if (adet >= 200 && adet <300){
    adetfiyati = 2;
}

   else if (adet >= 100 && adet <200){
    adetfiyati = 2.5;
}

   else if (adet > 0 && adet <100){
    adetfiyati = 3;
}


  else{
    printf("\nLütfen 1 veya 1 den büyük adet sayısını giriniz \n");
}



    float toplamTutar = adet*adetfiyati;
    int toplamTutarYuvarlama = toplamTutar;




    printf("\nToplam ödenecek tutar: %f \n",toplamTutar,toplamTutarYuvarlama);


    float yapilanindirim = toplamTutar - toplamTutarYuvarlama;


    printf("Toplam Tutar: %f \nYapılan İndirim : %f  \nÖdemeniz gereken tutar: %d\n",toplamTutar,yapilanindirim,toplamTutarYuvarlama);





return 0;
}
