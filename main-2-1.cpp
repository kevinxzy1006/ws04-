#include <iostream>
extern int *readNumber();
extern void hexDigits(int *numbers, int length);

int main()
{
    int *num = readNumber();
    int length = 10; // menually speciry the correct length
    hexDigits(num, length);

    // delete the dynamically allocated memory
    delete[] num;

    return 0;
}