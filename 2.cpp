// Created by Harsh Sharma on 9/10/2022.
//2. WAP using templates to sort a list of elements. Give user the option to perform sorting using
//Insertion sort, Bubble sort or Selection sort.
#include <iostream>

template<typename T>
void bubbleSort(T arr[], int size) {
    for (int i{0}; i < size; ++i) {
        for (int j{0}; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
        }
    }
}

template<typename T>
void insertionSort(T arr[], int size) {
    int j,key;
    for (int i=1;i<size;++i){
        j = i-1;
        key = arr[i];
        while (j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

template <typename T>
void selectionSort(T arr[],int size){
    for (int i =0;i<size;++i){
        int min = i;
        for (int j=i;j<size;++j){
            if (arr[j]<arr[min])
                min = j;
        }
        std::swap(arr[i],arr[min]);
    }
}


template <typename T>
void printArray(T arr[],int n){
    for (int i{0};i<n;++i)
        std::cout<<arr[i]<<' ';
    std::cout<<'\n';
}

int main(){
    while (true){
        std::cout<<"1: Bubble Sort\n2: Insertion Sort\n3: Selection Sort\n0: Enter 0 to exit.\n";
        int rp;
        std::cin>>rp;
        if (rp==0)break;
        std::cout<<"Enter Array Size: ";
        int n;
        std::cin>>n;
        int arr[n];
        std::cout<<"Enter array elements: ";
        for (int i{0};i<n;++i)
            std::cin>>arr[i];
        if (rp==1){
            bubbleSort(arr,n);
        }else if (rp==2){
            insertionSort(arr,n);
        }else if (rp==3){
            selectionSort(arr,n);
        }
        printArray(arr,n);
    }
    return 0;
}

