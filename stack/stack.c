//Every procedure calling first push the parameters , the address of next procedure  lastly push to next procedure's
//local variable 
//if we return to the first procedure pop all part step by step
// rerurn address pushed before parameters

//LIFO last in first out



//Demonstrating the function call stack
//and stack frames using a function square

#include <stdio.h>
int square(int);

int main()
{
    int a = 10;

    printf("%d squared : %d\n", a, square(a)); //display
}

int square(int x)
{
    return x * x; //
}