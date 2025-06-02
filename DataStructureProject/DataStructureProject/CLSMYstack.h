#pragma once
#include <iostream>
#include "CLSMYQuee.h"
using namespace std;

template <class T>

class CLSMYstack:protected CLSMYQuee<T>
{
public:
	void Push(T value)
	{
		CLSMYQuee<T>::_MyList.InsertAtBeginning(value);
	}
	
	T Top()
	{
		return CLSMYQuee:Front();
	}

	T Bottom()
	{
		return CLSMYQuee.Back();
	}
	
	
};

