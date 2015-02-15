#ifndef CARD_DECK_H
#define CARD_DECK_H
#include <iostream>
#include <algorithim>
#include <vector>

using namespace std;

const int NUM_OF_CARDS = 52; //club, spade, ace, diamond
const int NUM_OF_SUIT_CARDS = 14;
const int NUM_OF_SUITS = 4;

class CardDeck
{
private:
	vector<int> card;
public:
	CardDeck()
	{
		initializeDeck();
	}
	~CardDeck();
	void initializeDeck()
	{
		for (int i = 0; i < NUM_OF_CARDS; i++)
		{
			card.push_back(i);
		}
	};
	void displayList() const;
	void shuffleDeck()
	{
		random_shuffle(card.begin(), card.end());
	};
};

#endif