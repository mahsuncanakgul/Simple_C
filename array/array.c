#include <stdio.h>

int main(){
    int goruntu[3][3] = {
    {45, 210, 80},
    {195, 250, 30},
    {60, 120, 220}
};

    int esikDegeri;

    printf("Bir esik degeri giriniz: ");
    scanf("%d",&esikDegeri);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (goruntu[i][j]<=esikDegeri)
            {
                goruntu[i][j]=0;
            }
            else{
                goruntu[i][j]=1;
            }
            printf("%d ", goruntu[i][j]);
            
        }

        printf("\n");
        
    }
    


}