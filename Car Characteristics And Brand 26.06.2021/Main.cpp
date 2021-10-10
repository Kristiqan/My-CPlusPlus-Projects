#include <iostream>
#include "Header.h"

int main() 
{
	Vehicle MotorizedTricycle(3, 17.9);
	MotorizedTricycle.Print();
	std::cout << std::endl;


	Car Sportscar("Toyota Supra MK4", 2);
	Sportscar.Print();

	
	return 0;
}