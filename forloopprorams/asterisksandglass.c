// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********


#include <stdio.h>

int main()

{
    int i, j, n;
    n = 5;
    for (i = n; i >=1; i--)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 1; j<=(2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i <=n; i++)
    {
        for(j = i; j < n; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

