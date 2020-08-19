#ifndef STACK_H
#define STACK_H

class Stack{
    private:
        int *myArray; // Pointer to the stack array
        int size; // The stack size
        int top; // Indicates the top of the stack

    public:
        // Constructor
        Stack(int);

        // Copy constructor
        Stack(const Stack &);

        // Destructor
        ~Stack();

        // Stack operations
        void push(int);
        void pop(int &);
        bool isFull() const;
        bool isEmpty() const;
};
#endif