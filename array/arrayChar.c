#include <stdio.h>

int main(void) 
{
    int i;
    char string1[20];

    printf("Enter the string \"hello there\" : ");
    fgets(string1, 20 ,stdin);

    printf("\nstring1 : \n");
    for(i = 0 ; string1[ i ] != '\0' ; i++ )
    {
        printf("%c");
    }
    printf("\nthe length of string1 is %d\n", i);

    return 0;
}