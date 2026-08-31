#include <stdio.h>

int main()
{
    printf("Output of function for learn about Break: \n");
    bre();
    printf("\nOutput of function for learn about Continue: \n");
    cont();
    printf("\nOutput of function for learn about Return: \n");
    ret();
    printf("\nOutput of function for learn about GoTo: \n");
    gt();
}

int bre()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}


int cont()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}


int ret()
{
    printf("Hello\n");

    return 0;

    printf("World");
}


int gt()
{
    printf("Start\n");

    goto end;

    printf("This will not print\n");

end:
    printf("End\n");

    return 0;
}