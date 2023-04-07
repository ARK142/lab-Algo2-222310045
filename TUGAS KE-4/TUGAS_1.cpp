#include <iostream>
#define SIZE 5 
using namespace std;

class CircularQueue {
private:
    int items[SIZE]; 
	int front ;
	int rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        } else if (front == rear + 1) {
            return true;
        } else {
            return false;
        }
    }

    bool isEmpty() {
        if (front == -1) {
            return true;
        } else {
            return false;
        }
    }

    void enQueue(int element) {
        if (isFull()) {
            cout << "Antrian sudah penuh" << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            cout << "Nomor antrian " << element << " berhasil ditambahkan" << endl;
        }
    }

    void deQueue() {
        int element;
        if (isEmpty()) {
            cout << "Tidak ada antrian saat ini" << endl;
        } else {
            element = items[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % SIZE;
            }
            cout << "Nomor antrian " << element << " dipanggil" << endl;
        }
    }

    void display() {
        int i;
        if (isEmpty()) {
            cout << "Tidak ada antrian saat ini" << endl;
        } else {
            cout << "Antrian saat ini: ";
            for (i = front; i != rear; i = (i + 1) % SIZE) {
                cout << items[i] << " ";
            }
            cout << items[i] << endl;
        }
    }
};

int main() {
    CircularQueue q;
    int choice, element;

    cout << "Loket Tiket (Circular Queue)" << endl;

    while (true) {
        cout << "1. Ambil nomor antrian" << endl;
        cout << "2. Panggil nomor antrian" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nomor antrian: ";
                cin >> element;
                q.enQueue(element);
                break;
            case 2:
                q.deQueue();
                break;
            case 3:
                cout << "Terima kasih telah menggunakan layanan kami" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid" << endl;
        }

        q.display();
        cout << endl;
    }

    return 0;
}

