//Andrew Torres
//magnifier.cpp
//Implementation of magnifier.h class
//Version 1.0
//DESCRIPTION: This class encapsulates a size and a scaling factor 
//and according to state, yields a scaled size


#include "magnifier.h"


//Default Constructor
magnifier::magnifier()
{
	hidden = -1;	//Set hidden to negative for default
	scale = 1;
	active = false;	//Not active unless constructed with parameters
}

//Good Constructor
magnifier::magnifier(int a, int b)
{
	hidden = a;
	scale = b;
	active = true;
}

//Copy Constructor
magnifier::magnifier(const magnifier &obj)
{
	hidden = obj.hidden;
	scale = obj.scale;
	active = obj.active;
}

//Overloaded Assignment Operator
void magnifier::operator=(const magnifier &obj)
{
	hidden = obj.hidden;
	scale = obj.scale;
	active = obj.active;
}

magnifier::~magnifier()
{
}

int magnifier::transform()
{
	if (active)
	{
		return hidden * scale;
	}
	return -1;
}

void magnifier::turnOff()
{
	active = false;
}