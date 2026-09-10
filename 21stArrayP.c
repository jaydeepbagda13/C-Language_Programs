#include <stdio.h>

int main()
{
    int n;
    printf("Enter term n: ");
    scanf("%d", &n);
    int a[n];
    int *ptr = a;
    int i;
    for (i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}