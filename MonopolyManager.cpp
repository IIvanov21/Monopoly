#include "MonopolyManager.h"

/*MonopolyManager::MonopolyManager()
{
	startBalance = 1500;

}*/
void MonopolyManager::gameStart()
{
	cout << "Welcome to Monopoly" << endl;

}
int MonopolyManager::Random()
{
	return static_cast<int>(static_cast<double> (rand()) / (RAND_MAX + 1) * 6.0f + 1);
}