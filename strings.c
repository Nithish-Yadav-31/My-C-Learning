/*When to Use Pointers:
Dynamic Memory Management: When you need to allocate memory dynamically or deal with strings of varying lengths.
Memory Efficiency: When you want to save memory by not allocating space for a full array.
Flexibility: When you need to change the string during runtime by pointing to different string literals or dynamically allocated strings.
Function Arguments: When passing strings to functions, as pointers are more convenient and efficient.*/

/*When to Use Arrays:
Fixed Size Strings: When the size of the string is known and fixed at compile time.
Modifiability: When you need to modify the string content.
Safety and Simplicity: When you prefer straightforward memory management without the complexities of pointers.
Local Scope: When the string is used within a limited scope, such as within a function.*/

#include <stdio.h>
#include <string.h>

int main()
{   
    // Defining string with a pointer
    char *Name = "Nithish Yadav";
    printf("Name: %s\n", Name);

    printf("Accessing First Character of string in pointers: %c\n", Name[0]);
    printf("Accessing Second Character of string in pointers: %c\n", Name[1]);

    // Updating pointers
    Name = "Nithish Senthil";
    printf("Updated Name: %s\n", Name);

    // Defining string with array
    char array[] = "Rithish Yadav";
    printf("Accessing First Character of string in array: %s\n", array);

    // Updating array values 
    array[0] = 'N';
    printf("Printing string after updating the array: %s\n", array);


    // String Output formatting
    int age = 21;
    printf("My name is %s and my age is %d.\n", array, age);

    // Printing length of strings
    printf("%d\n", strlen(Name));

    // String concatenation
    char dest[20] = "Hello";
    char src[20] = "World";

    // The syntax goes like (destination string to get appended to, source string, how many characters to append from source)
    strncat(dest, src, 20);
    printf("%s\n", dest);
}