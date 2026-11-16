#include <stdio.h>

int main(){
    int koordinat, anahtar, kaydirilmis, sifreliPaket, cozulen;

    printf("Koordinati girin: ");
    scanf("%d",&koordinat);
    printf("Anahtari giriniz: ");
    scanf("%d",&anahtar);
    kaydirilmis = koordinat<<1;
    printf("1. Adim (Bit Kaydirma Sonrasi): %d\n",kaydirilmis);
    sifreliPaket=kaydirilmis^anahtar;
    printf("2. Adim (Uyduya Gonderilen Sifreli Paket): %d\n",sifreliPaket);
    cozulen=sifreliPaket^anahtar;
    cozulen=cozulen>>1;
    printf("3. Adim (Alicida Cozulen Orijinal Koordinat): %d\n",cozulen);
    return 0;
}
