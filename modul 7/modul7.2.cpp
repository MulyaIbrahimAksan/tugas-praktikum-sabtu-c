#include <stdio.h>

int main() {
    int A[11];
    int i, j = 0;

    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[j] = data[i];
            j++;
        }
    }
		printf ("Isi array setelah menyimpan nilai genap : \n ") ;
    for (i = 0; i < j; i++){
	printf (" %d ", A [i]) ;
    }

    return 0;
}
