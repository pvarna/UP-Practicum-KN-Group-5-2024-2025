#include <iostream>

const std::size_t MAX_ARRAY_CAPACITY = 100;

void readArray(int array[], std::size_t size);

void printArray(const int array[], std::size_t size);

bool binarySearch(const int array[], std::size_t size, int target);

int main()
{
    std::size_t size;
    int numbers[MAX_ARRAY_CAPACITY];
    int target;

    std::cin >> size;
    readArray(numbers, size);

    std::cin >> target;

    if (binarySearch(numbers, size, target)) 
    {
        std::cout << "Target found in the array." << std::endl;
    }
    else
    {
        std::cout << "Target not found in the array." << std::endl;
    }

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

bool binarySearch(const int array[], std::size_t size, int target)
{
    std::size_t left = 0;
    std::size_t right = size - 1;

    while (left <= right)
    {
        std::size_t mid = left + (right - left) / 2;

        if (array[mid] == target)
        {
            return true;
        }
        else if (array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return false;
}
