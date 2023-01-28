#include <stdio.h>

int main(void) 
{
    int x;
    int y;

    //ptr is a constant pointer to an integer that can be modified
    //through ptr, but ptr always points to the same memory location
    int * const ptr = &x;

    *ptr = 7; // allowed: *ptr is no const
    ptr = &y; //error ; ptr is const ; connot assign new address
}