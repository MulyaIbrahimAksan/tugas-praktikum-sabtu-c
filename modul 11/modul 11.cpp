#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, countB = 0, countC = 0;

    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    double average = (double)sum / 12;

    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[countB++] = A[i];
        } else {
            C[countC++] = A[i];
        }
    }

    printf("Array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Array C: ");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
