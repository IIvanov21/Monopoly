#include "MonopolyManager.h"

class Player :public MonopolyManager
{
private:
	string PlayerOne;
	string PlayerTwo;
	int playerNumber;
public:
	Player();
	void DiceRoll();
};