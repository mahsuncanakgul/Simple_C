#include <stdio.h>

int main(){
    FILE *dosya= fopen("sensor.txt","w");

    if (dosya== NULL)
    {
        printf("Dosya olusturulamadi");
    }

    float buyukluk;
    int derinlik;

    fprintf(dosya,"--- SISMOGRAF DEPREM RAPORU ---\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Derinlik ve buyukluk giriniz: ");
        scanf("%d %f",&derinlik,&buyukluk);
        printf("\n");
        if (buyukluk<=5.0)
        {
            fprintf(dosya,"%d. Olcum -> Buyukluk: %.1f | Derinlik: %d km [Normal Sarsinti]\n",i+1,buyukluk,derinlik);
        }
        else{
            fprintf(dosya,"%d. Olcum -> Buyukluk: %.1f | Derinlik: %d km [Siddetli Sarsinti]\n",i+1,buyukluk,derinlik);
        }
        
        
    }
    fclose(dosya);
    printf("Veriler sisteme kaydedildi!");

    return 0;
        
}