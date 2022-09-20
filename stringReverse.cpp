#include <iostream>
#include "stack.h"
int main(){
    std::cout<<"Enter size of string.";
    int n;
    std::cin>>n;
    char str[n+1];
    std::cout<<"Enter string: ";
    for (int i{0};i<n;++i)
        std::cin>>str[i];
    Stack<char> strHolder(n);
    for (int i{0};i<n;++i){
        strHolder.push(str[i]);
    }
    strHolder.printStack();
    for (int i{0};i<n;++i){
        str[i]=strHolder.pop();
        std::cout<<str[i]<<' ';
    }
}