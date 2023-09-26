/*We pass arrays toafunction when we need to passalist of values toagiven function.
•We can pass the arrays toafunction:
1. By declaring array asaparameter in the function
2. By declaringapointer in the function to hold the base address of the array

*/

#include <stdio.h>

int func1(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of at %d is %d\n", i, ptr[i]);
    }
    // array[0] = 248; if you change here it gets reflected  in main();
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 34;
}

void func3(int arr[][7])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[][7] = {{2, 4, 6, 8, 10, 12}, {1, 2, 3, 4, 5, 6}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}