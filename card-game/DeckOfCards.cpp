// DeckOfCards.cpp
// Implementation code for class DeckOfCards

#include <iostream>
#include <new>
#include <string>
#include <vector>
#include <cstdlib> // rand()
#include <ctime>   // time() 1/1/2023 
#include "DeckOfCards.h"
using namespace std;


DeckOfCards::DeckOfCards() {

    for (int face = 0; face < 13; ++face) { //Constructor
        for (int suit = 0; suit < 4; ++suit) {
            Card* myCard{ new Card{face, suit} };
            deck.emplace_back(myCard);

        }
    }
    currentCard = 0;
}

void DeckOfCards::shuffle() { // shuffle randomly, exchanging

    int a{ 0 };

    srand(time(0));  // 1/1/2023

    while (a < 50) {
        for (int c = 0; c < 52; c++) { // 52 swaps
            int r = rand() % 52;  // random card
            Card* temp = deck[c];
            deck[c] = deck[r];
            deck[r] = temp;
        }
        ++a;
    }

    currentCard = 0;

    return;
}

Card* DeckOfCards::dealCard() { // returns current card, post increments current card
    return deck[currentCard++];
}


Card* DeckOfCards::getCard(size_t numb) { // deals a card in deck
    return deck[numb];
}

bool DeckOfCards::moreCards() const { // returns true if current card less than 52
    return (currentCard < 52);
}