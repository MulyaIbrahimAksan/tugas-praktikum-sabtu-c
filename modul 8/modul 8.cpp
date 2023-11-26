#include <stdio.h>

int main() {
    int A[11];
    int data;
    int i = 0;

    printf("a. Isi array A:\n");
    
    while (1) {
        scanf("%d", &data);

        if (data == 999) {
            break;
        }

        A[i] = data;
        i++;

        if (i >= 11) {
            break;
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    printf("\nb. Isi array A (hanya data > 9):\n");

    i = 0;
    while (1) {
        scanf("%d", &data);

        if (data == 999) {
            break;
        }

        if (data > 9) {
            A[i] = data;
            i++;
        }

        if (i >= 11) {
            break;
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    printf("\nc. Isi array A (hanya data > 9, berderet):\n");

    i = 0;
    while (1) {
        scanf("%d", &data);

        if (data == 999) {
            break;
        }

        if (data > 9 && i < 11) {
            A[i] = data;
            i++;
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    return 0;
}
