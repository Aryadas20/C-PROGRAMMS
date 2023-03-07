// synatx :
/*switch ( integer expression )
{
case value 1 :
do this ;

case value 2 :
 do this ;

case value 3 :
do this ;

default :
do this ;
 }

Why do we need a Switch case?
There is one problem with the if statement: the program's complexity increases whenever
the number of if statements increases. If we use multiple if-else statements in the program,
the code might become difficult to read and comprehend. Sometimes it also even confuses the
developer whom himself wrote the program. Using the switch statement is the solution of this problem.


 Rules for Switch Statement -:
The test expression of Switch must be an int or char.
The value of the case should be an integer or character.
Cases should be inside the switch statement.
Using the break keyword in the switch statement is not necessary.
The case label values inside the switch should be unique.


Nested Switch in C:
We can also use nested switch statements i.e., switch inside another switch. Also, the case constants of the inner and outer switch may have common values without any conflicts.

the syntax of the nested switch is:

switch(expression 1)
 {
  Case 1:
    printf(“Switch Statement 1”);

switch(expression 2)
{
  Case 1:
  printf(“Switch Statement 2”);
  Break;

  Case 2:
  Do this;
}
break;

 Case 2:
 Do this;
}
*/

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
        case 3:
            printf("The age is 3\n");
            switch (marks)
            {
                case 45:
                    printf("Your marks are 45");
                    break;
            
                default:
                    printf("your marks are not 45");
            }
            break;

        case 13:
            printf("The age is 13\n");
            break;

        case 23:
            printf("The age is 23\n");
            break;

        default:
            printf("Age is not 3, 13 or 23\n");
        
    }


    return 0;
}

