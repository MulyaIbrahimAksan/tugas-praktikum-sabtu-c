#include <iostream>
using namespace std;

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int length = 13;
    int count = 0;

    for (int i = 0; i < length && data[i] != 999 && count < 11; i++) {
        if (data[i] % 2 != 0) {  
            A[count] = data[i];
            count++;
        }
    }

    cout << "Isi array setelah menyimpan nilai ganjil menjadi:" << endl;
    for (int i = 0; i < count; i++) {
        if (i == 0) {
        		if (i == 0) {
            cout << "A ";
        }
            cout << A[i];
        } else {
            cout << " " << A[i];
        }
    }

    return 0;
}
