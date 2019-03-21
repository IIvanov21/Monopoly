#pragma once

#include <memory>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

enum ESquareCode { Property = 1, Go = 2, Airport = 3, Bonus = 4, Penalty = 5, Jail = 6, GoToJail = 7, FreeParking = 8};

//Represent Square Type 
struct SquareStructure
{
	string squareName;
	string ownershipStatus;
	int cost;
	int rent;
	int propertyGroup;
	int squareNumber;
	ESquareCode squareCode;
};

using SquareType = unique_ptr<SquareStructure>;
using SquaresList = vector<unique_ptr<SquareStructure>>;
struct PlayerStructure
{
	string name;
	int balance;
	int playerPosition;
};