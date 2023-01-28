#include "stdio.h"

int factorial(int n);

int main()
{
    printf("factorial : %d", factorial(5));

}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1); //recursive calling
    }
}
