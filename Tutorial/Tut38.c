#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}std;
int main()
{
    typedef int* intpointer;
    intpointer a,b;
    // int *a,b;
    int c = 89;
    a  =&c;
    b = &c;

    // struct student s1, s2, s3;
    // s1.id = 34;
    // s2.id = 12;
    // printf(" value of s1's id  is  %d\n", s1.id);
    // printf(" value of s1's id  is  %d\n", s2.id);

    // typedef<previous_name> <alias>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1,l2,l3;
    // integer a = 4;
    // printf(" value of a is %d", a);
    return 0;
}