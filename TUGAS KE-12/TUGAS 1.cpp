#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
protected:
  string nama;
  int umur;
  string jurusan;
  string fakultas;
  string status;

public:
  Mahasiswa(string n, int u, string j, string f, string s) {
    nama = n;
    umur = u;
    jurusan = j;
    fakultas = f;
    status = s;
  }

  string getStatus() { return status; }

  virtual string getStatusMahasiswa() = 0;
};

class Alumni : public Mahasiswa {
public:
  Alumni(string n, int u, string j, string f, string s)
      : Mahasiswa(n, u, j, f, s) {}

  string getStatusMahasiswa() { return "Alumni"; }
};

class Aktif : public Mahasiswa {
public:
  Aktif(string n, int u, string j, string f, string s)
      : Mahasiswa(n, u, j, f, s) {}

  string getStatusMahasiswa() { return "Aktif"; }
};

int main() {
  Mahasiswa *mahasiswa;

  mahasiswa =
      new Aktif("Rohmah", 19, "Teknologi Informasi", "Informatika", "Aktif");
  cout << mahasiswa->getStatusMahasiswa() << endl; // Output: Aktif

  mahasiswa = new Alumni("Eva", 24, "Ekonomi", "Bisnis", "Alumni");
  cout << mahasiswa->getStatusMahasiswa() << endl; // Output: Alumni

  return 0;
}
