#include <iostream>

extern int *readNumber();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main()
{
    int *num1 = readNumber();
    int *num2 = readNumber();
    int length = 10; // menually speciry the correct length
    equalsArray(num1, num2, length);

    // delete the dynamically allocated memory
    delete[] num1;
    delete[] num2;

    return 0;
}