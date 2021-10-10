#include <iostream> 
#include "Athlete.h"

void Athlete::CopyFrom(const Athlete& other)
{
	int len = strlen(other.name);
	name = new char[len + 1];
	strcpy(name, other.name);
	annualSalary = other.annualSalary;
}

void Athlete::Free()
{
	delete[] name;
}

Athlete::Athlete()
{
	name = nullptr;
	annualSalary = 0;
}

Athlete::Athlete(const char* name, int annualSalary)
{
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
	this->annualSalary = annualSalary;
}

Athlete::Athlete(const Athlete& other)
{
	CopyFrom(other);
}

Athlete& Athlete::operator=(const Athlete& other) {
	
	if (this != &other) {

		Free();
		CopyFrom(other);


	}

	return*this;
}

Athlete::~Athlete()
{
	Free();
}

const char* Athlete::getName()
{
	return name;
}

int Athlete::getAnnualSalary()
{
	return annualSalary;
}

void Athlete::setName(const char* name)
{
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

void Athlete::setAnnualSalary(int annualsalary)
{
	this->annualSalary = annualSalary;
}

void Athlete::Print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "AnnualSalary: " << annualSalary << std::endl;

}

