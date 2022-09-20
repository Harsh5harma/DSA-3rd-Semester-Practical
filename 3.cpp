// Created by Harsh Sharma on 9/11/2022.
//Implement Linked List using templates. Include functions for insertion, deletion and search of
//a number, reverse the list and concatenate two linked lists (include a function and also overload
//operator +).

#include <iostream>

template <class T>
class ListNode{
public:
    ListNode<T> *next;
    T data;
public:
    ListNode(T data, ListNode<T>* next=nullptr){
        this->data = data;
        this->next = next;
    }
    ListNode(){
        this->data=0;
        this->next=nullptr;
    }
};

template <class T>
class List{
private:
    ListNode<T> *head;
public:
    List(){
        head=nullptr;
    }

    void addNode(T data){
        if (head==nullptr){
            ListNode<T>* t=new ListNode<T>(data,nullptr);
            head = t;
        }else{
            ListNode<T>* t;
            for (t=head;t!=nullptr;t=t->next);
            t->next = new ListNode<T>(data,nullptr);
        }
    }

    void deleteNode(){
        if (head->next==nullptr){
            delete head;
            head = nullptr;
        }else if (head==nullptr)
            std::cout<<"List is empty.";
        else{
            ListNode<T> *t;
            t = head;
            head=head->next;
            delete t;
        }
    }

    ListNode<T>* searchNode(T data){
        if (head->data==data){
            return head;
        }else{
            ListNode<T>*t;
            for (t=head;t!=nullptr&&t->data!=data;t=t->next);
            std::cout<<t->data<<'\n';
            return t;
        }
    }

    void reverseList(){
        ListNode<T> *x=nullptr,*y;
        while(head){
            y=head->next;
            head->next=x;
            x=head;
            head=y;
        }
    }
    List<T>*  operator + (List<T>* l1){
        List<T>* l2;
        ListNode<T> t;
        for (t=l1->head;t!=nullptr;t=t->next);
        t->next=l2->head;
        return l1;
    }

    void printList(){
        for (ListNode<T>*t=head;t!=nullptr;t=t->next)
            std::cout<<t->data<<' ';
        std::cout<<'\n';
    }
};


int main(){
    List<float>* myList1;
    List<float>* myList2;
    for (int i{1};i<7;++i){
        myList1->addNode(40/7);
    }
    while (true){
        std::cout<<"1:Insertion\n2:Deletion\n3:Search Number\n4:Reverse List\n5:Concatenate two lists\n0:Exit\n";
        int rep;
        std::cin>>rep;
        switch(rep){
            case 0: return 0;
            case 1: {
                int x;
                std::cout<<"Enter element you want to insert: ";
                std::cin>>x;
                myList1->addNode(x);
                std::cout<<"Element Added.\n";
                myList1->printList();
            };break;
            case 2:{
                std::cout<<"Node was deleted.\n";
                myList1->deleteNode();
                myList1->printList();
            };break;
            case 3:{
                std::cout<<"Enter number: ";
                int x;
                std::cin>>x;
                myList1->searchNode(x);
            };break;
            case 4:{
                std::cout<<"Reversing List: ";
                myList1->reverseList();
                myList1->printList();
            };break;
            /*case 5:{
                std::cout<<"Enter list size:";
                int x;
                std::cin>>x;
                for (int i{0};i<x;++i){
                    myList2->addNode(x);
                }
                myList1+myList2;
                myList1->printList();
            }*/
        }
    }
}