#include "MonopolyManager.h"
#include "CSquare.h"

CSquare::CSquare()
{
	squareNumber = 0;
	squareType = 0;
	fileName = "Monopoly.txt";
}

void CSquare::SquareInformation()
{
	fstream squareInformation(fileName);
	int passContent = 0;
	stringstream lineOfInformation;
	if (squareInformation.is_open())
	{
		while (!squareInformation.eof())
		{
			mSquare.reset(new SquareStructure);
			squareInformation >> passContent;
			mSquare->squareCode = (ESquareCode)passContent;
			squareInformation >> mFirstPartOfPropertyName;
			squareInformation >> mSecondPartOfPropertyName;
			mSquare->squareName = mFirstPartOfPropertyName + mSecondPartOfPropertyName;
			squareInformation >> mSquare->cost;
			squareInformation >> mSquare->rent;
			squareInformation >> mSquare->propertyGroup;
			mSquaresList.push_back(move(mSquare));
		}
		squareInformation.close();
	}
	else cout << "File not open!Closing game..." << endl;
}

void CSquare::DisplayInformation()
{
	for (auto it = mSquaresList.begin(); it != mSquaresList.end(); it++)
	{
		cout << (*it)->squareName << " " << (*it)->cost << " " << (*it)->rent << " "
			<< (*it)->squareCode<<" "<<(*it)->squareNumber<<endl;
	}
}