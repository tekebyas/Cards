#ifndef CARD_H
#define CARD_H

enum Suit
{
    Spade = 0,
    Heart = 1,
    Diamond = 2,
    Club = 3
};

enum Value
{
    Two = 0;
    Three = 1;
    Four = 2;
    Five = 3;
    Six = 4;
    Seven = 5;
    Eight = 6;
    Nine = 7;
    Ten = 8;
    Jack = 9;
    Queen = 10;
    King = 11;
    Ace = 12;
};

class Card
{
public:
    Card(Suit s, Value v);
private:
    Suit m_suit;
    int value;
};
#endif
