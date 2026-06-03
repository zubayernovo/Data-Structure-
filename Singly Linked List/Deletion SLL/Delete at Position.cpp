#include<iostream>
#include<bits/stdc++.h>
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

void deleteAtPosition(Node* &front, int pos) {
    if (front == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (pos == 0) {
        Node* temp = front;
        front = front->next;
        delete temp;
        return;
    }

    Node* temp = front;
    for (int i=0; i<pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

void display(Node* front) {
    while (front != NULL) {
        cout << front->val << " -> ";
        front = front->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* front =  NULL;

    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);
    insertEnd(front, 40);

    cout << "Before Deletion:" << endl;
    display(front);

    deleteAtPosition(front, 2);
    cout << "After deletion: " << endl;
    display(front);

    return 0;
}