#include"PokerSuits.h"
#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>

using namespace std;

PokerSuits::PokerSuits()
{
    for (int i = 0; i < 52; i++)            //|�Ϋغc�禡��l��
    {                                       //|
        if (i < 13)                         //|
            pokerSuits[i] = "Clubs";        //|
        else if (i >= 13 && i < 26)         //|
            pokerSuits[i] = "Diamonds";     //|
        else if (i >= 26 && i < 39)         //|
            pokerSuits[i] = "Hearts";       //|
        else if (i >= 39)                   //|
            pokerSuits[i] = "Spades";       //|
    }                                       //|for����
}
string PokerSuits::getPokerSuits(int var)
{
    return pokerSuits[var];
}