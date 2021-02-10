
#include "header1.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


bool sorted(std::string filename)
{

	std::ifstream infile; // hämtar från en fil

	infile.open(filename);

	int a, b;

	infile >> a;


	while (!infile.eof())

	{
		infile >> b;


		if (a > b)
		{


			return false;

		}

		a = b;

	}

	infile.close();


	return true;


}
//Implementation