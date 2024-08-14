#include <iostream>
#include <vector>
#include <algorithm>

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

int secondSmallestSum(int *numbers, int length)
{
    std::vector<int> subArraySums;

    for (int i = 0; i < length; ++i)
    {
        int currentSum = 0;
        for (int j = i; j < length; ++j)
        {
            currentSum += numbers[j];
            subArraySums.push_back(currentSum);
        }
    }

    // sort all the arrays
    std::sort(subArraySums.begin(), subArraySums.end());

    return subArraySums[1];
}