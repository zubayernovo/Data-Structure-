#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int maxSize = 5;

int myQueue[maxSize] = {
    10,
    20,
    30,
    40,
    0
};

int front = 0;
int rear = 3;

bool isEmpty() {
    return(front==-1 && rear==-1);
}

void Front() {
    if (isEmpty()) {
        cout << "Queue Empty" << endl;
    }
    else {
        cout << "Front Element: " << myQueue[front] << endl;
    }
}

int main() {
    Front();
    return 0;
}