#include <stdio.h>

int main() {
    int matris[5][5];
    int hedef;

    // Kullanıcıdan 5x5 matris girdisini alın
    printf("5x5 boyutunda bir matris girin:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    // Aranacak hedef değeri alın
    printf("Aranacak hedef degeri girin: ");
    scanf("%d", &hedef);

    // Matris içinde hedefi arayın
    int bulundu = 0; // Hedef değerin bulunup bulunmadığını kontrol etmek için bir bayrak

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matris[i][j] == hedef) {
                printf("Hedef deger %d, (%d, %d) konumunda bulundu.\n", hedef, i, j);
                bulundu = 1; // Hedef değer bulunduğunda bayrağı ayarla
                break;
            }
        }
        if (bulundu) {
            break; // İç döngüden çıkın
        }
    }

    if (!bulundu) {
        printf("Hedef deger %d matriste bulunamadi.\n", hedef);
    }

    return 0;
}



