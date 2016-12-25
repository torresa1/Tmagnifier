//Andrew Torres
//magnifier.h
//Version 1.0
//DESCRIPTION: This class encapsulates a size and a scaling factor 
//and according to state, yields a scaled size

#ifndef MAGNIFIER_H
#define MAGNIFIER_H


using namespace std;

class magnifier
{
public:
	//Default Constructor
	magnifier();
	//Accessible Constructor
	magnifier(int a, int b);
	//Copy Constructor
	magnifier(const magnifier &obj);
	//Overloaded Assignment Operator
	void operator =(const magnifier &obj);
	//Destructor
	~magnifier();

	//return the hidden number * scale if active, otherwise -1
	//PRECONDITION: hidden is initialized
	virtual int transform();

	//Set active to false
	//POSTCONDITION: active == false;
	void turnOff();

protected:					
	//Protected Data Members
	int hidden;			//Value to be multiplied by scale
	int scale;			//Value to multiply hidden
	bool active;		//Whether magnifier can transform

};

#endif