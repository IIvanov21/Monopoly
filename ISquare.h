#pragma once
#include "Definitions.h"

class ISquareType
{
public:
	virtual ~ISquareType() = 0;

	virtual void SquareInformation() = 0;
};