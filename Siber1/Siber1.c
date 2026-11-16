#include <stdio.h>

int main(void)
{
    int paketler[5];
    int toplamPaket = 0;
    int ihlalSayisi = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d sunucu toplam paket sayisi: ",i);
        scanf("%d",&paketler[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        toplamPaket = paketler[i];
        if(toplamPaket>1000){
            printf("[UYARI] %d. saniyede asiri yuklenme: %d paket!\n",i,toplamPaket);
            ihlalSayisi++;
        }
    }
    if(ihlalSayisi>=3){
        printf("KRITIK ALARM: DDoS Saldirisi Tespit Edildi! Guvenlik duvari trafigi kesti.");
    }
    else{
        printf("Durum: Ag trafigi kontrol altinda.");
    }
    
    
}