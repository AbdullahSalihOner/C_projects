#include <stdio.h>

union number{
    int x;
    double y;
};

union number value = {10};