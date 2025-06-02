#pragma once
#include <iostream>
using namespace std;


template <class T>
class CLS_DoubleLincedList
{
protected:
    int _Size;
public:

    class Node
    {

    public:
        T value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;

    void InsertAtBeginning(T value)
    {


        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;

        _Size++;
    }

    void PrintList()

    {
        Node* Current = head;

        while (Current != NULL) {
            cout << Current->value << " ";
            Current = Current->next;
        }
        cout << "\n";


    }

    Node* Find(T Value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == Value)
                return Current;

            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* current, T value) {


        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;

        _Size++;

    }

    void InsertAtEnd(T value) {

       


        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }

        _Size++;

    }

    void DeleteNode(Node*& NodeToDelete) {

        if (head == NULL || NodeToDelete == NULL) {
            return;
        }
        if (head == NodeToDelete) {
            head = NodeToDelete->next;
        }
        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }
        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }
        delete NodeToDelete;
        if(_Size>0)
            _Size--;


    }

    void DeleteFirstNode()
    {


        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        if (_Size > 0)
            _Size--;
    }

    void DeleteLastNode() {

       

        if (head == NULL) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;
        if (_Size > 0)
            _Size--;
    }

    int Size()
    {
        return _Size;
    }
    
    bool IsEmpty()
    {
        return(_Size == 0 ? true : false);
    }
  
    bool Clear()
    {
        while (_Size>0)
        {
            DeleteFirstNode();
        }
    }


    void Reverse()
    {
        Node* current = head;
        Node* temp = NULL;
        if (_Size == 0)
            return;
        while (current!= NULL)
        {
            temp = current->next;
            current->next = current->prev;
            current->prev = temp;
            current = current->prev;
        }
        if (temp != NULL)
            head = temp->prev;
    }

    Node* getnodebyindex(int index)
    {
        if (_Size == 0 || index>=_Size)
            return NULL;
        Node* current = head;
        int loops = index;

        while (loops>0&&current != NULL)
        {
            loops -= 1;
            current = current->next;
        }
        return current;
    }
     
    
    T getvaluebyindex(int index)
    {
        Node* current = getnodebyindex(index);
        if (current == NULL)
            return NULL;
        return current->value;
    }
    
    bool updatevaluebyindex(int index,T new_value)
    {
        Node* current = getnodebyindex(index);
        if (current == NULL)
            return false;
        current->value=new_value;
        return true;
    }

    bool InsertAfter(int index, T value)
    {
        Node* current = getnodebyindex(index);
        if (current != NULL)
        {
            InsertAfter(current, new_value);
            return true;

        }
        return false;
    }


};
