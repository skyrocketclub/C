#include <stdio.h>
#include <stdlib.h>

int main()
{
    //we have an array of three elements which are arrays with 2 elements each
    int nums[3][2] = {
                    {1,2},
                    {3,4},
                    {5,6}
                    };
   // printf("%d",nums[1][0]);
   int i,j;
   for(int i= 0; i<3; i++){
    for(int j = 0; j<2; j++){
        printf("%d ",nums[i][j]);
    }
    printf("\n");
   }
    return 0;
}
