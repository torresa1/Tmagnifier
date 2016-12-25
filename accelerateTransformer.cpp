//Andrew Torres
//accelerateTransformer.cpp
//Version 1.1
//DESCRIPTION: Implementation to accelerateTransformer.h

#include "accelerateTransformer.h"


//Constructors
accelerateTransformer::accelerateTransformer() : transformer()
{
	accelerator = ACCELERATE;
}

accelerateTransformer::accelerateTransformer(int a) : transformer(a)
{
	accelerator = ACCELERATE;
}

//Copy Constructor
accelerateTransformer::accelerateTransformer(const accelerateTransformer &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.Guesses;
	accelerator = obj.accelerator;

}

//Overloaded Assignment Operator
void accelerateTransformer::operator =(const accelerateTransformer &obj)
{
	hidden = obj.hidden;
	order = obj.order;
	active = obj.active;
	highGuess = obj.highGuess;
	lowGuess = obj.lowGuess;
	Guesses = obj.Guesses;
	accelerator = obj.accelerator;
}

//Destructor
accelerateTransformer::~accelerateTransformer()
{
}

int accelerateTransformer::transform(int num)
{
	int z = hidden * accelerator + accelerator;

	accelerator++;

	switchOrder();
	return z;

}

void accelerateTransformer::reset()
{
	hidden = -1;
	order = true;
	active = true;
	highGuess = 0;
	lowGuess = 0;
	Guesses = 0;
	accelerator = ACCELERATE;
}