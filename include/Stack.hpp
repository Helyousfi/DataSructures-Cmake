// Stack.hpp
#ifndef STACK_HPP
#define STACK_HPP

class Stack {
public:
    Stack(int size);
    ~Stack();
    void push(int value);
    int pop();
    bool isEmpty();
private:
    int* arr;
    int top;
    int size;
};

#endif

