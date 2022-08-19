#include <stdio.h>
#include <stdlib.h>

struct Student{
    //Specify what data makes up a student
    char name[50];
    char major[50];
    int age;
    double gpa;
};
int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.7;
    //A String is an array of characters
    //student1.name = "Jim" will not work in c
    strcpy(student1.name,"Jim");
    strcpy(student1.major,"Arts");

    printf("%s is enrolled for a major in %s, he is %d years old and his gpa is %f",student1.name,student1.major,student1.age,student1.gpa);
    return 0;
}
