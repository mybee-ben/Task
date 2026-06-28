#include <stdio.h>

int main () {
    int nilai[5];
    int *ptr = nilai;
    int i;
    int tertinggi;
    int terendah;
    int total = 0;
    double rata;

    printf("Masukan 5 nilai ujian : \n");

    for(i = 0; i < 5; i++) {
        printf("Nilai ke-%d : ", i + 1 );
        scanf("%d", &nilai[i]);
    }
    
    
    tertinggi   = nilai [0];
    terendah    = nilai [0];
    
    for(i = 0; i < 5; i++){
        total = total + nilai[i];
        if (nilai[i] > tertinggi) {
            tertinggi = nilai [i];
        } elseif (nilai[i] < terendah) {
            terendah = nilai [i];
        }
    }

    rata = (double)total / 5;

    printf("\nDaftar Nilai : \n");
    for (i = 0; i < 5; i++) {

        printf("Nilai ke-%d : %d\n", i + 1, *(ptr + i));
    }
    
    printf("\nNilai tertinggi : %d\n", tertinggi);
    printf("Nilai terendah : %d\n", terendah);
    printf("Nilai rata-rata : %.2f\n", rata);

    return 0;
}