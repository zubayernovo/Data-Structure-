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

void insert_at_front(Node* &front, int val) {
    Node* newNode = new Node(val);
    if (front == NULL) {
        front = newNode;
        return;
    }
    newNode->next = front;
    front = newNode;
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
    insert_at_front(front, 10);
    insert_at_front(front, 20);
    insert_at_front(front, 30);
    
    display(front);
    
    return 0;
}























