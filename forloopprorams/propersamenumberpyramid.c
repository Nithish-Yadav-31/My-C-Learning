//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

#include <stdio.h>

int main()

{
    int i, j, n;
    printf("Enter your desired number of rows : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = i; j < n; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

