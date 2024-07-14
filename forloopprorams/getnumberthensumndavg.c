// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

#include <stdio.h>
int main()

{
    int i, length, sum , data;
    float average; 
    length = 10;
    for(i = 1; i<=length; i++){
        printf("Number -%d :", i);
        scanf("%d", &data);
        sum+=data;
    }
    average = (sum/length);
    printf("The sum of %d numbers is: %d\n",length, sum );
    printf("The average of numbers is: %f", average);
}