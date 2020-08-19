#include <iostream>
#include "stack.h"
using namespace std;


Stack::Stack(int s) {
    myArray = new int[s];
    size = s;
    top = -1;

}

Stack::Stack(const Stack &obj){
    if(obj.size > 0)
        myArray = new int[obj.size];
    else
        myArray = nullptr;
    
    size = obj.size;

    for(int count = 0; count < size; count++)
        myArray[count] = obj.myArray[count];
}

Stack::~Stack() {
    delete [] myArray;
}

void Stack::push(int num) {
    if (isFull()){
        cout << "The stack is full. \n";
    }
    else {
        top++;
        myArray[top] = num;
    }
}

void Stack::pop(int &num) {
    if(isEmpty()) {
        cout << "the stack is empty. \n";
    }else {
        num = myArray[top];
        top--;
    }
}

bool Stack::isFull() const {
    bool status;

    if (top == size - 1)
        status = true;
    else 
        status = false;
    return status;
}

bool Stack::isEmpty() const {
    bool status;

    if (top == -1)
        status = true;
    else
        status = false;

    return status;
}

