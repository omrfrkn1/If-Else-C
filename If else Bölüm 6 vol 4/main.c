#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL,"Turkish");

 /*
0-100 adet --> adet fiyat� = 3tl
100-200 adet --> adet fiyat� = 2.5tl
200-300 adet --> adet fiyat� = 2tl
300-400 adet --> adet fiyat� = 1.25tl
400-... adet --> adet fiyat� = 0.75tl
*/


   int adet;
   float adetfiyati;


   printf("Ka� adet �r�n alacaks�n�z ?\n\n");
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
    printf("\nL�tfen 1 veya 1 den b�y�k adet say�s�n� giriniz \n");
}



    float toplamTutar = adet*adetfiyati;
    int toplamTutarYuvarlama = toplamTutar;




    printf("\nToplam �denecek tutar: %f \n",toplamTutar,toplamTutarYuvarlama);


    float yapilanindirim = toplamTutar - toplamTutarYuvarlama;


    printf("Toplam Tutar: %f \nYap�lan �ndirim : %f  \n�demeniz gereken tutar: %d\n",toplamTutar,yapilanindirim,toplamTutarYuvarlama);





return 0;
}
