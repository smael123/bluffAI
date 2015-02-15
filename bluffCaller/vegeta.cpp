#include "vegeta.h"
#include "dealer.h"
#include <iostream>

using namespace std;

const int CHIPS = 20000;

Vegeta::Vegeta()// if you want to allow the user to define the initial amount of chips delete const int CHIPS and use an x;
{
	funds = CHIPS;
}

void Vegeta::bet(int ca)
{
	void Dealer::increasePot(ca);
}

void Vegeta::callOnRange(int min, int max, int playBet)
{
	if (playBet > min && playBet < max)
	{
		bet(playBet);
	}
}

void Vegeta::foldOnRange(int min, int max, int playBet)
{
	if (playBet > min && playBet < max)
	{
		fold();
	}
}

void Vegeta::setBlindRaisingConfidence(int playConf) //maybe later add amount of times the player blind raised
{
	blindRaisingConfidence = playConf;
}

void Vegeta::playerWins(int x, int y)
{
	if (blindBet)
	{
		setBlindRaisingConfidence();
	}
	confRangeMin = x;
	confRangeMax = y;

}