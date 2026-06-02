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

void deleteEnd(Node* &front) {
    if (front == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    if (front->next == NULL) {
        delete front;
        front = NULL;
        return;
    }

    Node* temp = front;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

void display(Node* front) {
    while (front != NULL) {
        cout << front->val << " -> ";
        front = front->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* front = NULL;

    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);
    
    cout << "Before deletion: " << endl;
    display(front);

    deleteEnd(front);

    cout << "After Deletion: " << endl;
    display(front);

    return 0;
}