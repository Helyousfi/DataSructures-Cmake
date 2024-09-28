// Array.cpp
#include "Array.hpp"
#include <iostream>

Array::Array(int size) : size(size) {
    arr = new int[size];
}

Array::~Array() {
    delete[] arr;
}

void Array::setElement(int index, int value) {
    if (index >= 0 && index < size) arr[index] = value;
}

int Array::getElement(int index) {
    return (index >= 0 && index < size) ? arr[index] : -1;
}

