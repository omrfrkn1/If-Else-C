#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"Turkish");


/*

    MEN�       S�PAR�� KODU      F�YATI
 Ba�lang��lar       1            5.5 TL
 Ara S�caklar       2            7.5 TL
 Salatalar          3            12  TL
 Ana Yemekler       4            17.75 TL
 Tatl�lar           5            11.25 TL
 ��ecekler          6            2.25 TL

*/


 int SiparisNo;
 float toplamtutar;



    printf("Men�\t\tSipari� Kodu\tFiyat\n");
    printf("Ba�lang��lar\t\t1\t5.5 TL\n");
    printf("Ara S�caklar\t\t2\t7.5 TL\n");
    printf("Salatalar\t\t3\t12 TL\n");
    printf("Ana Yemekler\t\t4\t17.75 TL\n");
    printf("Tatl�lar\t\t5\t11.25 TL\n");
    printf("��ecekler\t\t6\t2.25 TL\n");








 menu:   printf("\nL�tfen Yemek �stedi�iniz �r�n�n sipari� kodunu giriniz...\n");
    scanf("%d",&SiparisNo);

    if(SiparisNo == -1){
goto cikis;
}

    switch(SiparisNo){
   case 1 :printf("\nBa�lang�� men�s�n� se�tiniz...\n");
   toplamtutar += 5.5;
   break;

   case 2 : printf("\nAra S�caklar men�s�n� se�tiniz...\n");
   toplamtutar += 7.5;
   break;

   case 3 : printf("\nSalatalar men�s�n� se�tiniz...\n");
   toplamtutar += 12;
   break;

   case 4 : printf("\nAna Yemekler men�s�n� se�tiniz...\n");
  toplamtutar += 17.75;
   break;

   case 5 : printf("\nTatl�lar men�s�n� se�tiniz...\n");
   toplamtutar += 11.25;
   break;

   case 6 : printf("\n��ecekler men�s�n� se�tiniz...\n");
   toplamtutar += 2.25;
   break;

default : printf("\nL�tfem 1 ile 6 aras� se�im yap�n�z...\n");break;


}

   goto menu;
   cikis:
    printf ("\nHesab�n�z: %.2f\n",toplamtutar);

    printf ("Sipari�iniz tamamland�\n\n");





 return 0;
}
