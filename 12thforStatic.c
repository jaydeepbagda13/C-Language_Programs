#include <stdio.h>

void count()
{
    static int x = 0;

    x++;

    printf("%d\n", x);
}

int main()
{
     int i;
     int n;

    printf("Enter term n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        count();
    }

    return 0;
}