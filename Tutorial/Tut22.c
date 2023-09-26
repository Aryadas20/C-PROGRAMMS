/*
kms to miles
inches to foot 
cms to inches 
pound to kgs
*/

#include<stdio.h>
void main()
{   int n,i;
    printf("enter the quantity in which you want to conver\n");
    printf("1. kilometres to meters\n");
    printf("2.meter to centimetres\n");
    printf("3.foot into inch\n");

    printf("enter the number of conversion factor\n");
    scanf("%f",&n);
    if(n==1)
    {
        printf("enter the value of kilometres\n");
        scanf("%f",&i);
        printf("%f kg =%f m",i,i*1000);

    }
    else if(n==2)
    {
        printf("enter the value of meter\n ");
        scanf("%f",&i);
        printf("%f m = %f cm",i,i*1000);
    }
    else if(n==3)
    {
        printf("enter the value of foot\n ");
        scanf("%f",&i);
        printf("%f foot = %f inches",i,i*12);

    }

}