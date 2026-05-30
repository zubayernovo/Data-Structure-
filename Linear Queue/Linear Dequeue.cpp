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

bool isFull() {
    return (rear == (maxSize -1));
}

void deQueue() {
    if (isEmpty()) {
        cout << "Nothing to dequeue" << endl;
    }
    else if(front == rear) {
        front = -1;
        rear = -1;
        cout << "Element dequeued" << endl;
    }
    else {
        front++;
        cout << "Element dequeued" << endl;
    }
}

int main() {
    cout << "Dequeueing elements... " << endl;
    deQueue();
    deQueue();

    cout << "Elements dequeued" << endl;
    cout << "Front element: " << myQueue[front] << endl;
    cout << "Rear element: " << myQueue[rear] << endl;

    return 0;
}
