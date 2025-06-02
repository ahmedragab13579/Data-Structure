#pragma once
#include <iostream>
#include"D:\my_c++\DataStructureProject\DataStructureProject\CLSQUEEArr.h"
using namespace std;
template <class T>
class CLSSTACKArr:public CLSQUEEArr<T>
{

public:
	void Push(T value)
	{
		CLSQUEEArr<T>::arr.InsertAtBeginning(value);
	}

	T Top()
	{
		return CLSQUEEArr<T>::Front();
	}

	T Bottom()
	{
		return CLSQUEEArr<T>::Back();
	}




};

