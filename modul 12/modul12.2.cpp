#include <iostream>
using namespace std;

int main() {
    int ukuranArray = 11;
    char A[ukuranArray] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T','A', '\0'};

    cout << "Isi Array A: ";
    for (int i = 0; i < ukuranArray - 1; i++) {
        cout << A[i] << " ";
    }


    int count[26] = {0};
    for (int i = 0; i < ukuranArray - 1; i++) {
        count[A[i] - 'A']++;
    }


    char hurufTerbanyak = 'A';
    int jumlahTerbanyak = count[0];

    for (int i = 1; i < 26; i++) {
        if (count[i] > jumlahTerbanyak) {
            hurufTerbanyak = static_cast<char>('A' + i);
            jumlahTerbanyak = count[i];
        }
    }


    cout << "\nHuruf terbanyak: " << hurufTerbanyak << endl;
    cout << "Jumlah huruf terbanyak: " << jumlahTerbanyak << endl;

    return 0;
}

