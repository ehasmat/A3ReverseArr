#pragma once 
#include <iostream>

// github breaking

template <typename T>
void reverse_array(T arr[], std::size_t n) {
    if (n == 0) {
    return;      //empty array (nothing to revers)
    }
    
    std::size_t i = 0;
    std::size_t j = n - 1;
    while (i < j) {
        T temp= arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
        ++i; 
        --j;
    }
}


template <typename T>
void print_array (const T arr[], std::size_t n) {
    std::cout << "[";
    for (std::size_t i = 0; i < n; ++i)
    {
        std::cout << arr[i];
        if (i != n-1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
}