// Card.h 
// Card class definition

#include <string>
using namespace std;

class Card {
public:
    Card( int cardFace, int cardSuit );
    std::string toString();
    int getFace();	
    int getSuit();	
    bool operator > (const Card&);  // Plus the others as needed!
    bool operator < (const Card&); 
    bool operator == (const Card&);  
private:
    int face;
    int suit;
    static std::string faceNames[ 13 ];
    static std::string suitNames[ 4 ];
};
