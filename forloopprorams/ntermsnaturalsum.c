// 3. Write a program in C to display n terms of natural numbers and their sum.
// Test Data : 7
// Expected Output :
// The first 7 natural number is :
// 1 2 3 4 5 6 7
// The Sum of Natural Number upto 7 terms : 28

#include <stdio.h>
int main()
{
    int i, sum, data;
    scanf("%d", &data);
    for (i = 1; i <= data; i++){
        printf("%d ", i);
        sum += i;
    }
    printf("\n");
    printf("The sum of natural number upto %d terms: %d", data, sum);
}