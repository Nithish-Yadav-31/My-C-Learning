#include <stdio.h>
#define LENGTH 10
#define WIDTH 5

int main()
{
    // Defining constants using the "const" keyword
    const int AGE = 17;
    int limit = 18;
    if (AGE>=limit){
        printf("The person is elidgible\n");
    }
    else{
        printf("The person is not elidgible\n");
    }

    int area;
    area = LENGTH*WIDTH;
    printf("The area of the Rectangle is %d\n", area);
}

