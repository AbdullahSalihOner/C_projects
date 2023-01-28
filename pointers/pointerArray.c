#include <stdio.h>

int main(void)
{
// initialize array
int array[] = {1,2,3,4,5,6,7};
int *ptr = array;
    printf("ptr: %d\n", *ptr);
    ptr++;
    printf("ptr++ : %d\n", *ptr);
    ptr--;
    printf("ptr-- : %d\n", *ptr);
    ptr += 4;
    printf("ptr+=4 : %d\n", *ptr);
    ptr -= 2;
    printf("ptr-=2 : %d\n", *ptr);
    ptr = ptr + 1;
    printf("ptr= ptr + 1 : %d\n", *ptr);
}