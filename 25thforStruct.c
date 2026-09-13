#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
};

int main()
{
    struct Student s = {"Jay", 21};

    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);

    return 0;
}