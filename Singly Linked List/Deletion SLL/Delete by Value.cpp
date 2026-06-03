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

    if(front == NULL) {
        front = newNode;
        return;
    }

    Node* temp = front;
    while(temp-> next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteByValue(Node* &front, int targetVal) {
    if (front == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (front->val == targetVal) {
        Node* temp = front;
        front = front->next;
        delete temp;
        return;
    }

    Node* temp = front;
    while (temp->next != NULL && temp->next->val != targetVal) {
        temp = temp->next;

    }

    if (temp->next == NULL) {
        cout << "Target value not found" << endl;
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
    Node* front = NULL;

    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);

    cout << "Before deletion: "  << endl;
    display(front);

    deleteByValue(front, 20);

    cout << "After deletion: " << endl;
    display(front);

    return 0;
}