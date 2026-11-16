#include <stdio.h>
#include <stdlib.h>

struct reaktor
{
    char name[15];
    int tempeture;
    float pressure;
};

int calculate(int tempeture, float pressure){
    float risk;
    risk=(tempeture*2)+(pressure*10.0f);
    return risk;
}


int main(){
    struct reaktor r1;
    int reak;
    float deger;
    FILE *dosya=fopen("reaktorRapor.txt","w");

    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    printf("Kac adet reaktor denetlenecek?");
    scanf("%d",&reak);

    int *reakNumber=(int*)malloc(reak*sizeof(int));

    for (int i = 0; i < reak; i++)
    {
        printf("%d. reaktor adini giriniz: ",i+1);
        scanf("%s",r1.name);
        printf("Sicaklik giriniz:");
        scanf("%d",&r1.tempeture);
        printf("Basinc degeri giriniz: ");
        scanf("%f",&r1.pressure);
        deger=calculate(r1.tempeture, r1.pressure);
        if (deger>=1000 || r1.tempeture>400)
        {
            fprintf(dosya,"KRITIK ALARM! %s Adli Reaktor Riskli. Risk degeri %.2f\n",r1.name,deger);
        }
        else{
            fprintf(dosya,"%s Adli Reaktor Guvenli. Risk degeri %.2f\n",r1.name,deger);
        }
        
    }
    fclose(dosya);
    


}