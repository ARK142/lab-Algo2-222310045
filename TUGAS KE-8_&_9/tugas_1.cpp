#include <iostream>
#include <vector>

using namespace std;

class HashTable {
private:
    vector<int> table;
    int tableSize;

public:
    HashTable(int size) {
        tableSize = size;
        table.resize(tableSize, -1);
    }

    int hashFunction(int key) {
        return key % tableSize;
    }

    int hashFunction2(int key) {
        // Memastikan nilai yang dikembalikan tidak bernilai 0
        return (7 - (key % 7));
    }

    void insertKey(int key) {
        int index = hashFunction(key);
        int index2 = hashFunction2(key);

        if (table[index] == -1) {
            table[index] = key;
        } else {
            int newIndex = (index + index2) % tableSize;
            while (table[newIndex] != -1) {
                newIndex = (newIndex + index2) % tableSize;
            }
            table[newIndex] = key;
        }
    }

    void displayTable() {
        for (int i = 0; i < tableSize; i++) {
            if (table[i] != -1) {
                cout << "Index " << i << ": " << table[i] << endl;
            }
        }
    }
};

int main() {
    HashTable hashTable(10);

    hashTable.insertKey(5);
    hashTable.insertKey(15);
    hashTable.insertKey(25);
    hashTable.insertKey(35);
    hashTable.insertKey(45);

    hashTable.displayTable();

    return 0;
}
