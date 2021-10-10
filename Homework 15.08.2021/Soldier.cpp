
#include "Soldier.h"



void Soldier::CopyFrom(const Soldier& other)
{
	int len = strlen(other.name);
	this->name = new char[len + 1];
	strcpy(this->name, other.name);
	this->age = other.age;
	this->salary = other.salary;
	int len2 = strlen(other.combatSkills);
	this->combatSkills = new char[len2 + 1];
	strcpy(this->combatSkills, other.combatSkills);
}

void Soldier::Free()
{
	delete[] name;
	delete[] combatSkills;
}

Soldier::Soldier()
{
	name = nullptr;
	age = 0;
	salary = 0;
	combatSkills = nullptr;
}

Soldier::Soldier(const char* name, int age, double salary, const char* combatSkills)
{
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
	this->age = age;
	this->salary = salary;
	int len2 = strlen(combatSkills);
	this->combatSkills = new char[len2 + 1];
	strcpy(this->combatSkills, combatSkills);
}

Soldier::Soldier(const Soldier& other)
{
	CopyFrom(other);
}

Soldier& Soldier::operator=(const Soldier& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);

	}
	return *this;
}

Soldier::~Soldier()
{
	Free();
}

const char* Soldier::getName()
{
	return name;
}

int Soldier::getAge()
{
	return age;
}

double Soldier::getSalary()
{
	return salary;
}

const char* Soldier::getCombatSkills()
{
	return combatSkills;
}

void Soldier::setName(const char* name)
{
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

void Soldier::setAge(int age)
{
	this->age = age;
}

void Soldier::setSalary(double salary)
{
	this->salary = salary;
}

void Soldier::setCombatSkills(const char* combatSkills)
{
	int len = strlen(combatSkills);
	this->combatSkills = new char[len + 1];
	strcpy(this->combatSkills, combatSkills);
}

void Soldier::Print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Salary: " << salary << std::endl;
	std::cout << "CombatSkills: " << combatSkills << std::endl;
}







