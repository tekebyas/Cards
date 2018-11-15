#ifndef DECK_H
#define DECK_H

#include "card.h"

class Deck
{
public:
    Deck();
    Deck(int amount);
    Deck deal();
    void shuffle();
private:
    Card m_c[];
};

#endif
