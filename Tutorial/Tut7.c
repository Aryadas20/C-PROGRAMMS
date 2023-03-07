#include<stdio.h>

int main()
{
    /* code */
    int a, b;
    a = 2;
    b = 3;

    printf("a & b = %d\n", a&b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a / b = %d\n", a/b);

    return 0;
}


// “Special symbols that are used to perform actions or operations are known as operators.”
/*
Arithmetic operators:
Arithmetic operators are used to perform mathematical operations such as addition, 
subtraction etc. Few of the simple arithmetic operators are :
+ Addition
− Subtraction
* Multiplication
/ Division
% Modulus
Example:-
   int a = 2;
   int b = 3;
   printf("a + b = %d\n", a+b);


Relational operators:-
Relational operators are used for the comparison between two or more numbers. Same as Java, 
C also has six relational operators and their return value is in Boolean i.e. either True or False (1 or 0).

>   Greater than
<   Less than
>=  Greater than or equal to
<=  Less than or equal to
==  Is equal to
!=  Is not equal to
Example:-

    int a = 2;
    int b = 2;
    printf("a == b = %d\n", a==b);
The output is 1 i.e. True.

If we change the value of a or b the value will be false or 0.

    int a = 1;
    int b = 2;
    printf("a == b = %d\n", a==b);


Logical Operators:
There are three logical operators i.e. AND, OR and NOT. 
They can be used to compare Boolean values but are mostly used to compare conditions to see whether 
they are satisfying or not. 

AND: it returns true when both operators are true or 1.
OR: it returns true when either operator is true or 1.
Not: it is used to reverse the logical state of the operand

Symbol  Operator
&&      AND operator
||      OR Operator
!       NOT Operator

    int a = 1;
    int b = 0;
    printf("a or b = %d\n", a||b);

    Here the output is:
    a or b = 1
Let’s see what happens if both the values are zero

    int a = 0;
    int b = 0;
    printf("a or b = %d\n", a||b);
the output is:
a or b = 0


Bitwise Operators:
To perform bit level operations, bitwise operators are used. 
They convert the values we provide to them in binary format and then compare them to provide us the results.

&  Bitwise AND
|  Bitwise OR
^  Bitwise XOR
~  Bitwise complement
<< Shift left
>> Shift right


Assignment Operators:
Assignment operators are used to assign values. 
They are going to be used in each and every one of our program.

Equal to (=) is the assignment operator here, assigning 0 to a and 1 to b.

=    Assigns values from right side operands to left side operand
+=   It adds the right operand to the left operand and assign the result to the left operand.
-=	 It subtracts the right operand from the left operand and assigns the result to the left operand.
*=   It multiplies the right operand with the left operand and assigns the result to the left operand.
/=    It divides the left operand with the right operand and assigns the result to the left operand.

Examples:-
    int a = 0;
    int b = 1;
*/