#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertFront(Node* &front, int val) {
    Node* newNode = new Node(val);
    if (front == NULL) {
        front = newNode;
        return;
    }
    newNode->next = front;
    front = newNode;
}

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
    insertFront(front, 10);
    insertFront(front, 20);
    insertFront(front, 30);

    insertEnd(front, 40);
    insertEnd(front, 50);
    insertEnd(front, 60);
    
    display(front);
    cin.get();
    return 0;
}