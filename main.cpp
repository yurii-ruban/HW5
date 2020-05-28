#include "algo.h"

void printArr(int* arr, std::size_t size)
{
    std::cout << "The array is: ";
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void checkSort()
{
    const size_t size = 10;
    int arr[size] = {-5, 41, 0, 12, 3,
                    1, 22, 0, 12, -3};

    printArr(arr, size);
    insertionSort(arr, size);
    printArr(arr,size);
}

void checkPrint()
{
    const long number = 123456789;
    reversePrintNumber(number);
}

int main(int argc, char** argv)
{
    checkSort();
    checkPrint();
    return 0;
}