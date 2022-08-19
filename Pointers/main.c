#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    //in a pointer variable, the memory address of another variable is stored there
    int * pAge = &age;
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade ='A';
    char * aGrade = &grade;

    printf("age's memory address: %p\n",&age); //physical memory address
    printf("%d",*pAge);

    return 0;
}
