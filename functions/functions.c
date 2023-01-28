#include <stdio.h>

//Functions prototype
void useLocalScope(void);
void useStaticLocalScope(void);
void useGlobalScope(void);

int x = 1; //global variable 

int main()
{
    int x = 5; //local variable
    printf("local c in main's outer block is %d\n",x);

    {//new block
        int x = 7;
        printf("local c in main's inner block is %d\n", x);
    }

    printf("local x in main's outer block is %d\n",x);

    useLocalScope();
    useStaticLocalScope();
    useGlobalScope();
    useLocalScope();
    useStaticLocalScope();
    useGlobalScope();

    printf("\nlocal x in main's outer block is %d\n",x);

    return 0;
}

void useLocalScope( void )
{
    int x = 25; // initialized each time this funciton is called

    printf("local x is %d on entering useLocalScope()\n", x);
    ++x;
    printf("local x is %d on exiting useLocalScope()\n", x);
}


void useStaticLocalScope(void)
{
    //x is initialized only first time useStaticLocalScope is called
    //It's value is kept till the next call
    static int x = 50;

    printf("local static x is %d on entering useStaticLocalStorage() \n",x);

    ++x;

    printf("local static x is %d on exiting useStaticLocalScope() \n" , x);

}

//useGlobal modifies global variable x during each call

void useGlobalScope( void )
{
    printf("global x is %d on entering useGlobalScope() \n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobalScope()\n", x);

}

