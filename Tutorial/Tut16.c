/*
// Break Statement ;//
Break statement is used to break the loop or switch case statements execution and brings the control to the next block of code after loop or switch case.
Break statements are used to bring the program control out of the loop.
The break statement is used inside loops or switch statement in C Language.

syntax:-
#include<stdio.h> 
int main() 
{ 
	int i,age; 
	for(i = 0 ; i < 5 ; i++) \
	{ 

		printf("Iteration time = %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 
		if (age>10) 
		{ 
			break; // Checking Break Statement 
		} 
		// if(age<10) 
		// { continue; } 
		// printf("Hey Guys\n"); 
		// printf("This code is printed coz if condition is not satisfied. \n"); 
		// printf("Checking Continue Statement\n\n"); // Checking Continue Statement 
	} return 0; 
} 

Continue Statement :
The continue statement is used inside loops in C Language. When a continue statement is encountered inside the loop, control jumps to the beginning of the loop for next iteration, skipping the execution of statements inside the body of loop after continue statement.
It is used to bring the control to the next iteration of the loop.
The continue statement skips some code inside the loop and continues with the next iteration.
It is mainly used for a condition so that we can skip some lines of code for a particular condition.
It forces next iteration in loop i.e. as break terminates the loop but continue forces the next iteration of the loop.

syntax:-
#include<stdio.h> 
int main() 
{ 
	int i,age; 
	// for(i = 0 ; <  ++) 
	{ 
		// printf("Iteration time %d\nEnter Your Age : ",i ); 
		// scan“"%d",& ); 
		// if (age>10) 
		// { 
		// break; // Checking Break Statement 
		// } 
		if(age<10) 
		{ continue; }
		printf("Hey Guys\n"); 
		printf("This code is printed coz if condition is not satisfied. \n"); 
		printf("Checking Continue Statement\n\n"); // Checking Continue Statement 
	} 
	return 0; 
} 

*/



#include <stdio.h>

int main()
{
    // printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        if (age<10)
        {
            break;
        }
        // if (age<10)
        // {
        //     continue;
        // }
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("Harry is a good boy");
        
    }
    
    return 0;
}

