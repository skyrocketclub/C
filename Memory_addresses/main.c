#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    //we want to print out a memory address
    printf("age: %p\ngpa: %p\ngrade: %p ",&age,&gpa,&grade);
    return 0;
}
