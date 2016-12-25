//Andrew Torres
//Tmagnifier.cpp
//Version 1.0
//DESCRIPTION: Implementation of Tmagnifier.h

#include "Tmagnifier.h"



Tmagnifier::Tmagnifier() : magnifier()
{
	order = true;
	highGuess = 0;
	lowGuess = 0;
	Guesses = 0;
	transformer::hidden = -1;
	transformer::active = false;
}

Tmagnifier::Tmagnifier(int a, int b) : magnifier(a, b)
{
	order = true;
	highGuess = 0;
	lowGuess = 0;
	Guesses = 0;
	transformer::hidden = a;
	transformer::active = true;
}

Tmagnifier::Tmagnifier(const Tmagnifier &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.lowGuess;
	scale = obj.scale;

}

void Tmagnifier::operator=(const Tmagnifier &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.lowGuess;
	scale = obj.scale;

}

int Tmagnifier::transform(int num)
{
	if (order)
	{
		switchOrder();
		return (hidden + num) * scale;
	}

	switchOrder();
	return (hidden - num) * scale;
}

Tmagnifier::~Tmagnifier()
{
}

