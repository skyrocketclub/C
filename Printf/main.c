#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fav_num = 90;
    char my_char = 'c';
    printf("Hello\"World\n");
    //using format specifiers
     printf("My favorite %s is %d\n","number",fav_num);
     printf("My favorite %s is %f\n","number",500.9854);
     printf("My favorite %s is %c","character",my_char);
    return 0;
}
