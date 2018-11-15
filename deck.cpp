#include "deck.h"

Deck::Deck()
{
    Card deck[52];
    int p = 0;
    for(int i=0;i<4;i++)
    {
        for(int j=0; j<13;j++)
        {
            deck[p] = Card(i,j);
            p++;
        }
    }
}
Deck::Deck(int amount)
{
    Card hand[amount];
}

Deck Deck::deal()
{
    int amount = 5;
    return Deck(amount);
}

void Deck::shuffle()
{
}
