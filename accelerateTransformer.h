//Andrew Torres
//accelerateTransformer.h
//Version 1.1
//DESCRIPTION: Child class to transformer.h
//Primary difference is that the transform function instead of add or subtract
//"accelerates" the hidden number by multiplying by another unknown number
//with each transform call increasing the magnitude of acceleration

#ifndef ACCTRANSFORMER_H
#define ACCTRANSFORMER_H


#include "transformer.h"

const int ACCELERATE = 2;

class accelerateTransformer :
	public transformer
{
public:
	//Constructors, Only difference is the addition of accelerator integer
	accelerateTransformer();
	accelerateTransformer(int a);
	//Copy Constructor
	accelerateTransformer(const accelerateTransformer &obj);
	//Overloaded Assignment Operator
	void operator =(const accelerateTransformer &obj);
	//Destructor
	~accelerateTransformer();

	void reset();

private:
	int accelerator;	//Integer value that drives acceleration


protected:
	//return the hidden value multiplied by some value and then added by
	//the same value.
	//Any integer for the parameter is allowable and irrelevant to the function.
	//PRECONDITION: accelerator and hidden must be initialized to some int
	//POSTCONDITION: accelerator is incremented by one.
	//bool order is also switched to maintain transformer documentation
	//consistency
	int transform(int num);

};

#endif
