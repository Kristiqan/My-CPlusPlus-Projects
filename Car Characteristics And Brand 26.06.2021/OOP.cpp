#include <iostream>
#include "Header.h"


void Vehicle::Print()
{
	std::cout << "Number Of Wheels = " << wheels << std::endl;
	std::cout << "Vehicle Weight = " << weight << std::endl;
}

Vehicle::Vehicle(const int VehicleWheels, double VehicleWeight)
{
	wheels = VehicleWheels;
	weight = VehicleWeight;
}

Vehicle::Vehicle()
{
	wheels = 0;
	weight = 0;
}
//------------------------------------------------------------------
void Car::copyFrom(const Car& other)
{
	int len = strlen(other.brand);
	brand = new char[len + 1];
	strcpy(brand, other.brand);
	passengerSeats = other.passengerSeats;
}

void Car::Free()
{
	delete[] brand;
}

Car::Car() {
	brand = nullptr;
	passengerSeats = 0;
}

Car::Car(const Car&  other)
{
	copyFrom(other);
}

Car::Car(const char* carBrand, int carPassengerSeats)
{
	int len = strlen(carBrand);
	brand = new char[len + 1];
	strcpy(brand, carBrand);
	passengerSeats = carPassengerSeats;
}

Car Car::operator=(const Car& other)
{
	if (this != &other)
	{
		Free();
		copyFrom(other);
	}
	return *this;
}

Car::~Car()
{
	Free();
}

void Car::Print()
{
	std::cout << "Car Brand: " << brand << std::endl;
	std::cout << "Number Of Seats: " << passengerSeats << std::endl;
}
