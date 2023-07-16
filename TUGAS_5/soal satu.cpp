#include <iostream>
#include <string>
using namespace std;

class Buku {
    private:
        string judul;
        string pengarang;
        bool tersedia;

    public:
        void setJudul(string newJudul) {
            judul = newJudul;
        }

        void setPengarang(string newPengarang) {
            pengarang = newPengarang;
        }

        void setTersedia(bool newTersedia) {
            tersedia = newTersedia;
        }

        string getJudul() {
            return judul;
        }

        string getPengarang() {
            return pengarang;
        }

        bool isTersedia() {
            return tersedia;
        }
};

class Pelajar {
    private:
        string nama;

    public:
        Pelajar(string newNama) {
            nama = newNama;
        }

        string getNama() {
            return nama;
        }

        void pinjamBuku(Buku &buku) {
            if (buku.isTersedia()) {
                cout << nama << " berhasil meminjam buku " << buku.getJudul() << endl;
                buku.setTersedia(false);
            } else {
                cout << "Maaf, buku " << buku.getJudul() << " sedang dipinjam oleh pelajar lain." << endl;
            }
        }

        void kembalikanBuku(Buku &buku) {
            cout << nama << " mengembalikan buku " << buku.getJudul() << endl;
            buku.setTersedia(true);
        }
};

int main() {
    Buku buku1;
    buku1.setJudul("Harry Potter and the Philosopher's Stone");
    buku1.setPengarang("J.K. Rowling");
    buku1.setTersedia(true);

    Pelajar pelajar1("Agus");

    pelajar1.pinjamBuku(buku1);

    Pelajar pelajar2("Budi");
    pelajar2.pinjamBuku(buku1);

    pelajar1.kembalikanBuku(buku1);

    pelajar2.pinjamBuku(buku1);

    return 0;
}

