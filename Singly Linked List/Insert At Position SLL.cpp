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

void insertAtPosition(Node* &front, int pos, int val) {
    Node* newNode = new Node(val);

    if (pos == 0) {
        newNode->next = front;
        front = newNode;
        return;
    }

    Node* temp = front;
    for (int i=0; i<pos -1&& temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* front) {
    while (front != NULL) {
        cout << front->val << " ->";
        front = front->next;
    }
    cout << "NULL" << endl;
} 

int main() {
    Node* front = new Node(10);

    front->next = new Node(20);
    front->next->next = new Node(30);

    cout << "Before Insertion: " << endl;
    display(front);

    insertAtPosition(front, 1, 15);

    cout << "After insertion: " << endl;
    display(front);

    cin.get();
    return 0;
}