#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result= 0;
    if(num1 > num2 && num1 > num3){
        result = num1;
    }else if(num2 > num1 && num2 > num3){
        result = num2;
    }else{
        result = num3;
    }
    return result;
}

int main()
{
    int a=2, b=2, c = 45;
    printf("The bigger number between %d, %d and %d is %d",a,b,c,max(a,b,c));
    return 0;
}
