#include <iostream>

// ask for user input and save it to the dynamically allocated memory
int *readNumber()
{
    int *numbers = new int[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Please enter a number: ";
        std::cin >> numbers[i];
    }
    return numbers;
}

// function to input the numbers and the user input
void printNumbers(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}