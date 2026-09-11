#include <stdio.h>

int main() {
    char name[10] = "vijay";   // string initialization

    printf("Name: %s\n", name);   // prints the string
    printf("First character: %c\n", name[0]); // prints 'v'
    printf("ASCII of first character: %d\n", name[0]); // prints ASCII value of 'v'

    return 0;
}
