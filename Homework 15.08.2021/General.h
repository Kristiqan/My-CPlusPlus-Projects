#pragma once
#include "Soldier.h"


class General : public Soldier
{
private:
	int count;
public:
	General();
	General(const char* name, int age, double salary, const char* combatSkills, int count);
	int getCount();
	void setCount(int count);
	void Print();
};
