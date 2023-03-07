#include <stdio.h>
// int sum(int a, int b);
void printstar(int n)
{
    for(int i = 0; i < n; i++)
    {
         printf("%c", '*');
    } 
}


int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    // a = 9;
    // b = 87;
    // c = sum(a, b);
    // printstar(7);
    c = takenumber();
    // printf("The sum is %d \n", c);
    printf("The number entered is %d \n", c);
    return 0;
}


// int sum(int a, int b)
// {
//     return a + b;
// }



// int main()
/*Functions :
1).Functions are used to divide a large C program into smaller pieces.
2).Function can be called multiple or several times to provide reusability and modularity to the C program.
3).Functions are also called as procedure or subroutines.
4).It is a piece of code to accomplish certain operation.


Now let’s understand in simple terms what function is?
Function is nothing but a group of code put together and given a name and it can be called anytime without writing the whole code again and again in a program.

I know its syntax is bit difficult to understand but don’t worry after reading this whole information about Functions you will know each and every term or thing related to Functions.


Avantages of Functions :
We can avoid rewriting same logic or code through functions.
We can divide the work among programmers using functions.
We can easily debug or can find bugs in any program using functions.


Function Aspects :
There are 3 aspects of function :-
1).Declaration
2).Definition
3).Call


A function is declared to tell the compiler about its existence.
A function is defined to get some task done. (It means when we define function we write whole code of that function. In this actual implementation of function is done.)
A function is called in order to be used.


Types of Functions :
Library Functions – These are pre-defined functions in C Language. These are the functions which are included in C header files.
E.g. printf(), scanf() etc.

User defined Functions – Functions created by programmer to reduce complexity of a program i.e. these are the functions which are created by user or programmer.
NOTE:-
Every C Program must contain one function i.e. main() function as execution of every C program starts from main() function.
Ways to define a Function :
There are 4 ways in which we can define any C Function and these are :

Without arguments and without return value.
Without arguments and with return value.
With arguments and without return value.
With arguments and with return value.

-The basic syntax of a C function is written as follows:
return_type function_name(data_type parameterl, data_type parameter2, .)}{
// code to be executed



// C:\VS STUDIO CODES\C PROGRAMMS\Tut19.c

1.Without arguments and without return value : In this function we don’t have to give any value to the function (argument/parameters) and even don’t have to take any value from it in return.



//No Argument and No Return Value
void Star_pattern()
{
    int a;
    printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.
    scanf("%d", &a );
    for (int i = 0; i<a; i++)
    {
        printf("*");
    }
}

2.Without arguments and with return value : In these type of functions we don’t have to give any value or argument to function but in return we get something from it i.e. some value.

// Without arguments and with return value :
int Sum(); /* Declaration of Function */

/*Other Code*/
// int Sum()
// {

// 	int x,y,z;
// 	printf("Enter no. 1 : \t");
// 	scanf("%d",&x);
// 	printf("\nEnter no. 2 : \t");
// 	scanf("%d",&y );
// 	z=x+y;
// 	return z;
// }

// 3.With arguments and without return value : In these type of function we give arguments or parameters to function but we don’t get any value from it in return.

//  // With arguments and without return value :
//  void Product(int x ,int y ); /* Declaration of Function */

// 			// Other Code
// Product(5,4) /* Calling Product Function in main() */

// void Product(int a,int b)
// {
// 	int Multiplication;
// 	Multiplication = a*b ; /* Definition of Function */
// 	printf("The Product is %d\n\n",Multiplication);
// }

// 4.With arguments and with return value : In these functions we give arguments to function and in return we also get some value from it.

// // With arguments and with return value :
// float Percentage(int x,int y); // Declaration of Function
// /*Code*/ int x;
// x = Percentage(80,95); // Calling Function
//  /*Code*/
// float Percentage(int x,int y)
// {
// 	float perct;
// 	perct = ((x+y)/200.0)*100.0; // Definition of Function
// 	return perct;
// }
