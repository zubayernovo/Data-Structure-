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
    return (rear == (maxSize -1));
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
        rear++;
        myQueue[rear] = x;
        cout << "Element inserted" << endl;
    }
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

int frontElement() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    else {
        return myQueue[front];
    }
}

int rearElement() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    else {
        return myQueue[rear];
    }
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

int main() {
    cout << "Enqueueing elements..." << endl;
    enQueue(10);
    enQueue(20);
    enQueue(30);

    cout << "Enqueue completed" <<endl;
    cout << "Front element: " << frontElement() << endl;
    cout << "Rear element: " << rearElement() << endl;

    cout << "Dequeueing elements..." << endl;
    deQueue();
    deQueue();

    cout << "Dequeue completed" << endl;
    cout << "Front element: " << frontElement() << endl;
    cout << "Rear element: " << rearElement() << endl;

    return 0;
}











































