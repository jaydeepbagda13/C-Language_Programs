#include <stdio.h>

int main()
{
    // Data types
    int a = 10;
    float b = 5.5;
    char c = 'A';

    // Arithmetic operators
    int sum = a + 5;
    int difference = a - 5;
    int multiplication = a * 5;
    int division = a / 5;
    int remainder = a % 3;

    // Output
    printf("Integer a = %d\n", a);
    printf("Float b = %.2f\n", b);
    printf("Character c = %c\n", c);

    printf("\nArithmetic Operators:\n");
    printf("a + 5 = %d\n", sum);
    printf("a - 5 = %d\n", difference);
    printf("a * 5 = %d\n", multiplication);
    printf("a / 5 = %d\n", division);
    printf("a %% 3 = %d\n", remainder);

    return 0;
}