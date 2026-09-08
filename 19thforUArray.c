#include <stdio.h>

int main()
{
    int a[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    a[1][1] = 100;

    printf("Updated value = %d", a[1][1]);

    return 0;
}