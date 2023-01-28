#include <stdio.h>

struct card
{
    char *face;
    char *suit;
};

int main(void)
{
    struct card aCard;

    aCard.face = "ace";
    aCard.suit = "Spades";

    struct card *cardPtr = &aCard; //assign address of aCard to cardPtr

    printf("%s%s%s\n%s%s%s\n%s%s%s\n",aCard.face, " of " ,aCard.suit
    , cardPtr->face," of ", cardPtr->suit,
    (*cardPtr).face, " of ", (*cardPtr).suit);

}
