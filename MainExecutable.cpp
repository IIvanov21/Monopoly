#include "MonopolyManager.h"
#include "Player.h"
#include "PropertySquares.h"
int main()
{
	MonopolyManager* NewMonopolyManager= new Player;
	Player* PlayerCall = new Player();
	PropertySquares* showPropertyTest = new PropertySquares;
	NewMonopolyManager->gameStart();
	PlayerCall->DiceRoll();
	showPropertyTest->LoadPropertyInformation();
	showPropertyTest->DisplayInformation();
	delete showPropertyTest;
	delete PlayerCall;
	delete NewMonopolyManager;
	system("pause");

}