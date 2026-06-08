#include <iostream>
#include <bits/stdc++.h>
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

void insertEnd (Node* &front, int val) {
    Node* newNode = new Node (val);
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

int findMiddleNode (Node* front) {
    if (front == NULL) {
        return -1;
    }

    if (front->next == NULL) {
        return front->val;
    }

    Node* slow = front;
    Node* fast = front;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}

void display (Node* front) {
    while (front != NULL) {
        cout << front->val << " -> " << endl;
        front = front->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* front = NULL;
    
    insertEnd(front, 10);
    insertEnd(front, 20);
    insertEnd(front, 30);
    insertEnd(front, 40);
    insertEnd(front, 50);
    insertEnd(front, 60);

    cout << "Linked List: " << endl;
    display (front);

    if (findMiddleNode(front) == -1) {
        cout << "Empty List" <<endl;
    }
    else {
        cout << "Middle Node: " << findMiddleNode(front) << endl;
    }
    return 0;
}