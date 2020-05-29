#include "algo.h"

/* Service function. Used for selection sort.
   Find the index of MAX element in array of integers */
int findMaxIdx(int* arr, int begin, int end)
{
    int maxIdx = begin;
    int max = arr[begin];

    for(int i = begin + 1; i < end; ++i)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            maxIdx = i;
        }
    }

    return maxIdx;
}

/* Service function. Used for all of the sorts based on comparation.
   Swaps two integers */
void swap(int& a, int& b)
{
    const int c = a;
    a = b;
    b = c;
}

/* Sorts an array of integers in ascend order */
void insertionSortAscending(int* arr, std::size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = i; arr[j] < arr[j-1] && j > 0; --j)
        {
            swap(arr[j], arr[j-1]);
        }
    }
}

/* Sorts an array of integers in descend order */
void selectionSortDescending(int* arr, std::size_t size)
{
    int start = 0;
    const int end = size;

    for(int i = start; i < size; ++i)
    {
        int maxIdx = findMaxIdx(arr, start, end);
        swap(arr[maxIdx], arr[start++]);
    }
}

/* Prints the number in reverse order 
   Interprets negative numbers as a set of negative components */ 
void reversePrintNumber(long number)
{
    if(!number)
    {
        return;
    }

    std::cout << number % LAST_DIGIT_MANIPULATOR << " ";

    reversePrintNumber(number / LAST_DIGIT_MANIPULATOR);
}