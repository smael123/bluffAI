#ifndef DEALER_H //you need frends of classses; dealer also cats as the pot
#define DEALER_H

class Dealer
{
private:
	int potAmount;
	//not sure if i should give her access to the deck or just combine hte deck object with her
public:
	void dealHole(int, int); // takes 2 cards// this is called for as many players as you have;
	void dealCommunity(int, int, int);
	void addToCommunity(int);
	void givePot(int); // gives pot to the WINNER of the hand
	void increasePot(int);


};

#endif