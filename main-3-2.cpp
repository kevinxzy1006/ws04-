#include <iostream>

extern int *readNumber();
extern int *reverseArray(int *numbers1, int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main()
{
    int *num1 = readNumber();
    int length = 10; // menually speciry the correct length
    // create a reserved array of the origin array
    int *num2 = reverseArray(num1, length);

    // check if the reserved array equals to the origin array
    equalsArray(num1, num2, length);

    // delete the dynamically allocated memory
    delete[] num1;
    delete[] num2;

    return 0;
}