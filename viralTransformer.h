//Andrew Torres
//viralTransformer.h
//Version 1.0
//DESCRIPTION: child class to transformer.h
//Primary difference from transformer is the overridden transform function.
//Now the hidden number is multiplied or modulated by the parameter instead
//of being added or subtracted.

#ifndef VIRTRANSFORMER_H
#define VIRTRANSFORMER_H

#include "transformer.h"
class viralTransformer :
	public transformer
{
public:
	//Constructors, same as base class
	viralTransformer();
	viralTransformer(int a);

	//Copy Constructor
	viralTransformer(const viralTransformer &obj);

	//Overloaded Assignment Operator
	void operator =(const viralTransformer &obj);

	//Destructor
	~viralTransformer();


protected:
	//return the hidden number either multiplied by the parameter (order =
	//true) or modulated by the parameter (order = false)
	//PRECONDITION: order and hidden must be initialized
	//POSTCONDITION: bool order is switched from initial value
	int transform(int num);
};

#endif
