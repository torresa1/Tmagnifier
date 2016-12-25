//Andrew Torres
//Tmagnifier.h
//Version 1.0
//DESCRIPTION: This class Is-a magnifier & a transformer
//transform() uses transformer's general function  implemented 
//with magnifier's scale as protected and accessed through guess. 
//Otherwise uses functionality of both parents


#ifndef TMAGNIFIER_H
#define TMAGNIFIER_H

#include "transformer.h"
#include "magnifier.h"

class Tmagnifier :
	public transformer, public magnifier
{
public:
	//Constructors
	Tmagnifier();
	Tmagnifier(int a, int b);

	//Copy Constructor
	Tmagnifier(const Tmagnifier &obj);

	//Overloaded Assignment Operator
	void operator=(const Tmagnifier &obj);

	//Destructor
	~Tmagnifier();

protected:
	using transformer::active;		//relevant to the public guess function
	using transformer::hidden;		//relevant to the public guess function
	int transform(int num);
};

#endif
