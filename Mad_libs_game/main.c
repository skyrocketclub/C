#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s",color);
     printf("Enter a Plural noun: ");
    scanf("%s",pluralNoun);
    fflush(stdin);
     printf("Enter a celebrity first and last name: ");
   scanf("%s",celebrityF);
   scanf("%s",celebrityL);
   //fgets(celebrity,20,stdin);

    printf("Roses are %s\n",color);
    printf("%s are blue\n",pluralNoun);
    printf("I love %s %s\n",celebrityF,celebrityL);

    return 0;
}
