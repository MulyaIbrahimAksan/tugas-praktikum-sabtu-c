#include <stdio.h>

int main() {
    int nilai[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("Daftar nilai mahasiswa yang lulus (nilai >= 60):\n");
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa yang lulus dengan nilai : %d\n", nilai[i]);
        }
    }

    return 0;
}
