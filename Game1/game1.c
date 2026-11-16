#include <stdio.h>

int main(void)
{
    int dusmanCan, dusmanZirh, saldiritipi, kritikHasar, saldiriGucu,total;
    dusmanCan=120;
    dusmanZirh=15;
    kritikHasar=2;
    dusmanZirh=15;

    printf("--- RPG SAVAS MOTORU ---\n");
    printf("Dusman Cani:%d Dusman Zirhi=%d\n",dusmanCan,dusmanZirh);
    printf("Saldiri gucu giriniz:");
    scanf("%d",&saldiriGucu);
    printf("Saldiri tipini giriniz:");
    scanf("%d",&saldiritipi);

    if(saldiritipi==1)
    {
        total=saldiriGucu-dusmanZirh;
        if(total<0){
            printf("Saldirin yetersiz kaldi. Dusman can %d'dir.",dusmanCan);
        }
        else{
            dusmanCan-=total;
            printf("Saldiri tamamlandi. Dusman can %d'dir.",dusmanCan);
        }

    }

    else if (saldiritipi==2)
    {
        saldiriGucu*=kritikHasar;
        total=saldiriGucu-dusmanZirh;
        if (total<0)
        {

            printf("Saldirin yetersiz kaldi. Dusman can %d'dir.",dusmanCan);
        }
        else{
            dusmanCan-=total;
            printf("Saldiri tamamlandi. Dusman can %d'dir.",dusmanCan);
        }
        
    }
    
    else{
        printf("1 veya 2 disinda bir deger girdiniz. Tekrar deneyiniz.\n");
        scanf("Saldiri tipini giriniz:%d",&saldiritipi);
    }
    
return 0;

}