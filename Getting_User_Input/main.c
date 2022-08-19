#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
    double gpa;
    char grade;
    char name[20]; //whenever we are creating a string of characters
    // or char name [] = ""; give a name or a size...

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You are %d years old\n\n",age);

    printf("Enter your gpa: ");
    scanf("%lf",&gpa);
    printf("Your gpa is %f .\n\n",gpa);

    printf("Enter your grade: ");
    scanf(" %c",&grade);
    fflush(stdin);
    printf("Your grade is %c .\n\n",grade);

    printf("Enter your name: ");
    //scanf("%s",name); % not needed
    fgets(name,20,stdin);
    printf("Your name is %s",name);

    return 0;
}
