#include <stdio.h>

int main(){
    int x=0, y=0;
    int sarj=100;
    int komut;

    while (1)
    {
        printf("Komut girin (1:Ileri, 2:Geri, 3:Sag, 4:Sarj, 0:Cikis):");
        scanf("%d",&komut);
        switch (komut)
        {
        case 0:
            printf("Robot kapatildi. Son Konum: %d, %d | Kalan Sarj: %d",x,y,sarj);
            return 0;
        
        case 1:
            y++;
            sarj-=10;
            printf("Konum: (%d, %d) | Sarj: %d",x,y,sarj);
            break;
        
        case 2:
            y--;
            sarj-=10;
            printf("Konum: (%d, %d) | Sarj: %d",x,y,sarj);
            break;
        
        case 3:
            x++;
            sarj-=10;
            printf("Konum: (%d, %d) | Sarj: %d",x,y,sarj);
            break;
        
        case 4:
            sarj=100;
            printf("Batarya tamamen dolduruldu! (Sarj: %%100)");
            break;
        
        default:
            printf("Hatali giriş yaptiniz tekrar deneyiniz.");
            break;
        }
        printf("\n");
    
    }
}