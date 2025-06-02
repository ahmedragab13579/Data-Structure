#pragma once
#include <iostream>
#include "D:\my_c++\DataStructureProject\DataStructureProject\CLSMYstack.h"
using namespace std;
template <class T>
class CLSMyString
{
protected:
	CLSMYstack<string> stackUn;
	CLSMYstack<string> stackRn;
	string Value;
public: 
	void setvalue(string value)
	{
		stackUn.Push(Value);
		Value = value;
		while (!stackRn.IsEmpty())
			stackRn.pop();
	}
	string getvalue()
	{
		return Value;
	}
	__declspec(property(get = getvalue, put = setvalue)) string Value;
	string Undo()
	{
		if (!stackUn.IsEmpty())
		{
			stackRn.Push(Value);
			Value = stackUn.Top();
			stackUn.pop();
			return Value;


		}
		else
			return " ";
	}
	string Rndo()
	{

		if (!stackRn.IsEmpty())
		{
			stackUn.Push(Value);
			Value = stackRn.Top();
			stackRn.pop();
			return Value;

		}
		else
			return " ";
	}

	
};

