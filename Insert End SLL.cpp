#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertEnd(Node* &front, int val) {
    Node* newNode = new Node(val);
    if (front == NULL) {
        front = newNode;
        return;
    }
    Node* temp = front;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node* front) {
    while (front != NULL) {
        cout << front->val << " -> ";
        front = front->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* front = NULL;
    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);

    display(front);

    cin.get();
    return 0;
}



























