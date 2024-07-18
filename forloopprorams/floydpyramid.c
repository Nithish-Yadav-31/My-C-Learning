
//    1
//   2 3
//  4 5 6
// 7 8 9 10

#include <stdio.h>

int main()
{
    int i, j, n, num;
    num = 1;
    printf("Enter desired number of rows : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = i; j < n; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
