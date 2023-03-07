/*
Arrays :
An array is a collection of data items of the same data type. And it is also known as subscript variable.
Items are stored at contiguous memory locations in Arrays.
It can also store the collection of derived data types such as pointers, structures etc.
The C Language places no limits on the number of dimensions in an array i.e. we can create any no. of dimension array E.g. 2d array, 3d array etc.
 

Most Commonly used dimensions of Array :

A one-dimensional array is like a list.
A two-dimensional array is like a table.
Some texts refer to one-dimensional arrays as vectors and two-dimensional arrays as matrices and use the general term Arrays when the no. of dimensions is unspecified or unimportant.

Why do we need Arrays ?
Code that use arrays for managing large no. of same type variables is more organized and readable.

Arrays allow us to create many variables by just a single line. It means there is no need to create or specify each and every variable.
 

Advantage of Arrays :
It is used to represent multiple data items of same type by using only single name.
Accessing an item in a given array is very fast.

Properties of Array :
Data in an array is stored in contiguous memory locations in RAM.
Each element of an array is of same size i.e. their data types are same so memory consumed by each is also same.
Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.

Index No. – It is the special type of no. which allows us to access variables of Arrays i.e. index no. provides a method to access each element of an array in a program.


Example for One-dimensional Array :

#include<stdio.h>

int main()
{
	//One dimensional array
	int marks[10], sum=0;
	printf("Enter marks of 10 students : \n\n");
	for (int i=0;i<=9,i++)
	{
	printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
	sum += marks[i]
	}

	int average = sum/10;
	printf("\nThe average marks of 10 students are %d", average);
	return 0;
}

Example for Two-Dimensional Array :

#include<stdio.h>
int main()
{

	//Two dimensional array
	int Matrice[3][3; 
	printf("This Program will print no. from 1-9 in matrice form : \n\n");
	for (int i=0;i<3,i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("Enter no. (1-9) : ");
			scanf("%d", &Matrice[i][j]);
		}
	}
	printf("\n\n\n");
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf("%d\t", Matrice[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n So that's the matrice form of no from 1-9");
	return 0;
}
 

Now let me tell you in brief about Arrays :
 

So as we already seen that array is a collection of data items and generally we use arrays when we have to make lots of variables at that time instead of creating each variable, so we can easily declare one array and can access it’s elements using it’s index no. and can do whatever we wish to do with that data.

So, that’s the use of arrays. And not only this we should have a good command over arrays because it is one of the most important topic in C language. Generally if we access each element of array at that time we use loops for fast calculations or operations.

And yeah one more thing i.e. you must have seen some memes on programmers i.e. programmers count from 0 not from 1. So the reason behind these memes is this only i.e. Arrays. As in arrays we do indexing from 0 onwards na that’s why these memes are created for programmers. :)

*/
#include <stdio.h>
int main()
{
    int marks[2][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}};
    // int j;
    // marks[0]=34;
    // marks[2]=34;
    // marks[3]=34;
    // marks[4]=34;
    // marks[5]=98;
    // printf("Marks of student 1 is %d", marks[5]);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array:\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ",marks[i][j]);
        }
        printf("\n");
        // scanf("%d", &marks[i]);
    }

    return 0;
}

// <hshshs></smsmsmsm>
