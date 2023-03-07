/*
Format specifier in C:-
The format specifier in C programming is used for input and output purposes. Through this, we tell
the compiler what type of variable we are using for input using scanf() or printing using printf().
Some examples are %d, %c, %f, etc.
The %c and %d used in the printf() are called format specifiers. Format specifier tells printf() to
print the value, for %c, a character will printed, and for %d, a decimal will be printed. Here is a list of
format specifiers.
Format Specifier
Туре
%c  Used to print the character(printf("\n The value of character is %c", c);)
%d  Used to print the signed integer(printf("\n The value of integer is %d", d);)
%f  Used to print the float values(printf("The value of float is %f", f);)
%i  Used to print the unsigned integer
%1  Used to long integer
%lf Used to print the double integer
   Used to print the unsigned int or
%lu unsigned long integer
%s  Used to print the String(printf("\n The value of string is %s", s);)
%u  Used to print the unsigned integer
*/
//  CONSTANTS IN C
// ■ A constant is a value or variable that can't be changed in the program, for example: 15, 23, 'a', 3.4,
//  "code with
// harry" etc.
// ■ There are two ways to define constant in C programming.
// ■ const keyword
// ▪ #define preprocessor
// ■ Lets see both of them in the IDE
/*
A constant is a value or variable that cant be changed in the program for example 15, 23, 'a', 3.4., 
"code with harry", 
There are 2 ways of defining constant in c programing 
const keyword 
#define preprocessor

Escape sequence:-
 An escape sequence in C programming language is a sequence of characters.
  It doesn't represent itself when used inside string literal or character.
It is composed of two or more characters starting with backslash \. For example: \n represents new line.

/xhh - hexadecimal
/o null
*/
#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 10;
    const float b = 7.333;  
    // const float b = 7.333;
    // b = 7.22; wrong since b is a constant;
    // printf("The value of a is %d and the value of b is %f\n", a, b);
    // printf("%-18.4f space",b);
    // PI= 7.33; wrong since b is a constant;
    printf("%f", PI);
    return 0;
}