#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *sPtr);

int main(void) 
{
    char string[] = "chaRaCters and $32.98"; //initialize char array

    printf("The string before conversion is : %s\n", string);
    convertToUpperCase(string);
    printf("The string after conversion is : %s\n", string);
}

void convertToUpperCase(char *sPtr)
{
    while (*sPtr != '\0') //Current character is not '\0'
    {
        *sPtr = toupper(*sPtr);//convert to upper case
        ++sPtr;// make sPtr point to the next character
    }
}