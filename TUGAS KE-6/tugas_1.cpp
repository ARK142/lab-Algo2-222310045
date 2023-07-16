#include <iostream>
using namespace std;

const int MAX_KOTA = 100;

int main() {
    int jumlahKota;
    int costMatriks[MAX_KOTA][MAX_KOTA];

    cout << "Masukkan jumlah kota: ";
    cin >> jumlahKota;

    cout << "Masukkan nilai cost matriks: " << endl;
    for (int i = 0; i < jumlahKota; i++) {
        for (int j = 0; j < jumlahKota; j++) {
            cin >> costMatriks[i][j];
        }
    }

    cout << "Jumlah kota: " << jumlahKota << endl;
    cout << "Nilai cost matriks: " << endl;
    for (int i = 0; i < jumlahKota; i++) {
        for (int j = 0; j < jumlahKota; j++) {
            cout << costMatriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
