#include <stdio.h>

int x = 10;   // Global variable

int main()
{
    int y = 20;   // Local variable

    printf("Global x = %d\n", x);
    printf("Local y = %d", y);

    return 0;
}