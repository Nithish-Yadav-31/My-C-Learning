// 6. Write a program in C to display the multiplication table for a given integer.
// Test Data :
// Input the number (Table to be calculated) : 15
// Expected Output :
// 15 X 1 = 15
// ...
// ...
// 15 X 10 = 150

#include <stdio.h>
int main()
{
    int i, data, product;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &data);
    for (i = 1; i<=10; i++){
        product = (data *i);
        printf("%d X %d = %d\n",data, i, product);
    }
}