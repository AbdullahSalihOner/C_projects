#include <stdio.h>

int main(void)
{
    int n = 16;
    binary(n);
    printf("%d b = %d\n", n, binary(n));
    return 0;
}

int binary(int n){
        if (n<2)
        {
            return n;
        }
        else
        return 10*(binary(n/2))+(n%2);
        
}
