#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    scanf("%s", &name);
    int i;
    int strlength = strlen(name);
    for (i=0; i<strlength; i++){
        printf("The ASCII value for character is %s \n", i);
    }
}