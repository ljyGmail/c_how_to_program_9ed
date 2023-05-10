#include <stdio.h>

int main(void)
{
    int integer1 = 0; // will hold first number user enters
    int integer2 = 0; // will hold second number user enters

    printf("Enter first integer: "); // prompt
    scanf("%d", &integer1);          // read an integer

    printf("Enter second integer: "); // prompt
    scanf("%d", &integer2);           // read an integer

    int sum = 0; // variable in which sum will be stored
    sum = integer1 + integer2;

    printf("Sum is %d\n", sum); // print sum
}