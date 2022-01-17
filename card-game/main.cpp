// main() function 
// main.cpp   

#include <iostream>
#include "DeckOfCards.h"
using namespace std;

/*
Computer card game where, in each round, player draws a card and computer draws a card.
The winner of the round is the one who draws the higher card (face and suit if needed). 
The winner of the game is the first to get two rounds ahead.  Create a standard deck of 
52 cards.  Each suit (Clubs, Diamonds, Hearts, Spades) and each card face (Deuce...Nine, 
Jack, Queen, King, Ace).  Use dynamic memory for each card.  Provide the needed operator 
overloads for <, > and == for the card class.  In main() play game. Player will draw a 
card. The computer will draw a random card.  Declare a winner.
Create deck of cards.
For each round shuffle the cards.
Ask the player for a number from 0 to 51 (range checked)
Show the player their card
Have the computer randomly draw a card
Show the domputer’s card to the player
Compare the cards
Declare a winner
Repeat until one side is 2 wins ahead
*/

int main(int argc, const char * argv[]) {
    
   std::cout << "Captain America\t\t\tC++\n" << std::endl;
    
   int number{0}, playerCount{0}, computerCount{0};
   
   DeckOfCards myDeck;
   
   cout << endl;
   
   int r{0}; // loop counter
   
   while (r < 5) { // round the loop
       
   myDeck.shuffle(); // shuffle deck
   
   do {
      cout << "Enter a number from 0 to 51 ";
      cin >> number;
      cout << endl;
      if ( number < 0 || number > 51 )
         cout << "Re-enter valid number\n";
    } while ( number < 0 || number > 51 );
        
   cout << endl;
        
   cout << "Player draw:  " << myDeck.getCard(number)->toString() << endl << endl;
  
   int randomCard = rand() % 52 ;  // random computer card
   
   cout << "Computer draw:  " << myDeck.getCard(randomCard)->toString() << endl << endl;
   
   Card * card1;
   Card * card2;
 
   card1 = myDeck.getCard(randomCard);
  
   card2 = myDeck.getCard(number);
    
   if (*card1 == *card2) {
      cout << "No winner for round." << endl << endl;
   } 
   
   if (*card1 > *card2) {
      ++computerCount;
   } 
   
   if (*card1 < *card2) {
      ++playerCount;
   } 
  
   cout << "Player Score " << playerCount << "  Computer Score " << computerCount << endl << endl << endl
   ;
   
   if ((playerCount - computerCount) == 2) {
      cout << "Player wins!";
      break;
   } else if ((computerCount - playerCount) == 2) {
      cout << "Computer wins!";
      break;
   }
      
   ++r; //loop counter
   
   if (r == 5) cout << "BOREDOM!!!";
   
   } // end round loop
   
   return 0;
}
