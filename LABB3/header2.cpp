#include "header2.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


void merge(std::string filename1, std::string filename2, std::string output)
{


	std::ifstream infile1; // hämtar från en fil
	std::ifstream infile2; // hämtar från en fil

	std::ofstream outfile; // tillägger till en annan fil 



	infile1.open(filename1);
	infile2.open(filename2);
	//infile.open(output); 

	outfile.open(output); // Öppnar nyanmn.txt



	int a, b, c;

	infile1 >> a; //A
	infile2 >> b;  //B



	while (!infile1.eof() && !infile2.eof())

	{


		if (a < b)
		{
			outfile << a << " "; //spara det som finns a till outfile(c)
			infile1 >> a; //läs in ett nytt värde till a från (A (infile1))
		}

		else
		{
			outfile << b << " ";
			infile2 >> b;


		}



	}

	while (!infile1.eof()) //a
	{

		outfile << a << " ";
		infile1 >> a;

	}
	while (!infile2.eof()) //b
	{

		outfile << b << " ";
		infile2 >> b;

	}

	infile1.close();
	infile2.close();
	outfile.close();



}



//Implementation