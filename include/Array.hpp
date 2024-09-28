// Array.hpp
#ifndef ARRAY_HPP
#define ARRAY_HPP

class Array {
public:
    Array(int size);
    ~Array();
    void setElement(int index, int value);
    int getElement(int index);
private:
    int* arr;
    int size;
};

#endif

