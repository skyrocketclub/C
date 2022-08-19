#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "w");
    fprintf(fpointer,"Jim, Salesman");
    fclose(fpointer);

    fpointer = fopen("employees.txt", "r");

    fgets(line,255,(FILE*)fpointer);
    fgets(line,255,fpointer);
    printf("%s", line);

    fclose(fpointer);
    return 0;
}
