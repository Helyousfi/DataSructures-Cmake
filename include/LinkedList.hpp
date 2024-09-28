// LinkedList.hpp
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void insert(int value);
    void printList();
private:
    Node* head;
};

#endif

