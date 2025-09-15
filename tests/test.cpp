
#define CATCH_CONFIG_MAIN
#include "reverse.hpp"
#include "catch2/catch.hpp"
 
#include <cstring> // for strlen, strcmp

template <typename T>
bool arrays_equal(const T* a, const T* b, std::size_t n) {
    for (std::size_t i = 0; i < n; ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

TEST_CASE("reverse_array works for int[]") {
    int arr[] = {1, 2, 3, 4};
    int expected[] = {4, 3, 2, 1};
    reverse_array<int>(arr, 4);
    REQUIRE(arrays_equal(arr, expected, 4));
}

TEST_CASE("reverse_array works for double[]") {
    double arr[] = {1.5, 2.5, 3.5, 4.5};
    double expected[] = {4.5, 3.5, 2.5, 1.5};
    reverse_array<double>(arr, 4);
    REQUIRE(arrays_equal(arr, expected, 4));
}

TEST_CASE("reverse_array works for char[] (non-C-string)") {
    char arr[] = {'E','C','E','3','5','1','4'};
    char expected[] = {'4','1','5','3','E','C','E'};
    reverse_array<char>(arr, 7);
    REQUIRE(arrays_equal(arr, expected, 7));
}

TEST_CASE("reverse_array works for C-string") {
    char word[] = "hello";
    char expected[] = "olleh";
    reverse_array<char>(word, std::strlen(word));
    REQUIRE(std::strcmp(word, expected) == 0);
}


TEST_CASE("reverse_array edge cases") {
    int empty[] = {};
    int single[] = {42};
    int empty_expected[] = {};
    int single_expected[] = {42};

    reverse_array<int>(empty, 0);
    reverse_array<int>(single, 1);

    REQUIRE(arrays_equal(empty, empty_expected, 0));
    REQUIRE(arrays_equal(single, single_expected, 1));
}