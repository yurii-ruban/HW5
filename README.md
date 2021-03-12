# Homework task 5

This project contains a binary and shared library with implemented custom functional.

## Implemented functions

- `void insertionSortAscending(int* arr, std::size_t size)` — sorts an array of integers with ascending order.
- `void selectionSortDescending(int* arr, std::size_t size)` — sorts an array of integers with descending order.
- `void reversePrintNumber(long number)` — prints numbers in reverse order.

- `int findMaxIdx(int* arr, int begin, int end)` — service function. Not included to public functionality of the library.
- `void swap(int& a, int& b)` — service function. Not included to public functionality of the library.

How to check
1. `cd` to root of the repository and `mkdir build`
2. `cmake -H. -Bbuild`
3. `./build/testapp`
