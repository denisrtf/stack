#pragma once

class Stack {
private:
    int* data;
    int capacity;
    int topIndex;

    void resize(int newCapacity);

public:
    Stack();
    Stack(const Stack& other);                 // Копіюючий конструктор
    Stack& operator=(const Stack& other);      // Оператор присвоєння
    ~Stack();

    void push(int elem);
    int pop();
    bool isEmpty() const;
    void multiPop(int N);
    void show() const;
};

