#ifndef CARD_DECK_H
#define CARD_DECK_H
#include <iostream>

using namespace std;

const int NUM_OF_CARDS = 52; //club, spade, ace, diamond
const int NUM_OF_SUIT_CARDS = 14;
const int NUM_OF_SUITS = 4;

class CardDeck
{
private:
	bool cardUsed[NUM_OF_SUITS][NUM_OF_CARDS]; //if true then it has NOT been used
	int card[NUM_OF_SUITS][NUM_OF_SUIT_CARDS];
public:
	CardDeck();
	~CardDeck();
	void appendNode(int, int);
	void deleteNode(int, int);
	void initializeDeck();
	void displayList() const;
	void randomizeList();
};

#endif