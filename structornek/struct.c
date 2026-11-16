#include <stdio.h>

struct Hasta
{
    char ad[50];
    int nabiz;
    int ates;
};

int main(){
    struct Hasta h1;

    printf("--- BIYOMEDIKAL YOGUN BAKIM MONITORU ---\n");

    printf("Hasta adini girin: ");
    scanf("%s",h1.ad);

    printf("\nNabiz degerini girin (BPM): ");
    scanf("%d",&h1.nabiz);

    printf("\nVucut sicakligini girin (C): ");
    scanf("%d",&h1.ates);

    if(h1.nabiz<60 || h1.nabiz>100 || h1.ates>35){
        printf("\nACIL TIBBI ALARM! Hasta %s kritik durumda! (Nabiz: %d BPM | Ates: %d C)",h1.ad,h1.nabiz,h1.ates);
    }
    else
    {
        printf("\nHasta %s stabil. Tum yasam bulgulari normal seviyede.",h1.ad);
    }
    

}
