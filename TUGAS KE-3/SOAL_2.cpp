#include <iostream>
#include <algorithm>
using namespace std;

struct Book {
    string title;
    int rack;
};

bool compareTitles(Book b1, Book b2) {
    return b1.title < b2.title;
}

int main() {
    Book books[] = {{"Naruto", 1}, {"Siksa kubur", 2}, {"Turotial masakan jepang", 3}, {"Tutorial coding c++", 4}, {"Siksa kubur vol : 2", 5}};
    int n = sizeof(books) / sizeof(books[0]);
    sort(books, books + n, compareTitles);

    string searchKey;
    cout << "Masukan judul buku: ";
    getline(cin, searchKey);

    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (books[mid].title == searchKey) {
            cout << "Buku ditemukan " << books[mid].title << " berada di rak " << books[mid].rack << endl;
            return 0;
        }
        else if (books[mid].title < searchKey) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    cout << "Buku tidak ditemukan." << endl;

    return 0;
}
