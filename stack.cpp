#include "stack.h"
#include <iostream>

Stack::Stack() : data(nullptr), capacity(0), topIndex(-1) {}

Stack::~Stack() {
    delete[] data;
}

Stack::Stack(const Stack& other) : data(nullptr), capacity(other.capacity), topIndex(other.topIndex) {
    if (capacity > 0) {
        data = new int[capacity];
        for (int i = 0; i <= topIndex; ++i)
            data[i] = other.data[i];
    }
}

Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        delete[] data;
        capacity = other.capacity;
        topIndex = other.topIndex;
        if (capacity > 0) {
            data = new int[capacity];
            for (int i = 0; i <= topIndex; ++i)
                data[i] = other.data[i];
        }
        else {
            data = nullptr;
        }
    }
    return *this;
}

void Stack::resize(int newCapacity) {
    int* newData = new int[newCapacity];
    for (int i = 0; i <= topIndex; ++i)
        newData[i] = data[i];
    delete[] data;
    data = newData;
    capacity = newCapacity;
}

void Stack::push(int elem) {
    if (topIndex + 1 >= capacity) {
        resize(capacity == 0 ? 2 : capacity * 2);
    }
    data[++topIndex] = elem;
}

int Stack::pop() {
    if (isEmpty())
        throw std::out_of_range("Stack is empty");
    return data[topIndex--];
}

bool Stack::isEmpty() const {
    return topIndex < 0;
}

void Stack::multiPop(int N) {
    while (N-- > 0 && !isEmpty()) {
        pop();
    }
}

void Stack::show() const {
    for (int i = 0; i <= topIndex; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
