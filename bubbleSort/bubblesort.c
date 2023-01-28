#include <stdio.h>

void bubbleSort(int A[], int N);

int main()
{
    int i;
    int a[5] = {5,1,4,2,8};

    bubbleSort(a,5);

    for(i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

void bubbleSort(int A[], int N)
{
    int temp,i,j ;
    for(i = 0; i <= N;i++) 
    {
        for(j = 1;j < array.length();j++)
        {
            if(A[j]<A[j-1])
            {
                temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
            }

        }
        
    }
}