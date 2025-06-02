#pragma once
#include <iostream>
using namespace std;
class ticket
{
public:
	string Code;
	string Date;
	int Watedclients;
	int Servetime;

	ticket(string code,string date,int watedclients,int servetime)
	{
		Code = code;
		Date = date;
		Watedclients = watedclients;
		Servetime = servetime;
	}
};

