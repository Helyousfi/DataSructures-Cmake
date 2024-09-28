// Queue.hpp
#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue {
public:
    Queue(int size);
    ~Queue();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
private:
    int* arr;
    int front, rear, size, capacity;
};

#endif

