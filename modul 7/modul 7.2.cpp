#include <stdio.h>

int main() {
    
    int A[11];

    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    int indexA = 0;
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        if (data[i] % 2 == 0) {
            A[indexA] = data[i];
            indexA++;
        }
    }

    printf("Isi array A yang hanya berisi nilai genap:\n");
    for (int i = 0; i < indexA; ++i) {
        printf("%d ", A[i]);
    }

    return 0;
}
