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

int countNodes(Node* front) {
    int count = 0;

    while (front != NULL) {
        count++;
        front = front->next;
    }
    return count;
}

int main() {
    Node* front = NULL;

    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);
    insertEnd(front, 40);

    cout << "Total Nodes: " << countNodes(front) << endl;

    return 0;
}
