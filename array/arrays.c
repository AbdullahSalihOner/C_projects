#include <stdio.h>
#define RESPONSE_SIZE 40
#define FREQUENCE_SIZE 11

int main(void) 
{
    int frequency[FREQUENCE_SIZE] = {0};

    int responses[RESPONSE_SIZE] = {1,2,4,7,9,5,0,6,5,4,3,2,2,5,4,3,1,7,9,7,6,1,2,4,9,7,6,4,3,2,4,5,6};


    // for each answer, select value of an element of array responses
    //and use that value as index in array frequency to 
    //determine element to increment
    for(size_t answer = 0; answer < RESPONSE_SIZE; ++answer)
    {
        ++frequency[responses[answer]];
    }

    printf("%s%17s\n", "Rating" , "Frequency");

    for(size_t rating = 1; rating < FREQUENCE_SIZE; ++rating)
    {
        printf("%6d%17d\n", rating , frequency[rating]);
    }
}