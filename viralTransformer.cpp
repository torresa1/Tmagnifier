//Andrew Torres
//viralTransformer.cpp
//Version 1.1
//DESCRIPTION: Implementation to viralTransformer.h

#include "viralTransformer.h"


//Constructors
viralTransformer::viralTransformer() : transformer()
{
}

viralTransformer::viralTransformer(int a) : transformer(a)
{

}

//Copy Constructor
viralTransformer::viralTransformer(const viralTransformer &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.Guesses;

}

//Overloaded Assignment Operator
void viralTransformer::operator =(const viralTransformer &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.Guesses;
}

//Destructor
viralTransformer::~viralTransformer()
{
}

int viralTransformer::transform(int num)
{
	if (order)
	{
		switchOrder();
		return hidden * num;
	}

	switchOrder();
	return num % hidden;
}