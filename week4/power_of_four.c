#include <stdio.h>



#define SIZE 32



void printNumberBinary(unsigned int number) {
    unsigned int array[SIZE] = { 0 };

    unsigned int counter = SIZE - 1;

    while (number > 0) {
        array[counter] = number % 2;

        number  = number    / 2;
        counter = counter   - 1;
    }

    for (unsigned int i = 0; i < SIZE; ++i) {
        printf("%u", array[i]);
    }

    putchar('\n');
}



int main() {
    unsigned int n = 0;

    printf("Enter the number N: ");

    if (scanf("%u", &n) != 1) {
        puts("Invalid Input!");

        return 1;
    }

    printNumberBinary(n);

    int conditionPower2 =   ((n & (n - 1))      == 0);
    int conditionPower4 =   ((n & 0x55555555)   != 0);


    if (conditionPower2 && conditionPower4) {
        printf("The number is a power of 4!\n");
    } else {
        printf("The number is not a power of 4!\n");
    }


    return 0;
}