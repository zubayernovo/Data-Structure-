#include <iostream>
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

bool isEmpty(Node* front) {
    return front == NULL;
}

int main() {
    Node* front = NULL;

    if (isEmpty(front)) {
        cout << "Linked List is Empty" << endl;
    } else {
        cout << "Linked List is Not Empty" << endl;
    }

    insertEnd(front, 10);

    if (isEmpty(front)) {
        cout << "Linked List is Empty" << endl;
    } else {
        cout << "Linked List is Not Empty" << endl;
    }

    return 0;
}
