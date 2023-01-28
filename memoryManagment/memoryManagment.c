#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count = 0;
int length = 100;

void add(int **ptr, int a);
void delete(int **ptr, int a);

int main(void)
{
    int *array;

    // array = malloc(25 * sizeof(int));
    array = malloc(100 * sizeof(int));

    // eleman sayısnı iki katına çıkardık
    for (int i = 0; i < 85; i++)
    {
        add(&array, i);
        // array[i] = i;
        printf("%d , ", array[i]);
    }

    printf("\n");
    printf("%d", length);

    printf("\n");
    printf("------------------------------------------------\n");
    // eleman sayısnı yarıya indirdik
    for (int i = 0; i < 10; i++)
    {
        delete (&array, i);
        
    }
    for (int i = 0; i < count; i++)
    {

        printf("%d , ", array[i]);
    }

    printf("\n");
    printf("%d", length);
}

void add(int **ptr, int a)
{

    if (count * 4 / 3 >= length)
    {

        int *array2 = malloc(length * 2 * sizeof(int));
        for (int i = 0; i < length; i++)
        {
            array2[i] = (*ptr)[i];
        }
        *ptr = array2;
        length = length * 2;
    }
    (*ptr)[count] = a;
    count++;
}

void delete(int **ptr, int a)
{

    if (count * 2 < length)
    {

        int *array2 = malloc(length * 1 / 2 * sizeof(int));
        for (int i = 0; i < length; i++)
        {
            array2[i] = (*ptr)[i];
        }
        *ptr = array2;
        length = length / 2;
    }
    (*ptr)[count] = NULL;
    count--;
}