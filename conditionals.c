#include <stdio.h>

int main()
{
    int age1 = 18;
    int age2 = 17;
    int age3 = 20;

    int limit = 18;

    // Checking only single conditions
    if (age2 >= limit){
        printf("person elidgible to vote!");
    }
    else{
        printf("person not elidgible to vote!");
    }

    // Cheking more than one condition with && operator
    if (age1 >= limit  && age2>= limit){
        printf("Both persons elidgible to vote!");
    }
    else{
        printf("Either of persons not elidgible to vote!");
    }

    // Checking more than one condition with || operator
    if (age1 >= limit  || age3>= limit){
        printf("Both persons elidgible to vote!");
    }
    else{
        printf("Either of persons not elidgible to vote!");
    }

    // Checking condition with NOT operator !=
    if (age2 != limit){
        printf("You are not elidible to vote");
    }
    
}