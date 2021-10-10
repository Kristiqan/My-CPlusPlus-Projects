#pragma once
#include <iostream>


class Soldier
{
private:
	char* name;
	int age;
	double salary;
	char* combatSkills;
	void CopyFrom(const Soldier& other);
    void Free();

 public:
	 Soldier();
	 Soldier(const char* name, int age, double salary, const char* combatSkills);
	 Soldier(const Soldier& other);
	 Soldier& operator=(const Soldier& other);
	 ~Soldier();
	 const char* getName();
	 int getAge();
	 double getSalary();
	 const char* getCombatSkills();
	 void setName(const char* name);
	 void setAge(int age);
	 void setSalary(double salary);
	 void setCombatSkills(const char* combatSkills);
	 void Print();
};
