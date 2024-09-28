// main.cpp
#include "Array.hpp"
#include "LinkedList.hpp"
#include "Stack.hpp"
#include "Queue.hpp"
#include <iostream>

enum DataType {
    ArrayType,
    LinkedListType,
    StackType,
    QueueType,
    None // To handle invalid input
};

int main() {
    // Set the desired data type
    DataType dataType = QueueType; // Change this to test other data structures

    switch (dataType) { // Corrected the switch statement to use the variable
        case ArrayType: {
            Array arr(5); // Create an array of size 5
            for (int i = 0; i < 5; ++i) {
                arr.setElement(i, i * 10); // Set elements
            }
            std::cout << "Array elements:" << std::endl;
            for (int i = 0; i < 5; ++i) {
                std::cout << "Element at index " << i << " = " << arr.getElement(i) << std::endl;
            }
            break;
        }
        case LinkedListType: {
            LinkedList list; // Create a linked list
            // Inserting some values
            list.insert(10);
            list.insert(20);
            list.insert(30);
            list.insert(40);

            // Printing the linked list
            std::cout << "Linked List: ";
            list.printList();
            break;
        }
        case StackType: {
            Stack stack(5);
            stack.push(10);
            stack.push(20);
            stack.push(30);

            // Display and pop elements from the stack
            while (!stack.isEmpty()) {
                std::cout << "Popped: " << stack.pop() << std::endl;
            }
            break;
        }
        case QueueType: {
            Queue queue(5);
            // Enqueue some values into the queue
            queue.enqueue(10);
            queue.enqueue(20);
            queue.enqueue(30);
            queue.enqueue(40);
            queue.enqueue(50);

            // Attempt to enqueue another value to test capacity
            queue.enqueue(60); // This should not be added as the queue is full

            // Dequeue and display values until the queue is empty
            while (!queue.isEmpty()) {
                std::cout << "Dequeued: " << queue.dequeue() << std::endl;
            }
            break;
        }

        default:
            std::cout << "Invalid input! Please enter a valid data structure type." << std::endl;
            break;
      
    }

    return 0;
}

