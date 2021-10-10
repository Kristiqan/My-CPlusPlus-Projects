
#include "Tennis Player.h"

#include <iostream>

TennisPlayer::TennisPlayer()
{
	currentWorldRanking = 0;
}

TennisPlayer::TennisPlayer( const char* name, int annualSalary, int currentWorldRanking) :Athlete(name,annualSalary)
{
	this->currentWorldRanking = currentWorldRanking;
}

int TennisPlayer::getCurrentWorldRanking()
{
	return currentWorldRanking;
}

void TennisPlayer::setCurrnetWorldRanking(int currentWorldRanking)
{
	this->currentWorldRanking = currentWorldRanking;
}

void TennisPlayer::Print()
{
	std::cout << "Current World Ranking: " << currentWorldRanking << std::endl;
	Athlete::Print();
}

