#include <iostream>
using namespace std;

int main() {
    char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};

    cout << "Isi Array A: ";
    for (int I = 0; I < 8; I++) {
        cout << A[I] << " ";
    }

    char input;
    cout << "\nMasukkan huruf yang ingin dicek: ";
    cin >> input;

    bool found = false;

    for (int i = 0; i < 7; i++) {
        if (A[i] == input) {
            found = true;
            cout << "ADA " << input << endl;
            break;
        }
    }

    if (!found) {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}

