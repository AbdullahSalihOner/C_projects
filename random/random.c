#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count1=0 , count2=0 , count3=0 , count4=0 , count5=0 , count6=0;
    int face,roll;

    srand(time(NULL));

    for(roll=0;roll<6000;roll++)
    {
        face = 1 + rand() % 6;
        switch(face)
        {
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
            case 4:
                count4++;
                break;
            case 5:
                count5++;
                break;
            case 6:
                count6++;
                break;
            default:
                printf("This case is impossible!\n");
                break;
        }    
    }
}