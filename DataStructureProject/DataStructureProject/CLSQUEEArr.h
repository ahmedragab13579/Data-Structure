#pragma once
#include <iostream>
#include "D:\my_c++\DataStructureProject\DataStructureProject\CLSDinamicArray.h"
using namespace std;
template <class T>
class CLSQUEEArr
{
protected:
	CLSDinamicArray <T> arr;
public:
	void push(T Item)
	{
		arr.InsertAtEnd(Item);
	}


	void pop()
	{
		arr.DeleteFirstItem();
	}

	void Print()
	{
		for (int i = 0; i < Size(); i++)
			cout << arr.GetItem(i) << " ";
		cout << endl;
	}

	int Size()
	{
		return arr.Size();
	}

	bool IsEmpty()
	{
		return arr.IsEmpty();
	}

	T front()
	{
		return arr.GetItem(0);
	}

	T back()
	{
	   return arr.GetItem(Size() - 1);
	}

	T getitembyindex(int index)
	{
		return arr.GetItem(index);
	}
	
	void Reverse()
	{
		 arr.Reverse();
	}
	
	bool updatevaluebyindex(int index,T value)
	{
		return arr.SetItem(index, value);
	}
	
	bool InsertAtBeginning(T value)
	{
		return arr.InsertAtBegining(value);

	}
	
	bool InsertAtEnd(T value)
	{
		return arr.InsertAtEnd(value);
	}
	
	void Clear()
	{
		 arr.Clear();
	}



};

