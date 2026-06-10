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

bool search(Node* front, int targetVal) {
    while (front != NULL) {
        if (front->val == targetVal) {
            return true;
        }

        front = front->next;
    }

    return false;
}

int main() {
    Node* front = NULL;

    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);
    insertEnd(front, 40);

    int targetVal = 30;

    if (search(front, targetVal)) {
        cout << targetVal << " Found" << endl;
    } else {
        cout << targetVal << " Not Found" << endl;
    }

    return 0;
}
