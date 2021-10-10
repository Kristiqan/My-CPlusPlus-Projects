#pragma once
#include "Athlete.h"

class TennisPlayer : public  Athlete {

private:
	int currentWorldRanking;

public:
	TennisPlayer();
	TennisPlayer(const char* name, int annualSalary, int currentWorldRanking);
	int getCurrentWorldRanking();
	void setCurrnetWorldRanking(int currentWorldRanking);
	void Print();
	



};
