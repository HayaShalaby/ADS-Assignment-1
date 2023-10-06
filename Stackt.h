//
// Created by Haya on 9/14/2023.
//

#ifndef ADS_ASS1_STACKT_H
#define ADS_ASS1_STACKT_H

template <class T>
class Stackt{
    int topOfStack; //element at the top of the stack
    int size; //size of the stack
    T *discs; //array-based stack

public:
    Stackt(int s); //constructor, initialises private data members
    bool isEmpty(); //checks if the stack is empty
    bool isFull(); //checks if the stack is full
    void pop(T &d); //removes the element at the top of the stack and assigns it to d
    void push(T d); //pushes the given parameter value d onto the top of the stack
    void displayStack(); //displays the contents of the stack
};

#endif //ADS_ASS1_STACKT_H

