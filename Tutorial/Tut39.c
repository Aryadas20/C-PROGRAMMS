#include<stdio.h>
#include<string.h>


struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};  
int main()
{
    struct student s1;
    s1.id = 34;
    s1.marks = 99;
    s1.fav_char = 'u';
    strcpy(s1.name, "Harry");

    printf("The id is %d \n", s1.id);  
    printf("The marks is %d \n", s1.marks );  
    printf("The fav_char is %d \n", s1.fav_char);  
    printf("The name is %d \n", s1.name);  
return 0;
}