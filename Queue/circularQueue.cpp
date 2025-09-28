#include <iostream>
using namespace std;

#define MAX 5

int cqueue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % MAX == front) {
        cout << "Circular Queue Overflow\n";
        return;
    }
    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % MAX;
    cqueue[rear] = x;
    cout << x << " inserted\n";
}

void dequeue() {
    if (front == -1) {
        cout << "Circular Queue Underflow\n";
        return;
    }
    cout << cqueue[front] << " deleted\n";
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void display() {
    if (front == -1) {
        cout << "Circular Queue is Empty\n";
        return;
    }
    cout << "Circular Queue: ";
    int i = front;
    while (true) {
        cout << cqueue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    cout << "\n";
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    enqueue(50);
    enqueue(60); // Overflow
    display();
    return 0;
}
