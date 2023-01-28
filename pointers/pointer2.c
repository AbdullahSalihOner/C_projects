#include <stdio.h>

void f(const int *xPtr);

int main(void) 
{
    int y;

    f(&y);/// f attempts illegal modification
}

//xPtr cannot be used to modify the value of the variable to which it points
void f(const int *xPtr)
{
    *xPtr = 100; // error ; cannot modify a const object
}