#include "ISquare.h"


class CSquare : public ISquareType
{
public:
	CSquare();
	void SquareInformation();
	void DisplayInformation();
private:
	int squareNumber;
	int squareType;
	//String variables used to load the information for SquareTypes from a file 
	string fileName;
	string mSpecialSquareNameElement;
	string mFirstPartOfPropertyName;
	string mSecondPartOfPropertyName;
	//Smart Pointers and Lists to manage squareInformation
	SquareType mSquare;
	SquaresList mSquaresList;
};