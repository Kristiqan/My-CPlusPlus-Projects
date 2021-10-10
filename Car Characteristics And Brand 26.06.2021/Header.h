#pragma once


class Vehicle 
{

private:
	int wheels;
	double weight;

public:

	void Print();
	Vehicle(const int VehicleWheels, double VehicleWeight);
	Vehicle();
};
//---------------------------------------------------------------
class Car
{
private:
	char* brand;
	int passengerSeats;
	void copyFrom(const Car& other);
	void Free();

public:
	Car();
	Car(const Car& other);
	Car(const char* carBrand, int carPassengerSeats);
	Car operator=(const Car& other);
	~Car();
	void Print();
};