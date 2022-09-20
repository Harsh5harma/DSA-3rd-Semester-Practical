//
// Created by Harsh Sharma on 9/20/2022.
//

#ifndef DSA_3RDSEMP_RACTICAL_STACK_H
#define DSA_3RDSEMP_RACTICAL_STACK_H
#include <list>
template <class T>
class Stack {
private:
    int size=0;
    int top=-1;
    std::list<T> stack;
public:
    Stack(int);
    void push(T val);
    bool isEmpty();
    T pop();
    T top_S();
    void printStack();
};


#endif //DSA_3RDSEMP_RACTICAL_STACK_H
