#include <stdio.h>

int getSummary(int score[], int arraySize)
{
        int i;
        int sum = 0;
        for (i = 0; i < arraySize; i++)
        {
            sum += score[i];
            score[i] = sum;
        }
        return sum;
}

int main()
{
    int a[]= {1 , 5 , 10};
    int sum = 0;
    printf("a[0] =%d, a[1] = %d, a[2] = %d, sum = %d\n", a[0], a[1], a[2], sum);
    sum = getSummary(a,3);
     printf("a[0] =%d, a[1] = %d, a[2] = %d, sum = %d\n", a[0], a[1], a[2], sum);
     return 0;
}