#include <stdio.h>

int main() {
    int matris[5][5];
    int hedef;

    // Kullan�c�dan 5x5 matris girdisini al�n
    printf("5x5 boyutunda bir matris girin:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    // Aranacak hedef de�eri al�n
    printf("Aranacak hedef degeri girin: ");
    scanf("%d", &hedef);

    // Matris i�inde hedefi aray�n
    int bulundu = 0; // Hedef de�erin bulunup bulunmad���n� kontrol etmek i�in bir bayrak

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matris[i][j] == hedef) {
                printf("Hedef deger %d, (%d, %d) konumunda bulundu.\n", hedef, i, j);
                bulundu = 1; // Hedef de�er bulundu�unda bayra�� ayarla
                break;
            }
        }
        if (bulundu) {
            break; // �� d�ng�den ��k�n
        }
    }

    if (!bulundu) {
        printf("Hedef deger %d matriste bulunamadi.\n", hedef);
    }

    return 0;
}



