#include <stdio.h>
#include <stdlib.h>

int main(){
    int panelSayisi;
    int toplamUretim = 0;

    printf("Panel sayisini giriniz: ");
    scanf("%d",&panelSayisi);
    int *paneller=(int*)malloc(panelSayisi*sizeof(int));
    for (int i = 0; i < panelSayisi; i++)
    {
        printf("%d. panel degerini giriniz:",i+1);
        scanf("%d",&paneller[i]);
        toplamUretim+=paneller[i];
    }
    printf("Toplam Enerji Uretimi:%d\n",toplamUretim);
    printf("Panel Basina Ortalama Uretim:%d\n",toplamUretim/panelSayisi);
    free(paneller);
    printf("Dinamik RAM bellegi basariyla temizlendi.");

    return 0;
    
}