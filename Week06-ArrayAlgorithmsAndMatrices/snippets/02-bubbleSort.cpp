#include <iostream>

const std::size_t MAX_ARRAY_CAPACITY = 100;

void readArray(int array[], std::size_t size);

void printArray(const int array[], std::size_t size);

void bubbleSort(int array[], std::size_t size);

int main()
{
    std::size_t size;
    int numbers[MAX_ARRAY_CAPACITY];

    std::cin >> size;
    readArray(numbers, size);

    bubbleSort(numbers, size);

    printArray(numbers, size);

    return 0;
}

void readArray(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void printArray(const int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void bubbleSort(int array[], std::size_t size)
{
    for (std::size_t i = 0; i < size - 1; ++i)
    {
        bool swapped = false;
        for (std::size_t j = 0; j < size - 1 - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        // If no elements were swapped in the inner loop, the array is sorted
        if (!swapped) break;
    }
}
