// *****
// *   *
// *****


#include <stdio.h>

int main()
{
    int i, j, l,b;
    l = 5;
    b = 3;
    for (i = 1; i<=b; i++)
    {
        for(j = 1; j <= l; j++)
        {
            if(i == 1 || i == b || j == 1 || j == l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}