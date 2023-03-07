/*
The syntax of the for loop is:
for ( initialize counter ; test counter ; increment/decrement counter)
 {
 //set of statements
 }
// initialize counter: It will initialize the loop counter value, i.e., i=0.
test counter: It verifies whether the condition is true.
Increment/decrement counter: Incrementing or decrementing the counter.
// Set of statements: Execute the set of statements.

//  i++ = i+1;


// #include <stdio.h>

// int main()
// {
//     int num = 10;
//     int i;
//     for(i = 0; i < num; i++) { 
//     printf("%d ",i);
// }
//     return 0;
// };
*/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i , j = 0;
    for(i = 0; i<5; i++, j++)
    {
       printf("%d %d\n", i,j);
    //    j++;
    }
    
    return 0;
}

