#include <iostream>
extern int *readNumber();
extern void printNumbers(int *numbers, int length);

int main()
{
    int *num = readNumber();
    int length = 10; // menually speciry the correct length
    printNumbers(num, length);

    // delete the dynamically allocated memory
    delete[] num;

    return 0;
}