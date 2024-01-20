#include <stdio.h>
#include <unistd.h>

// Fungsi untuk mendapatkan input ketebalan dari pengguna
int getInputKetebalan() {
    int ketebalan;
    printf("Masukan ketebalan pengelasan secara manual pada array dan hitung nilai tengahnya: ");
    scanf("%d", &ketebalan);
    return ketebalan;
}

// Fungsi untuk melakukan proses pengelasan
void lakukanPengelasan(int ketebalan, int durasi) {
    printf("Motor listrik utama berputar dan pindah ke nilai tengah %d.\n", ketebalan / 2);
    sleep(1 * 2);
    printf("Motor listrik lengan tungkai berputar 45 derajat.\n");
    sleep(1 * 2);
    printf("Motor listrik jari robot berputar mendekati objek yang akan di las.\n");
    sleep(1 * 2);
    printf("Proses pengelasan untuk ketebalan %d selama %d detik.\n", ketebalan, durasi);
    sleep(1 * 2);
    printf("Pengelasan selesai. Proses akan berulang ke langkah 3.\n");
}

// Fungsi untuk menampilkan pesan
void tampilkanPesan(const char *pesan) {
    printf("%s\n", pesan);
}

int main() {
    int KP[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int JK = sizeof(KP) / sizeof(KP[0]);

    tampilkanPesan("Tombol start ditekan. Motor listrik utama aktif dan berputar 180 derajat.");

    for (int i = 0; i < JK; i++) {
        int ketebalan = getInputKetebalan();
        lakukanPengelasan(ketebalan, waktu[i]);
    }

    return 0;
}

