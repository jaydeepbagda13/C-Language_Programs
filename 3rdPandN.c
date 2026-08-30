#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("The number is Positive");
    }
    else
    {
        printf("The number is Negative");
    }

    return 0;
}