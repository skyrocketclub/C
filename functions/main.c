#include <stdio.h>
#include <stdlib.h>

double cube(double);

int main()
{
    printf("Top ");

    sayHi("Mike",cube(4.0));

    printf(" bottom");
    return 0;
}

void sayHi(char name[], double age){
    printf("Say Hi to %s, your are %f",name,age);
}

double cube(double num){
    double result = pow(num,3);
    return result;
}


