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
    std::cout << "Numbers read successfully." << std::endl;

    return numbers;
}

// use function to check if the two arrays are equal
bool equalsArray(int *numbers1, int *numbers2, int length)
{
    if (length > 0)
    {
        for (int i = 0; i < length; i++)
        {
            if (numbers1[i] != numbers2[i])
            {
                std::cout << "false" << std::endl;
                return false;
            }
        }
        std::cout << "true" << std::endl;
        return true;
    }
    std::cout << "false" << std::endl;
    return false;
}
