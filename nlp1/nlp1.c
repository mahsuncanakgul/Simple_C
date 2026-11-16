#include <string.h>
#include <stdio.h>

int main(void){
    char mesaj[100], durum[30];

    printf("--- AI METIN GUVENLIK FILTRESI ---\n");
    printf("Taranacak mesaji girin: ");
    scanf(" %[^\n]", mesaj);

    if(strstr(mesaj,"kazandiniz")!=0){
        strcpy(durum, "DOLANDIRICILIK");
        printf("Mesaj Uzunlugu: %d uzunlukta\n",strlen(mesaj));
        printf("Filtre Durumu: %s \n",durum);
        printf("[UYARI] Mesaj karantinaya alindi!");
    }
    else if(strstr(mesaj,"saldiri")!=0){
        strcpy(durum, "TEHDIT_ICERIK");
        printf("Mesaj Uzunlugu: %d uzunlukta\n",strlen(mesaj));
        printf("Filtre Durumu: %s \n",durum);
        printf("[UYARI] Mesaj karantinaya alindi!");
    }
        else if(strlen(mesaj)>15){
        strcpy(durum, "SPAM_RISKI");
        printf("Mesaj Uzunlugu: %d uzunlukta\n",strlen(mesaj));
        printf("Filtre Durumu: %s \n",durum);
        printf("[UYARI] Mesaj karantinaya alindi!");
    }
    else{
        strcpy(durum, "GUVENLI");
        printf("Mesaj Uzunlugu: %d uzunlukta\n",strlen(mesaj));
        printf("Filtre Durumu: %s \n",durum);
        printf("[ONAY] Mesaj iletildi.");
    }

    
}