#include <stdio.h>
#include <stdint.h>
int main(void)
{
    // initialize array
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = array;
    uintptr_t ptr_a = (uintptr_t)ptr;
    printf("ptr: %d - Addr: %p Addr(int): %lu\n", *ptr, ptr, ptr_a);
    ptr++;
    ptr_a = (uintptr_t)ptr;
    printf("ptr++ : %d Addr: %p Addr(int) : %lu\n", *ptr, ptr, ptr_a);
    ptr--;
    ptr_a = (uintptr_t)ptr;
    printf("ptr-- : %d Addr: %p Addr(int) : %lu\n", *ptr, ptr, ptr_a);
    ptr += 3;
    ptr_a = (uintptr_t)ptr;
    printf("ptr+=3 : %d Addr: %p Addr(int) : %lu\n", *ptr, ptr, ptr_a);
    ptr -= 2;
    ptr_a = (uintptr_t)ptr;
    printf("ptr-=2 : %d Addr: %p Add(int) : %lu\n", *ptr, ptr, ptr_a);
    ptr = ptr + 1;
    ptr_a = (uintptr_t)ptr;
    printf("ptr = ptr + 1 : %d Addr: %p Add(int) : %lu\n", *ptr, ptr, ptr_a);
}
