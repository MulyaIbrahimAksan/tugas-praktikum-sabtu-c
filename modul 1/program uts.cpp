#include <stdio.h>
#include <unistd.h>

int main() {
	// Array level kekurangan air dan kecepatan motor RPM
	int kekeruhanAir[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
	int motorRPM[] = {1000, 800, 600, 400, 200, 150, 100, 80};
	
	
	// Rata-rata kekeruhan air dan waktu prncucian dalam menit
	int rataRataKekeruhanAir = 68;
	int waktuCuci = 60;
	
	// Simulasi simbol Start ditekan
	printf("Tombol Start ditekan. Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh.\n");
	sleep(2 * 60); // Menunggu 2 menit untuk mengisi air 
	
	// Sensor turidiameter aktif hanya satu kali untuk mendeteksi level kekeruhan air
	int detectedLevel = -1;
	for (int i = 0; i < sizeof(kekeruhanAir) / sizeof(kekeruhanAir[0]); i++) {
		if (kekeruhanAir[i] <= rataRataKekeruhanAir) {
			detectedLevel = i;
			break;
		}
	}
	
	// Menggunakan switch-case untuk memilih kecepatan motor berdasarkan level kekeruhan air 
	switch (detectedLevel) {
		case 0:
		case 1:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[0]);
			printf(" rpm.\n");
			break;
		case 2:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[1]);
			printf(" rpm.\n");
			break;
		case 3:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[2]);
			printf(" rpm.\n");
			break;
		case 4:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[3]);
			printf(" rpm.\n");
			break;
		case 5:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[4]);
			printf(" rpm.\n");
			break;
		case 6:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[5]);
			printf(" rpm.\n");
			break;
		case 7:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[6]);
			printf(" rpm.\n");
			break;
		case 8:
			printf("Motor listrik utama berputar dengan kecepatan ");
			printf("%d", motorRPM[7]);
			printf(" rpm.\n");
			break;
		default:
			printf("Level kekeruhan air tidak valid.\n");
			return 1;
	}
	
	// Proses pencucian dengan waktutertentu sesuai dengan level kekeruhan air
	for (int  j = 1; j <= waktuCuci; j++) {
		printf("Waktu pencucian: %d menit.\n", j);
		sleep(1 * 60); // Menunggu 1 menit
		
		// Jeda pertengahan waktu pencucian untuk membuang air kotor
		if (j == waktuCuci / 2) {
			printf("Motor listrik pembuka klep pemuang air kotor aktif selama 2 menit sampai air kotor habis.\n");
			sleep(2 * 60); // Jeda 2 menit
		}
	}
	
		// Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
		printf("Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit samapai air habis.\n");
		sleep(2 * 60); // Jeda 2 menit
		
		// Mesin cuci selesai 
		printf("Pencucian selesai. Mesin cuci dimatikan.\n");
		
		return 0;
}

	
