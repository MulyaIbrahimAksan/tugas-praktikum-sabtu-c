#include<stdio.h>

int main() {

    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    
    int N;
    printf("Masukkan nilai integer N: ");
    scanf("%d", &N);
    
    int ada = 0;
    int index = -1;
    
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            ada = 1;
            index = i;
            break;
        }
    }
    
    if (ada) {
        printf("ADA, N ditemukan pada indeks %d.\n", index);
    } else {
        printf("TIDAK ADA.\n");
    }
    
    return 0;
}





