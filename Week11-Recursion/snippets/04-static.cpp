#include <iostream>

void counterFunction() 
{
    static int count = 0; // Static variable retains its value across function calls
    ++count;
    std::cout << "Function called " << count << " times." << std::endl;
}

int factorial(int n) 
{
    static int depth = 0; // Tracks recursion depth
    ++depth;
    std::cout << "Recursion depth: " << depth << ", n = " << n << std::endl;

    if (n <= 1) {
        return 1;
    }

    int result = n * factorial(n - 1);

    return result;
}

int main() 
{
    counterFunction(); // Output: Function called 1 times.
    counterFunction(); // Output: Function called 2 times.
    counterFunction(); // Output: Function called 3 times.

    int number = 5;
    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;

    return 0;
}
