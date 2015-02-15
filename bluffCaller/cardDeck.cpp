#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "cardDeck.h"
using namespace std;

const int NUM_OF_CARDS = 52;
const int NUM_OF_SUIT_CARDS = 14;
const int NUM_OF_SUITS = 4;

CardDeck::CardDeck()
{
	head = NULL;
	initializeDeck();
}

void CardDeck::initializeDeck()
{
	for (int i = 1; i <= NUM_OF_SUITS; i++) 
	{
		for (int i1 = 2; i1 <= NUM_OF_SUIT_CARDS; i1++) /*start is 2 and final is ace (14)*/
		{
			appendNode(i, i1);
		}
	}
}

void CardDeck::appendNode(int su, int nu)
{
	deckNode *newNode;
	deckNode *nodePtr;

	newNode = new deckNode;
	newNode->suit = su;
	newNode->cardNumber = nu;
	newNode->next = NULL;

	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}
}

void CardDeck::displayList() const
{
	deckNode *nodePtr;

	nodePtr = head;

	while (nodePtr)
	{
		cout << nodePtr->suit << endl;
		cout << nodePtr->cardNumber << endl;

		nodePtr = nodePtr->next;
	}
}
CardDeck::~CardDeck()
{
	cout << "Goodbye." << endl;
}

void CardDeck::randomizeList()
{
	int randSuit;
	int randSuitNum; //ex club 9 randSuit is 0, randSuitNum is 9
	int cardsLeft[NUM_OF_SUITS] = { NUM_OF_SUIT_CARDS, NUM_OF_SUIT_CARDS, NUM_OF_SUIT_CARDS, NUM_OF_SUIT_CARDS };
	bool cardComboUsed[NUM_OF_SUITS][NUM_OF_SUIT_CARDS];
	// 0 = club, 1 = spades, 2 = hearts, 3 = diamonds
	int usedCombos[NUM_OF_SUITS][NUM_OF_SUIT_CARDS];

	for (int i = 0; i < NUM_OF_CARDS; i++)
	{
		do
		{
			randSuit = 1 + rand() % NUM_OF_SUITS;
			randSuitNum = 1 + rand() % NUM_OF_SUIT_CARDS; 
		} while (!usedCombos[NUM_OF_SUITS][NUM_OF_SUIT_CARDS]);
	} 

	appendNode(randSuit, randSuitNum);
	cardsLeft[randSuit] -= 1;
	cardComboUsed[randSuit][randSuitNum] = true // ex [3][11] Heart of JAck used
}