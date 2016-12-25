//Andrew Torres
//transformer.h
//Version 1.5
//DESCRIPTION: This class takes and holds an integer value that when
//"transformed", returns the held integer value plus or minus the passed value.
//This is derived from transformer.cs but in c++ form.
//Base class for viralTransformer and accelerateTransformer
//Changes from original version, addition of reset() function

#ifndef TRANSFORMER_H
#define TRANSFORMER_H


using namespace std;

class transformer
{
public:
	//Constructors
	transformer();	//hidden value will be initialized to -1 as default
	transformer(int a);
	//Copy Constructor
	transformer(const transformer &obj);
	//Overloaded Assignment Operator
	void operator = (const transformer &obj);
	//Destructor
	~transformer();


	//Check if the hidden number is the passed value. Return 0 if correct and 
	//active. Otherwise return the transformed number.
	//PRECONDITION: hidden must be initialized to some integer value
	//POSTCONDITION: if the guess was correct, then active becomes false
	//If guess is incorrect, then bool order is switched.
	int guess(int num);

	//Reset all the values and set as active;
	//POSTCONDITION: all values set to 0 and false and hidden to -1
	virtual void reset();

	//Simple return active function
	//PRECONDITION: active is initialized
	bool getActive();

	//PRECONDITION: highGuess is initialized
	int getHigh();

	//PRECONDITION: lowGuess is initialized
	int getLow();

	//PRECONDITION: Guesses is initialized
	int getGuess();

protected:

	//For bool order; If false, then true becomes and vice versa.
	//PRECONDITION: order is initialized
	//POSTCONDITION: bool order is the opposite value of its initial state
	void switchOrder();

	//return a transformed version of the passed number in accordance to 
	//the hidden number. Add if order is true, subtract if false.
	//PRECONDITION: hidden must be initialized to some integer value
	//POSTCONDITION: bool order is switched from its initial state
	virtual int transform(int num);

	//Protected data members
	int hidden;     //hidden number to be transformed
	bool order;     //determine order. True = add, False = subtract
	bool active;    //Whether the object is on and operable
						//When guessed correctly, active becomes false
	int highGuess;  //Number of too high guesses
	int lowGuess;   //Number of too low guesses
	int Guesses;    //Number of guesses
};

#endif
