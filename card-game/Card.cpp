// Card.cpp
// Implementation code for class Card

#include <iostream>
#include <string>
#include "Card.h"
using namespace std;


 string Card::faceNames[13] = {"Deuce", "Three", "Four", "Five", "Six", 
 "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace" };

 string Card::suitNames[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
 

Card::Card ( int cardFace, int cardSuit ) { //Constructor

   face = cardFace;
   suit = cardSuit;
   
}    
   

int Card::getFace() {
   return face;    
}

int Card::getSuit() {
   return suit;    
}

string Card::toString()   {
    
   return Card::faceNames[ getFace() ] + " of " + Card::suitNames[ getSuit() ];
}

bool Card::operator > (const Card& card2) {
   if (face == card2.face) {
      return suit > card2.suit;
   } else {
      return face > card2.face;
   }
}

bool Card::operator < (const Card& card2) {
   if (face == card2.face) {
      return suit < card2.suit;
   }else {
      return face < card2.face;
   }
}

bool Card::operator == (const Card& card2) {
   return ((face == card2.face && suit == card2.suit) ? true : false); 
}
