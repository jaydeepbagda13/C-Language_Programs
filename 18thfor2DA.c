#include <stdio.h>

int main()
{
    int a[2][3] = {
        {10, 9, 18},
        {13, 21, 33}
    };

    printf("%d\n", a[0][0]);
    printf("%d\n", a[0][1]);
    printf("%d\n", a[1][0]);
    printf("%d\n", a[1][2]);

    return 0;
}