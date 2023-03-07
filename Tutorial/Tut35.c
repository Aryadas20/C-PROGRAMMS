/*
Function Use
strcat() This function is used to concatenate or combine (two given strings)
strlen() This function is used to show length ofastring
strrev() This function is used to show reverse ofastring
strcpy() This function is used to copy one string into another
strcmp() This function is used to compare two given strings

Following are some commonly used string handling functions:

strcat( ):-
This function is used to concatenates the source string at the end of the target string. For example, “Hello” and “World” on concatenation would result into a string “HelloWorld”. Here is an example of strcat( ):

int main( ) { 
char  s[ ] = "Hello" ;
char  t[30] = "World" ;
strcat ( t, s ) ;
printf ( "String = %s", t ) ;
}
//Output: string = HelloWorld
 

 

strlen( ):-
This function is used to counts the number of characters present in a string. Its example is given below:

int main( ) { 
char  str[ ] = "Harry" ;
int  str_length;
str_length= strlen ( str ) ;
printf ( " length = %d", str_length );
}
//Output: length = 5 
strcpy( ):-
This function is used to copies the contents of one string into another. The base addresses of the source and target strings should be given to this function. Here is an example of strcpy( ):

int main( ) { 
char  s[ ] = "CodeWithHarry" ;
char  t[20] ;
strcpy ( t, s ) ;
printf ( "\n Source string = %s", s ) ;
printf ( "\n Target string = %s", t ) ; }
//And here is the output...
//Source string = CodeWithHarry
//Target string = CodeWithHarry
strcmp( ):-
This function is used to compares two strings to find out whether they are same or different. The strcmp() will compare two strings character by character until there is a mismatch or end of one of the strings is reached. If both of the strings are identical, strcmp( ) returns a value zero. If they are not identical, it will return the numeric difference between the ASCII values of the first non-matching pairs of characters. Here is a example of strcmp( ).

#include <stdio.h>
#include <string.h>
int main()
{
char string1[ ] = "Harry" ;
char string2[ ] = "Code" ;
int a;
a= strcmp ( string1, string2 ) ;
printf ("\n%d", a) ;
return 0;
}
//Output:5
 

 

strrev():-
This function is used to show the reverse of the string. Following are the example of strrev():

#include<stdio.h>
#include<string.h>
int main()
{
char str[50] = "1234";
printf("After reversing string is =%s",strrev(str));
return 0;}
//Output: After reversing string is = 4321
There are many other built-in string funtions like strlwr , strupr ,strcat , strdup and strset, these functions are also very useful in manipulating the strings. In today’s tutorial we have discussed only few of the string functions. You can explore more about string functions by searching it on the internet.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "arya";
    char s2[] = "ramu";
    char s3[54];

    printf("The strcmp  for s1,s2 returned %d", strcmp(s1,s2));   
    //  puts(strcat(s1,s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    //  printf("The reversed string s1 is: "); 
    //  puts(strrev(s1));
    //  printf("The reversed string s2 is: "); 
    //  puts(strrev(s2));
    
    //  s3 = strcat(s1, s2);
    // strcpy(s3, strcat(s1,s2));
    // puts(s3);
    // printf("The reversed string s2 is: "); 

    // allow users to enter 2 strings and then concanetate them by saying that  
    // str1 is a friend of str2;

return 0;
}