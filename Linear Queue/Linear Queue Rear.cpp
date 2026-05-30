#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int maxSize = 5;
int myQueue[maxSize] = {
    10,
    20,
    30, 
    40
};
int front = 0, rear = 3;

bool isEmpty() {
    return (front == -1 && rear == -1);
}

void showQueue() {
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
    } 
    else {
        cout << "Queue: " << endl;
        for (int i=front; i<=rear; i++) {
            cout << myQueue[i] << endl;
        }
    }
}

int rearElement() {
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
        return -1;
    }
    return myQueue[rear];
}

int main() {
    showQueue();
    int re = rearElement();
    
    if (re != -1) cout << "Rear element: " << re << endl;
    return 0;
}
