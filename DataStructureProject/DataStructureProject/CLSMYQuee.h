#pragma once
#include <iostream>
#include "CLS_DoubleLincedList.h"
using namespace std;
template <class T>
class CLSMYQuee
{
private:
    CLS_DoubleLincedList <T> _MyList;
public:
    class QUee
    {
	public:

		void push(T Item)
		{
			_MyList.InsertAtEnd(Item);
		}


		void pop()
		{
			_MyList.DeleteFirstNode();
		}

		void Print()
		{
			_MyList.PrintList();
		}

		int Size()
		{
			return _MyList.Size();
		}

		bool IsEmpty()
		{
			return _MyList.IsEmpty();
		}

		T front()
		{
			return _MyList.getvaluebyindex(0);
		}

		T back()
		{
			return _MyList.getvaluebyindex(Size() - 1);
		}
		
		T getitembyindex(int index)
		{
			return _MyList.getvaluebyindex(index);
		}
		T Reverse(int index)
		{
			return _MyList.Reverse(index);
		}
		T updatevaluebyindex(int index)
		{
			return _MyList.updatevaluebyindex(index);
		}
		T InsertAtBeginning(int index)
		{
			return _MyList.InsertAtBeginning(index);
		}
		T InsertAtEnd(int index)
		{
			return _MyList.InsertAtEnd(index);
		}
		T Clear(int index)
		{
			return _MyList.Clear();
		}

    };



};

