//Andrew Torres
//transformer.cpp
//Implementation of transformer.h class
//Version 1.5
//DESCRIPTION: This class takes and holds an integer value that when
//"transformed", returns the held integer value plus or minus the passed value.
//This is derived from transformer.cs but in c++ form.



#include "transformer.h"
#include <iostream>

using namespace std;

//Constructors
transformer::transformer()
{
	hidden = -1; //If not given value, then negative
	order = true;
	active = false;	//If not given value, then not active
	highGuess = 0;
	lowGuess = 0;
	Guesses = 0;
}

transformer::transformer(int a)
{
	hidden = a;
	order = true;
	active = true;
	highGuess = 0;
	lowGuess = 0;
	Guesses = 0;
}

//Copy Constructor
transformer::transformer(const transformer &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.Guesses;
}

//Overloaded Assignment Operator
void transformer::operator=(const transformer &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.Guesses;
}

void transformer::reset()
{
	hidden = -1;
	order = true;
	active = true;
	highGuess = 0;
	lowGuess = 0;
	Guesses = 0;
}

//Destructor
transformer::~transformer()
{
}


int transformer::guess(int num)
{
	Guesses++;


	if (hidden == num && active)
	{
		active = false;
		return 0;

	}
	else
	{
		//Track statistics
		if (num > hidden)
			highGuess++;
		if (num < hidden)
			lowGuess++;

		return transform(num);
	}
}

//Get Fuctions
bool transformer::getActive()
{
	return active;
}

int transformer::getHigh()
{
	return highGuess;
}

int transformer::getLow()
{
	return lowGuess;
}

int transformer::getGuess()
{
	return Guesses;
}

void transformer::switchOrder()
{
	if (order)
		order = false;
	else if (!order)
		order = true;
}

int transformer::transform(int num)
{
	if (order)
	{
		switchOrder();
		return hidden + num;
	}

	switchOrder();
	return hidden - num;
}

