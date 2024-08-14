#include <iostream>
extern int *readNumber();
extern int secondSmallestSum(int *numbers, int length);

int main()
{
    int *num = readNumber();
    int length = 10; // menually speciry the correct length
    // function secondSmallestSum
    int result = secondSmallestSum(num, length);

    std::cout << "The second smallest sum is: " << result << std::endl;

    // delete the dynamically allocated memory
    delete[] num;

    return 0;
}