#include <stdio.h>
/*

Question and answer:-
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60

*/
int main()
{
    int n;
    printf("Enter the number for multiplication table:\n");
    scanf("%d", &n);
    printf("\nMultiplication table of %d is:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
