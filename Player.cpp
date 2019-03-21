#include "Player.h"

Player::Player()
{
	PlayerOne = "Dog";
	PlayerTwo = "Car";
}

void Player::DiceRoll()
{
	playerNumber = Random();
	cout << PlayerOne << " has rolled " << playerNumber << endl;
}

