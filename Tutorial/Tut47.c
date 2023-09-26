#include <stdio.h>
#include <stdlib.h> //

int main()
{
    // //Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n",i);
    //    scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n",i, ptr[i]);
    // }

    //Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n ,  sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i, ptr[i]);
    }

    //Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr ,  n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n",i, ptr[i]);
    }

    free(ptr);
    
    
    return 0;
}


/*
MALLOC:
malloc()stands for memory allocation
It reservesablock of memory with the given amount of bytes.
The return value is a  void pointer to the allocated space
Therefore the void pointer needs to be casted to the appropriate type as per the requirements
However,if the space is insufficient,allocation of memory fails and it returnsaNULL pointer.
All the values at allocated memory are initialized to garbage values
  Syntax:
            (ptr-type*)malloc(size_in_bytes)ptr=

CALLOC
calloc()stands for contiguous allocation
It reservesnblocks of memory with the given amount of bytes.
The return value isavoid pointer to the allocated space
Therefore the void pointer needs to be casted to the appropriate type as per the requirements
However,if the space is insufficient,allocation of memory fails and it returnsaNULL pointer.
All the values at allocated memory are initialized to0
  Syntax:
           (ptr-type*)calloc(n,size_in_bytes)ptr=

REALLOC

realloc()stands for reallocation
 If the dynamically allocated memory is insufficient we can change the size of previously allocated memory using
 realloc()function
Syntax:
     ptr=(ptr-type*)realloc(ptr,new_size_in_bytes)

FREE
free()is used to free the allocated memory
If the dynamically allocated memory is not required anymore,we can free it using free function.
This will free the memory being used by the program in the heap
Syntax:
    free(ptr)
*/
