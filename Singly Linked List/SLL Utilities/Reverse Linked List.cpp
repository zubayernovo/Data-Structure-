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

    cout << "NULL" << endl;
}

void reverseLinkedList(Node* &front) {
    Node* prev = NULL;
    Node* current = front;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    front = prev;
}

int main() {
    Node* front = NULL;

    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);
    insertEnd(front, 40);

    cout << "Before Reversal:" << endl;
    display(front);

    reverseLinkedList(front);

    cout << "After Reversal:" << endl;
    display(front);

    return 0;
}
