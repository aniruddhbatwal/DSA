#include <iostream>
using namespace std;

#define MAX 5

int dequeArr[MAX];
int front = -1, rear = -1;

bool isFull() {
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

bool isEmpty() {
    return (front == -1);
}

void insertFront(int x) {
    if (isFull()) {
        cout << "Deque Overflow\n";
        return;
    }
    if (front == -1)
        front = rear = 0;
    else if (front == 0)
        front = MAX - 1;
    else
        front--;
    dequeArr[front] = x;
    cout << x << " inserted at front\n";
}

void insertRear(int x) {
    if (isFull()) {
        cout << "Deque Overflow\n";
        return;
    }
    if (front == -1)
        front = rear = 0;
    else if (rear == MAX - 1)
        rear = 0;
    else
        rear++;
    dequeArr[rear] = x;
    cout << x << " inserted at rear\n";
}

void deleteFront() {
    if (isEmpty()) {
        cout << "Deque Underflow\n";
        return;
    }
    cout << dequeArr[front] << " deleted from front\n";
    if (front == rear)
        front = rear = -1;
    else if (front == MAX - 1)
        front = 0;
    else
        front++;
}

void deleteRear() {
    if (isEmpty()) {
        cout << "Deque Underflow\n";
        return;
    }
    cout << dequeArr[rear] << " deleted from rear\n";
    if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = MAX - 1;
    else
        rear--;
}

void display() {
    if (isEmpty()) {
        cout << "Deque is Empty\n";
        return;
    }
    cout << "Deque: ";
    int i = front;
    while (true) {
        cout << dequeArr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << "\n";
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();
    deleteRear();
    display();
    deleteFront();
    display();
    return 0;
}
