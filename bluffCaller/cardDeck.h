#ifndef CARD_DECK_H
#define CARD_DECK_H
#include <iostream>

using namespace std;

class CardDeck
{
private:
	struct deckNode
	{
		int suit; //1 = club, 2 = spades, 3 = hearts, 4 = diamonds
		int cardNumber;
		struct deckNode *next;
		
	};

	deckNode *head;

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