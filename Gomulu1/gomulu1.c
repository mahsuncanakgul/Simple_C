#include <stdio.h>

int main(void)
{
    int sicaklik;

    while (1)
    {
        printf("Motor sicakligini girin (Cikis: -1):");
        scanf("%d",&sicaklik);

        if(sicaklik<70){
            printf("Durum: NORMAL | Fan: KAPALI\n");
        }
        else if (sicaklik>=70 && sicaklik<95)
        {
            printf("Durum: ISINIYOR | Fan: DUSUK HIZ (%%50)\n");
        }
        else if (sicaklik>=95 && sicaklik<115)
        {
           printf("Durum: YUKSEK SICAKLIK | Fan: TAM GUC (%%100)\n");
        }
        else
        {
            printf("KRITIK ALARM! Motor asiri isindi, acil durdurma aktif!\n");
            break;
        }
    }
    return 0;
}
