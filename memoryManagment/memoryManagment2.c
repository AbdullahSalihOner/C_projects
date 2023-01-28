
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc free

int main(void)
{
    char *s = malloc(4 * sizeof(char));
    scanf("%s", s);
    if(s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1 );
    if(t == NULL)
    {
        return 1;
    }

     //döngünün görevini yerine getiren fonksiyon
    strcpy(t, s);
    /*
    for(int i = 0, n = strlen(s)+1 ; i< n ; i++)
    {
        t[i] = s[i];
    }
     */

    if(strlen(t) > 0)
    {
        t[0] =toupper(t[0]);
    }




    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);

    return 0;
}