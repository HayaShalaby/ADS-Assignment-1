//
// Created by Haya on 9/14/2023.
//


#include "Stackt.h"
#include <iostream>
using namespace std;

template <class T>
Stackt<T>::Stackt(int s){
    size = s;
    discs = new T[size]; //dynamic array
    topOfStack = -1;
}

template <class T>
bool Stackt<T>::isEmpty(){
    return (topOfStack == -1);
}

template <class T>
bool Stackt<T>::isFull(){
    return (topOfStack >= size - 1);
}

template <class T>
void Stackt<T>::pop(T &d){
    if(isEmpty())
        cout << "Stack is empty." <<endl;
    else
        d = discs[topOfStack--]; //removes from stack then decrements topOfStack
}

template <class T>
void Stackt<T>::push(T d){
    if(isFull())
        cout << "Stack is full." <<endl;
    else
        discs[++topOfStack] = d; //increments topOfStack then adds to stack
}

template <class T>
void Stackt<T>::displayStack(){
    for(int i = 0; i <= topOfStack; i++){ //loops until end of stack
        cout << discs[i] << " "; //outputs each element
    }
    cout << endl;
}
