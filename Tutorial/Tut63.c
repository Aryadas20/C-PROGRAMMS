/*
Task:-
Create a function in which you will pass the number as an argument and the function return whether the number is palindrome or not.

int isPalindrome(int num)
{
return 1;
}
Take the integer input from the user using scanf() statement. If the number is a palindrome, the message should display on the screen that “This number is a palindrome”.

This video is a part of the C programming series. If you have not watched the C programming tutorial until now, click on the link below to access the C programming tutorial.

https://www.codewithharry.com/videos/c-language-tutorials-in-hindi-1

Have you solved this problem? If yes, then it’s time to check your solution. Check the tutorial#65 for the solution.

If you like my work, then keep supporting and stay up to date with codewithharry. 

Code as described/written in the video
#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    return 1;
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    // Your task is to implement this function 
    if (isPalindrome(number)){
        printf("This number is a palindrome\n");
    }
    else{
        printf("This number is not a palindrome\n");
    }

    return 0;
}
*/