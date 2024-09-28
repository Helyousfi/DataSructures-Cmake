// Queue.cpp
#include "Queue.hpp"
#include <iostream>

Queue::Queue(int size) : capacity(size), front(0), size(0), rear(size - 1) {
    arr = new int[capacity];
}

Queue::~Queue() {
    delete[] arr;
}

void Queue::enqueue(int value) {
    if (size < capacity) {
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
    }
}

int Queue::dequeue() {
    if (size > 0) {
        int value = arr[front];
        front = (front + 1) % capacity;
        size--;
        return value;
    }
    return -1;
}

bool Queue::isEmpty() {
    return size == 0;
}

