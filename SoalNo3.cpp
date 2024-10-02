#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

int bagi(int a, int b) {
    return a / b;
}

int main() {
    int pilihan, operand1, operand2;

    cout << "Pilih operasi matematika yang diinginkan:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan (1-4): ";
    cin >> pilihan;

    cout << "Masukkan dua angka: ";
    cin >> operand1 >> operand2;

    switch(pilihan) {
        case 1:
            cout << "Hasil dari Penjumlahan untuk " << operand1 << " dan " << operand2 << " adalah " << tambah(operand1, operand2) << endl;
            break;
        case 2:
            cout << "Hasil dari Pengurangan untuk " << operand1 << " dan " << operand2 << " adalah " << kurang(operand1, operand2) << endl;
            break;
        case 3:
            cout << "Hasil dari Perkalian untuk " << operand1 << " dan " << operand2 << " adalah " << kali(operand1, operand2) << endl;
            break;
        case 4:
            if (operand2 != 0) {
                cout << "Hasil dari Pembagian untuk " << operand1 << " dan " << operand2 << " adalah " << bagi(operand1, operand2) << endl;
            } else {
                cout << "Pembagian dengan nol tidak valid." << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}
