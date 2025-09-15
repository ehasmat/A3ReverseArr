
#pragma once

#include "reverse.ipp"
#include <iostream>
#include <cstddef> //size_t



template <typename T>
void print_array (const T arr[], std::size_t n);

template <typename T>
void reverse_array(const T arr[], std::size_t n);