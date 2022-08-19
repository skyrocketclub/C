#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;

    while(guess != secretNumber){
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if(guess == secretNumber){
            printf("Congratulations!!!");
        }
    }

    return 0;
}
