#include <iostream>
#include <string>
using namespace std;

#ifndef VEGETA_H //Vegeta is an expert poker player (search youtube)
#define VEGETA_H //

//Vegeta's main source of information is when a showdown occurs. He (or if you want a female antagonist she) analyzes the players actions and will change tactics if heshe lost or won.


class Vegeta
{
private:
	int funds; //or amount of chips
	int holeCards; //not sure if 2d array or wataevs
	int chanceOfWinning; //increases or decreases as hand progresses and could change instantly after card is revealed
	bool playerWon;
	int bluffRangeMin; // if hte player lost then Vegeta now knows how much the player will bet when he is bluffing and will call at that point
	int bluffRangeMax;
	int confRangeMin;
	int confRangeMax; // if the plaer won then Vegeta now know how much the player will bet when he is confident and will fold at taht point
	bool fakeCheck; // if the player checked even though he had a good hand; if this occurs alot then Vegeta will check rather than bet when the player does
	int blindRaisingConfidence; // Vegeta will now know how confident a player is if he blind raises. if Vegeta has a higher confidence percentage than the player's blind percentage then he will call other wize he will fold
	string taunt[100];
	string nani[100];
	int betAmount; 
	int blindBet;
public:
	Vegeta();
	~Vegeta();
	void bet(int); // a bet of 0 would be a check :)
	void fold();
	void riverResult(); //if the player won or lost
	void setBluffRange();
	void setConfRange();
	void callOnRange(int, int, int);
	void foldOnRange(int, int, int);
	void taunt(); // just a string
	void suprisedRecation(); //ex. You're calling. *grunt Why is that? This is not a joke!
	void revealCards() const;
	void setBlindRaisingConfidence(int); //amount of money and amount of times they did it
	void playerWins(int, int)
};

#endif