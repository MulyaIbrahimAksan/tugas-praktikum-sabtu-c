#include <stdio.h>
#include <unistd.h>

int main () {
	int KP[] = {6,8,12,18,24,30,36,42,49,50};
	int waktu[] = {1,2,3,4,5,6,7,8,9};
	int JK = sizeof(KP) / sizeof(KP[0]);
	printf("Tombol start ditekan. Motor listrik utama aktif dan berputar 180 derajat.\n");
	
	for (int i =0; i < JK; i++) {
	
		int nilai_tengah = KP[i] / 2;
		
		printf("Masukan ketebalan pengelasan secara manual pada array dan hitung nilai tengahnya: ");
		scanf("%d",&nilai_tengah);
		printf("Motor listrik utama berputar dan pindah ke nilai tengah %d.\n",nilai_tengah);
		sleep(1*2);
		printf("Motor listrik lengan tungkai berputar 45 derajat.\n");
		sleep(1*2);
		printf("motor listrik jari robot berputar mendekati objek yang akan di las.\n");
		sleep(1*2);
		printf("Proses pengelasan untuk ketebalan %d selama %d detik.\n",KP[i],waktu[i]);
		sleep(1*2);
		printf("Pengelasan selesai.Proses akan berulang ke langkah 3.\n");
    } 
	
	return 0;
}
