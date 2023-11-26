#include <stdio.h>

int main() {
    
    int nilai[10];

    printf("Masukkan nilai mahasiswa:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\nDaftar nilai mahasiswa yang lulus (nilai >= 60):\n");
    for (int i = 0; i < 10; ++i) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa %d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}
