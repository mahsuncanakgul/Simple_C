#include <stdio.h>

void eftYap(int *gonderen, int *alici, int miktar){
    *gonderen-=miktar;
    *alici=*alici+miktar-50;


}

int main(){
    int gonderenBakiye = 5000;
    int aliciBakiye = 1000;
    int miktar,toplamKesinti;

    int* ptr1=&gonderenBakiye;
    int* ptr2=&aliciBakiye;
    
    printf("--- FINTECH EFT MOTORU ---\n");
    printf("Gonderen Bakiye: %d TL | Alici Bakiye: %d TL\n",gonderenBakiye,aliciBakiye);

    printf("Miktar giriniz: ");
    scanf("%d",&miktar);

    toplamKesinti = miktar + 50;
    if(toplamKesinti<=gonderenBakiye){
        eftYap(&gonderenBakiye,&aliciBakiye,toplamKesinti);
        printf("\nEFT Basarili! (50 TL komisyon kesildi)\n");
        printf("Guncel Gonderen Bakiye: %d TL\n",*ptr1);
        printf("Guncel Alici Bakiye: %d TL\n",*ptr2);
    }
    else{
        printf("\nHATA: Yetersiz bakiye! Islem reddedildi.");
    }
}