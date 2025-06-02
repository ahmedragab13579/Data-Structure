#pragma once
#include <iostream>
#include "CLSMYQuee.h"
using namespace std;
template <class T>
class CLSDinamicArray
{
protected:
	int _Size;
	T* thisarray;
public:
	CLSDinamicArray(int size=0)
	{
		if (size < 0)
			size = 0;
		_Size = size;
		thisarray = new T[_Size];

	}
	~CLSDinamicArray()
	{
		delete[] thisarray;
	}
	bool SetItem(int index,T value)
	{
		if (index >= _Size || index<0)
			return false;
		thisarray[index] = value;
		return true;

	}
	bool IsEmpty()
	{
		
		return (_Size==0?true:false);

	}
	void Resize(int NewSize)
	{
		if (NewSize !=0)
		{
			int minsize = (NewSize < _Size ? NewSize : _Size);
			T* temp = new T[NewSize];
			for (int i=0; i < minsize; i++)
			{
				temp[i] = thisarray[i];
			}
			delete[] thisarray;
			thisarray = temp;
		}
		
		_Size = NewSize;
	}
	T GetItem(int index)
	{
		if (index < 0 || index >= _Size)
			return T();
		return thisarray[index];
	}
	void Clear()
	{
		delete[] thisarray;
		_Size = 0;
		thisarray = new T[0];
	}
	void Reverse()
	{
		T* temp = new T[_Size];
		for (int i = 0; i < _Size; i++)
		{
			temp[i] = thisarray[_Size - 1 - i];
		}
		delete[] thisarray;
		thisarray = temp;

		
	}
	bool DeleteItemInIndex(int index)
	{
		if (index < 0 || index >= _Size)
			return false;
		
		T* temp = new T[_Size-1];
		int c = 0;
		for (int i = 0; i < _Size; i++)
		{
			if(i!=index)
			{
				temp[c] = thisarray[i];
				c++;
			}

		}
		delete[] thisarray;
		thisarray = temp;
		_Size--;
		return true;

	}
	void DeleteFirstItem(int index)
	{
		DeleteItemInIndex(0);
	}
	void DeleteLastItem(int index)
	{
		DeleteItemInIndex(_Size - 1);
	}
	T Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (thisarray[i] == value)
			{
				return i;
			}

		}
		return -1;
	}
	bool DeleteItemInValue(T value)
	{
		int i = Find(value);
		if (i != -1)
		{
			DeleteItemInIndex(i);
			return true;
		}
		else
			return false;
	}
	bool InsertAt(int index, T value) {

		if (index > _Size || index < 0)
		{
			return false;
		}

		_Size++;

		T*_TempArray = new T[_Size];

		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = thisarray[i];
		}

		_TempArray[index] = value;

		for (int i = index; i < _Size - 1; i++)
		{
			_TempArray[i + 1] = thisarray[i];
		}

		delete[] thisarray;
		thisarray = _TempArray;
		return true;

	}
	bool InsertAt2(int index, T value) {
		if (index > _Size || index < 0)
			return false;

		T* temp = new T[_Size + 1];

		for (int i = 0; i <= _Size; i++) {
			if (i < index)
				temp[i] = thisarray[i];
			else if (i == index)
				temp[i] = value;
			else
				temp[i] = thisarray[i - 1];
		}

		delete[] thisarray;
		thisarray = temp;
		_Size++;

		return true;
	}
	bool  InsertAtBegining( T value)
	{
		return InsertAt(0, value);
	}
	bool  InsertAtEnd(T value)
	{
		return InsertAt(_Size, value);

	}
	bool InsertBefore(int  index, T value)
	{
		if (index < 1)
			return InsertAtBegining(value);
		else
			return InsertAt(index - 1, value);

	}
	bool InsertAfter(int index, T value)
	{
		if (index >= _Size-1)
			return InsertAtEnd( value);
		else
			return InsertAt(index + 1, value);

	}
	int Size()
	{
		return _Size;
	}

};


