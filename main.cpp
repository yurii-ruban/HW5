#include "algo.h"

enum sortingStrategy{ASCENDING, DESCENDING};

void printArr(int* arr, std::size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void checkSort(sortingStrategy s)
{
    const size_t size = 10;
    int arr[size] = {-5, 41, 0, 12, 3,
                    1, 22, 0, 12, -3};

    std::cout << "The array is: ";
    printArr(arr, size);

    if(s == sortingStrategy::ASCENDING)
    {
        insertionSortAscending(arr, size);
    }
    else
    {
        selectionSortDescending(arr, size);
    }    

    std::cout << "The sorted array is: ";
    printArr(arr,size);
}

void checkPrint()
{
    const long number = 123456789;
    std::cout << "Original number: " << number << std::endl;
    std::cout << "Reversed number: ";
    reversePrintNumber(number);
}

int main(int argc, char** argv)
{
    checkSort(sortingStrategy::ASCENDING);
    checkPrint();
    return 0;
}