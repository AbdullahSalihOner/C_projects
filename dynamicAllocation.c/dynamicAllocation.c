#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array;

    printf("array value before malloc : %p \n", array);

    array = malloc(5 * sizeof(int));

    printf("array value after malloc : %p \n", array);
    
    printf("array values : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d : %d\n", i , array[i]);
    }

    array = calloc(5,5*sizeof(int));
    printf("array values : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d : %d\n", i , array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
    }

    printf("array values : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d : %d\n", i , array[i]);
    }

    printf("array value before free : %p \n", array);

    free(array);

    printf("array value after free : %p \n", array);
    printf("array values after free : %p \n");

    
    for (int i = 0; i < 5; i++)
    {
         printf("%d : %d\n", i , array[i]);
    }
}