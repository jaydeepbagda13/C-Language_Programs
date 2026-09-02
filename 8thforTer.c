#include <stdio.h>

int main()
{
    printf("Output of function to find odd or even: \n");
    oore();
    printf("\nOutput of function to find greater number: \n");
    gnum();
}

int oore()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    number % 2 == 0 ? printf("Even\n") : printf("Odd\n");

    return 0;
}

#include <stdio.h>

int gnum()
{
    int a, b, greater;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    greater = (a > b) ? a : b;

    printf("Greater number = %d", greater);

    return 0;
}