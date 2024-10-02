#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= angka; i++) {
        if (i % 2 != 0) {
            cout << endl << i << " ";
        }

    }
    cout << "\n\nBilangan Genap: ";
    for (int i = 1; i <= angka; i++) {
        if (i % 2 == 0) {
            cout << endl << i << " ";
        }
    }
    return 0;
}
