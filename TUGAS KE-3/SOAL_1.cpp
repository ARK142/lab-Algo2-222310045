#include <iostream>
using namespace std;

int main(){
    int data[] = {0, 6, 12, 18, 24};
    int cari, posisi = -1, tm = 0, R = 5, L = 0;

    cout << "Masukkan data yang ingin dicari: ";
    cin >> cari;

    while (L <= R){
        tm = (L + R) / 2;

        if (data[tm] == cari){
            posisi = tm;
            break;
        }else if (data[tm] < cari){
            L = tm + 1;
        }else{
            R = tm - 1;
        }
    }
    if (posisi != -1){
        cout << "Data ditemukan pada posisi ke-" << posisi + 1 << endl;
    }else{
        cout << "Data tidak ditemukan" << endl;
    }
    return 0;
}
