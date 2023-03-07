#include<stdio.h>

int main()
{
    int i = 0;
    while (i<54)
    {
        printf("%d\n", i);
        i = i+1;
    }

    return 0;
}

/*
Example:-
#include<stdio.h>  
 intmain(){    
 inti=0;      
 while(i<=5){      
printf("%d \n",i);      
i++;      
}  
 return0;  
}    
Explanation of the above program:-
We have initialized a variable i with value 0. This code will print from 0 to 4; hence the variable is initialized with value 0. 
In a while loop, we have provided a condition (i<=5), which means the loop will execute the body until the value of i becomes 5. After that, the loop will be terminated.
In the body of a loop, we have a print function to print our number and an increment operation ( i++) to increment the value per execution of a loop. This process will continue until the value becomes 5 and then it will print the number and then terminate the loop.
Properties of while loop:



Following are some properties of while loop.

A conditional expression written in the brackets of while is used to check the condition. The Set of statements defined inside the while loop will execute until the given condition returns false.
The condition will return 0 if it is true. The condition will be false if it returns any nonzero number.
In the while loop, we cannot execute the loop until we do not specify the condition expression.
It is possible to execute a while loop without any statements. This will give no error. 
We can have multiple conditional expressions in a while loop.
 Braces are optional if the loop body contains only one statement.

*/