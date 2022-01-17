// DeckOfCards.h
// DeckOfCards class definition

#include "Card.h"
#include <vector>
#include <string>
using namespace std;

class DeckOfCards {
public:
   DeckOfCards(); // constructor initializes deck
   void shuffle(); // shuffles cards in deck
   Card * dealCard(); // deals cards in deck
   Card * getCard(size_t); // deals a card in deck
   bool moreCards() const; // are there any more cards left
private:
   std::vector< Card * > deck; // represents deck of cards
   unsigned currentCard; // index of next card to be dealt
};
