#include <stdio.h>

int main(){
    char dna[50];
    char adna[50]="";
    int mutasyonSayisi=0;

    printf("Buyuk harfler ile DNA'yi giriniz= ");
    scanf("%s",dna);

    for (int i = 0; dna[i] != '\0'; i++)
    {
        if(dna[i]=='A'){
            adna[i]='T';
        }
        else if(dna[i]=='T'){
            adna[i]='A';
        }
        else if(dna[i]=='G'){
            adna[i]='C';
        }
        else if(dna[i]=='C'){
            adna[i]='G';
        }
        else{
            adna[i]='?';
            mutasyonSayisi++;
        }
    }
    printf("\n Tamamlayici DNA= %s",adna);
    printf("\n Toplam mutasyon sayisi=%d",mutasyonSayisi);
    


}