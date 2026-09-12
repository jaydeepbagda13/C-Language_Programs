#include <stdio.h>

union Test
{
    int i;
    char ch;
};

int main()
{
    union Test t;

    t.i = 15;
    printf("Integer: %d\n", t.i);

    t.ch = 'A';
    printf("Character: %c\n", t.ch);

    return 0;
}