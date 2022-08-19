#include <stdio.h>
#include <stdlib.h>

int main()
{
    //fopen(filenmae, R (read)| W (write) | A(append))
    FILE * fpointer = fopen("employees.txt","a");
    fprintf(fpointer,"Jim, Salesman\nPam, Receptionist\nOscar, Accountant\n");
    fclose(fpointer);
    return 0;
}
