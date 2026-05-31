#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int maxSize = 5;
int myQueue[maxSize] = {0};
int front = -1, rear = -1;

bool isEmpty() {
    return (front == -1 && rear == -1);
}

bool isFull() {
    return ((rear + 1) % maxSize == front);
}

void enQueue(int x) {
    if (isFull()) {
        cout << "The Queue is Full" << endl;
    }
    else if (isEmpty()) {
        front = 0;
        rear = 0;
        myQueue[rear] = x;
        cout << "Element inserted" << endl;
    }
    else {
        rear = (rear + 1) % maxSize;
        myQueue[rear] = x;
        cout << "Element inserted" << endl;
    }
}

int main() {
    cout << "Enqueueing elements...." << endl;

    enQueue(10);
    enQueue(20);
    enQueue(30);

    cout << "Elements enqueued" << endl;
    cout << "Front Element: " << myQueue[front] << endl;
    cout << "Rear Element: " << myQueue[rear] << endl;

    return 0;
}
