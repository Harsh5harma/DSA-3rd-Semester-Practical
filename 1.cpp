// Created by Harsh Sharma on 9/10/2022.
//1. Write a program to search an element from a list. Give user the option to perform Linear or
//Binary search. Use Template functions.

#include <iostream>

template<typename T>
int linearSearch(T key, T arr[], int size) {
    for (int i{0}; i < size; ++i) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

template<typename T>
int binarySearch(T key, T arr[], int left, int right) {
    if (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key) {
            return binarySearch(key, arr, left, mid - 1);
        } else if (arr[mid] < key)
            return binarySearch(key, arr, mid + 1, right);
    }
    return -1;
}

int main() {
    int response = 0;
    while (true) {

        std::cout << "1: Linear Search\n2: Binary Search\nPress 0 to exit\n";
        std::cout << "Enter response: ";
        std::cin >> response;
        if (response == 0)break;
        int pos;
        std::cout << "Hey Enter the array size: ";
        int n;
        std::cin >> n;
        int arr[n];
        std::cout << "Enter the array elements: ";
        for (int i{0}; i < n; ++i)
            std::cin >> arr[i];
        std::cout << "Enter the key you want to search: ";
        int key;
        std::cin >> key;
        if (response == 1) {
            pos = linearSearch(key, arr, n);
            if (pos != -1)
                std::cout << "Key found at position: " << pos << '\n';
            else
                std::cout << "Key Not found.\n";
        } else if (response == 2) {
            pos = binarySearch(key, arr, 0, n);
            if (pos != -1)
                std::cout << "Key found at position: " << pos << '\n';
            else
                std::cout << "Key Not found.\n";
        }

    }
    return 0;
}