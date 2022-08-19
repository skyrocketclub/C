#include <stdio.h>
#include <stdlib.h>

int main()
{
    //The open square bracket tells C that we want to store a bunch of characters
    char characterName[] = "John";
    int characterAge = 35;

    //%s -> We want to insert another string
    //%s -> a place holder...
    printf("There once was a man named %s\n", characterName);

    //%d -> place holder for a number
    printf("he was %d years old.\n",characterAge);

    characterAge = 30;
    printf("He really liked the name %s\n",characterName);
    printf("but did not like being %d.\n",characterAge);

    return 0;
}
