#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = a;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}