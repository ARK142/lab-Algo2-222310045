#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void tambahNode(string data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void tampilkanList() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList bungaList;

    bungaList.tambahNode("Anggrek");
    bungaList.tambahNode("Mawar");
    bungaList.tambahNode("Tulip");
    bungaList.tambahNode("Lily");
    bungaList.tambahNode("Melati");
    
    bungaList.tampilkanList();

    return 0;
}

