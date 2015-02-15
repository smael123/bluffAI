#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "cardDeck.h"
#include <vector>
using namespace std;

const int NUM_OF_CARDS = 52; //club, spade, ace, diamond 0 = A club 12 = K club, 13 = A spade
const int NUM_OF_SUIT_CARDS = 14;
const int NUM_OF_SUITS = 4;

CardDeck::CardDeck()
{
	randomizeList();
}

void CardDeck::initializeDeck()
{
	for (int i = 0; i <= NUM_OF_SUITS; i++) 
	{
		for (int i1 = 0; i1 < NUM_OF_SUIT_CARDS; i1++) /*start is ace and final is king (13)*/
		{
			cardUsed[NUM_OF_SUITS][NUM_OF_SUIT_CARDS] = true;
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
	vector<int> randCard(NUM_OF_CARDS);
	
	for (int i = 0; i < NUM_OF_CARDS; i++)
	{
		randCard.push_back(i);
	}


	int length = sizeof(randCard) / sizeof(int);
	int randomNumber = randCard[rand() % length]; // 
	randCard.erase(randCard.begin() + (randomNumber - 1));


	bool cardComboUsed[NUM_OF_SUITS][NUM_OF_SUIT_CARDS];
	// 0 = club, 1 = spades, 2 = hearts, 3 = diamonds
	int usedCombos[NUM_OF_SUITS][NUM_OF_SUIT_CARDS];

	for (int i = 0; i < NUM_OF_CARDS; i++)
	{
		do
		{
			randSuit = 1 + rand() % NUM_OF_SUITS;
			randSuitNum = 1 + rand() % NUM_OF_SUIT_CARDS; 
		} while (!cardComboUsed[NUM_OF_SUITS][NUM_OF_SUIT_CARDS]);

		card[randSuit][randSuitNum];
		cardsLeft[randSuit] -= 1;
		cardComboUsed[randSuit][randSuitNum] = true; // ex [3][11] Heart of JAck used
	} 

	
	
}