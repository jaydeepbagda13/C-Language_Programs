#include <stdio.h>

int main()
{
    // Data types
    int a = 10;
    float b = 5.5;
    char c = 'A';

    // Arithmetic operators
    int sum = a + 5;
    int dif = a - 5;
    int multi = a * 5;
    int div = a / 5;
    int remainder = a % 3;

    // Output
    printf("Integer a = %d\n", a);
    printf("Float b = %.2f\n", b);
    printf("Character c = %c\n", c);

    printf("\nArithmetic Operators:\n");
    printf("a + 5 = %d\n", sum);
    printf("a - 5 = %d\n", dif);
    printf("a * 5 = %d\n", multi);
    printf("a / 5 = %d\n", div);
    printf("a %% 3 = %d\n", remainder);

    return 0;
}
