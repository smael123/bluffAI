#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	int funds; //or amount of chips
	int holeCards; //not sure if 2d array or wataevs
	int chanceOfWinning; //increases or decreases as hand progresses and could change instantly after card is revealed
	int betAmount;
	int blindConfidence; // confidence percentage at time of blind raising
	int blindBet;
	int betAmount;
public:
	void bet(int); // a bet of 0 would be a check :)
	void fold();
	void raise() //at the moment I only want the raising to occur at the blinds

};

#endif