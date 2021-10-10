#include "General.h"

General::General()
{
	count = 0;
}

General::General(const char* name, int age, double salary, const char* combatSkills, int count) : Soldier(name, age, salary, combatSkills)
{
	this->count = count;
}

int General::getCount()
{
	return count;
}

void General::setCount(int count)
{
	this->count = count;
}

void General::Print()
{
	Soldier::Print();
	std::cout << "Soldiers: " << count << std::endl;
}


