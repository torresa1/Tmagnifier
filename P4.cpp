//Andrew Torres
//P4.cpp
//Version 1.0
//DESCRIPTION: Driver to test the transformer class and all its children as
//well as testing magnifier and Tmagnifier. This driver requires and input
//file and will provide an output file for the results of testing. The input
//file should only contain positive integers, with the total number of integers
//being TESTNUM * 7.

#include "Tmagnifier.h"
#include "viralTransformer.h"
#include "accelerateTransformer.h"


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int TESTNUM = 3;
const string INFILE = "TextFile2.txt";
const string OUTFILE = "TextFile1.txt";

int main()
{

	//Prepare the input file
	ifstream infile(INFILE.c_str());

	//Prepare the output file
	ofstream outfile(OUTFILE.c_str());

	int num;		//General temp variable
	int num2;		//Second general temp variable
	int a;			//variable used in for loops


	if (outfile.is_open())
	{

		//Open Input File
		if (infile.is_open())
		{

			//Instantiate viralTransformer Array
			viralTransformer virArr[TESTNUM];
			for (a = 0; a < TESTNUM; a++)
			{
				infile >> num;
				viralTransformer virTemp(num);
				virArr[a] = virTemp;
			}


			outfile << "Testing collection of viralTransformer" << endl;
			for (a = 0; a < TESTNUM; a++)
			{
				num = 0;

				outfile << "viralTransformer " << a + 1 << ":" << endl;

				//Do Guesses
				//Guess from 0 and increment until correctly guessed
				while (virArr[a].getActive())
				{
					outfile << "Guess " << num << " gets: " << virArr[a].guess(num) << endl;
					num++;
				}

				//Display Stats
				outfile << endl << "Number of Guesses: " << virArr[a].getGuess() << endl;
				outfile << "Number of Low Guesses: " << virArr[a].getLow() << endl;
				outfile << "Number of High Guesses: " << virArr[a].getHigh() << endl;
				outfile << endl << endl;
			}


			//Instantiate accelerateTransformer Array
			accelerateTransformer accArr[TESTNUM];
			for (a = 0; a < TESTNUM; a++)
			{
				infile >> num;
				accelerateTransformer accTemp(num);
				accArr[a] = accTemp;
			}

			outfile << "Testing collection of accelerateTransformer" << endl;
			for (a = 0; a < TESTNUM; a++)
			{
				num = 0;

				outfile << "accelerateTransformer " << a + 1 << ":" << endl;

				//Do Guesses
				//Guess from 0 and increment until correctly guessed
				while (accArr[a].getActive())
				{
					outfile << "Guess " << num << " gets: " << accArr[a].guess(num) << endl;
					num++;
				}

				//Display Stats
				outfile << endl << "Number of Guesses: " << accArr[a].getGuess() << endl;
				outfile << "Number of Low Guesses: " << accArr[a].getLow() << endl;
				outfile << "Number of High Guesses: " << accArr[a].getHigh() << endl;
				outfile << endl << endl;
			}


			//Instantiate transformer Array
			transformer transArr[TESTNUM];
			for (a = 0; a < TESTNUM; a++)
			{
				infile >> num;
				transformer transTemp(num);
				transArr[a] = transTemp;
			}

			outfile << "Testing collection of transformer" << endl;
			for (a = 0; a < TESTNUM; a++)
			{
				num = 0;

				outfile << "transformer " << a + 1 << ":" << endl;

				//Do Guesses
				//Guess from 0 and increment until correctly guessed
				while (transArr[a].getActive())
				{
					outfile << "Guess " << num << " gets: " << transArr[a].guess(num) << endl;
					num++;
				}

				//Display Stats
				outfile << endl << "Number of Guesses: " << transArr[a].getGuess() << endl;
				outfile << "Number of Low Guesses: " << transArr[a].getLow() << endl;
				outfile << "Number of High Guesses: " << transArr[a].getHigh() << endl;
				outfile << endl << endl;
			}

			//Instantiate magnifier Array
			magnifier magArr[TESTNUM];
			for (a = 0; a < TESTNUM; a++)
			{
				infile >> num;
				infile >> num2;
				magnifier magTemp(num, num2);
				magArr[a] = magTemp;
			}


			outfile << "Testing collection of magnifier" << endl;
			for (a = 0; a < TESTNUM; a++)
			{

				outfile << "magnifier " << a + 1 << " returns: " 
					<< magArr[a].transform() << endl;

				outfile << "turning off magnifier " << a + 1 << endl;
				magArr[a].turnOff();

				outfile << "returns " << magArr[a].transform() 
					<< " when off" << endl << endl;

			}

			//Instantiate Tmagnifier Array
			Tmagnifier tmagArr[TESTNUM];
			for (a = 0; a < TESTNUM; a++)
			{
				infile >> num;
				infile >> num2;
				Tmagnifier tmagTemp(num, num2);
				tmagArr[a] = tmagTemp;
			}


			outfile << "Testing collection of Tmagnifier" << endl;
			for (a = 0; a < TESTNUM; a++)
			{
				num = 0;

				outfile << "Tmagnifier " << a + 1 << ":" << endl;

				//Do Guesses
				//Guess from 0 and increment until correctly guessed
				while (tmagArr[a].getActive())
				{
					outfile << "Guess " << num << " gets: " << tmagArr[a].guess(num) << endl;
					num++;
				}

				//Display Stats
				outfile << endl << "Number of Guesses: " << tmagArr[a].getGuess() << endl;
				outfile << "Number of Low Guesses: " << tmagArr[a].getLow() << endl;
				outfile << "Number of High Guesses: " << tmagArr[a].getHigh() << endl;
				outfile << endl << endl;

			}



			infile.close();
		}

		outfile.close();
	}

}