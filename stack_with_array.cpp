
#include "Stack.h"

int main(){
    Stack<int> myS(10);
    for (int i{1};i<=10;++i)
        myS.push(i);
    myS.printStack();
    myS.pop();
    myS.pop();
    myS.top_S();
    myS.printStack();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.pop();
    myS.printStack();
}