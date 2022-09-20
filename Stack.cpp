//
// Created by Harsh Sharma on 9/20/2022.
//
#include <iostream>
#include "Stack.h"
template <typename T>
Stack<T>::Stack(int size){
    this->size=size;
}
template Stack<int>::Stack(int);
template Stack<char>::Stack(int);

template <typename T>
void Stack<T>::push(T val) {
    top++;
    if (top==size){
        std::cout<<"Invalid Operation. Stack full.\n";
        return;
    }
    stack.push_back(val);
}
template void Stack<int>::push(int);
template void Stack<char>::push(char);

template <typename T>
bool Stack<T>::isEmpty() {
    if (top==-1){
        return true;
    }else return false;
}
template bool Stack<int>::isEmpty();
template bool Stack<char>::isEmpty();

template <typename T>
T Stack<T>::pop() {
    if (isEmpty()){
        std::cout<<"Invalid operation. Stack is already empty\n";
        return -1;
    }
    T temp = stack.back();
    stack.pop_back();
    top--;
    //std::cout<<"Popped off element\n";
    return temp;
}
template int Stack<int>::pop();
template char Stack<char>::pop();

template <typename T>
T Stack<T>::top_S() {
    std::cout<<stack.back()<<'\n';
    return stack.back();
}
template int Stack<int>::top_S();
template char Stack<char>::top_S();

template <typename T>
void Stack<T>::printStack() {
    for (auto it=stack.begin();it!=stack.end();it++)
        std::cout<<*it<<' ';
    std::cout<<'\n';
}
template void Stack<int>::printStack();
template void Stack<char>::printStack();
