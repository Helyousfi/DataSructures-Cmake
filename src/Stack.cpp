// Stack.cpp
#include "Stack.hpp"
#include <iostream>

Stack::Stack(int size) : size(size), top(-1) {
    arr = new int[size];
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::push(int value) {
    if (top < size - 1) arr[++top] = value;
}

int Stack::pop() {
    return (top >= 0) ? arr[top--] : -1;
}

bool Stack::isEmpty() {
    return top == -1;
}

