#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Veri yapýsý (Object kullanmadan gruplama)
struct Hesap {
    int hesapNo;
    char isim[50];
    float bakiye;
};

void hesapOlustur() {
    FILE *dosya = fopen("banka.dat", "ab");
    struct Hesap h;

    printf("Hesap No: "); scanf("%d", &h.hesapNo);
    printf("Isim: "); scanf("%s", h.isim);
    h.bakiye = 0.0;

    fwrite(&h, sizeof(struct Hesap), 1, dosya);
    fclose(dosya);
    printf("\nHesap basariyla acildi!\n");
}

void bakiyeSorgula() {
    FILE *dosya = fopen("banka.dat", "rb");
    struct Hesap h;
    int no, bulundu = 0;

    printf("Sorgulanacak Hesap No: "); scanf("%d", &no);

    while(fread(&h, sizeof(struct Hesap), 1, dosya)) {
        if(h.hesapNo == no) {
            printf("\nIsim: %s\nBakiye: %.2f TL\n", h.isim, h.bakiye);
            bulundu = 1;
            break;
        }
    }
    if(!bulundu) printf("\nHesap bulunamadi!\n");
    fclose(dosya);
}

int main() {
    int secim;
    while(1) {
        printf("\n--- FURKAN BANK ---");
        printf("\n1. Hesap Ac\n2. Bakiye Sorgula\n3. Cikis\nSecim: ");
        scanf("%d", &secim);
        if(secim == 1) hesapOlustur();
        else if(secim == 2) bakiyeSorgula();
        else break;
    }
    return 0;
}
