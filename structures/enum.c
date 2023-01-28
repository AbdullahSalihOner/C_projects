#include <stdio.h>

enum months{
     Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};
int main(void) {

    const char *monthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
     "Aug", "Sep", "Oct","Nov","December"};

     for(enum months month = Jan; month<=Dec ;++month)
     {
        printf("%2d%11s\n", month, monthNames[month]);
     }
}