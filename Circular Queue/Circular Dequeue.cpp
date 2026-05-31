#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int maxSize = 5;
int myQueue[maxSize] = {
    10,
    20,
    30,
    40,
    0
};

int front = 0, rear = 3;

bool isEmpty() {
    return (front == -1 && rear == -1);
}

void deQueue() {
    if (isEmpty()) {
        cout << "The Queue is Empty" << endl;
    }
    else if (front == rear) {
        cout << "Deleted: " << myQueue[front] << endl;
        front = -1;
        rear = -1;
    }
    else {
        cout << "Deleted: " << myQueue[front] << endl;
        front = (front + 1) % maxSize;
    }
}

int main() {
    cout << "Dequeuing element..." << endl;

    deQueue();

    if (!isEmpty()) {
        cout << "Front Element: " << myQueue[front] << endl;
        cout << "Rear Element: " << myQueue[rear] << endl;
    }

    return 0;
}
