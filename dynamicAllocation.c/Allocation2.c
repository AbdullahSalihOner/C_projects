#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[] = {5,4,3,2,1};

    printf("initial array values : \n");

    for (int i = 0; i < 5; i++) 
    {
        array[i] = i;
    }

    printf("array value before malloc : %p \n", array);
    //array = malloc(5 * sizeof(int));
    printf("array value after malloc : %p \n", array);

    printf("array values : \n");
    for (int i = 0; i < 5; i++)
    {
         printf("%d : %d\n", i , array[i]);
    }

    printf("array values before free : %p \n", array);
    free(array);
    printf("array values after free : %p \n", array);


    printf("array values : \n");
    for (int i = 0; i < 5; i++)
    {
         printf("%d : %d\n", i , array[i]);
    }
}