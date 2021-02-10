/* Kinan Haj Rasheed
12-12-2020
DT028G
 Labb3 */
#include "header1.h"
#include "header2.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "header2.cpp" // ta bort de sen
#include "header1.cpp"


int main()
{
	std::cout << "is A1 sorted? " << std::boolalpha << sorted("A1") << std::endl;
	std::cout << "is A sorted? " << sorted("A") << std::endl;
	std::cout << "is B sorted? " << sorted("B") << std::endl;
	merge("A", "B", "C");

	return 0;
}
//använding av implementation
