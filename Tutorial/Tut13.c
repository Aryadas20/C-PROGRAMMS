/*
How does the do-while loop work?
First, the body of the do-while loop is executed once. Only then, the test condition is evaluated.
If the test condition returns true, the set of instructions inside the body of the loop is executed again, and the test condition is evaluated.
This looping process goes on until the test condition becomes false.
If the test condition returns false, then the loop terminates.


*/

#include <stdio.h>
int main()
{
    /*
   int n, sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%i", &n);
        sum += n;
    } while (n != 0);
    printf("Sum is = %d", sum);
    */

// #include <stdio.h>

    // int main()
    // {
        int num, index = 0;
        printf("Enter a number\n");
        scanf("%d", &num);
        do
        {
            printf("%d\n", index + 1);
            index = index + 1;
        } while (index < num);

        return 0;
    // }

    return 0;
}