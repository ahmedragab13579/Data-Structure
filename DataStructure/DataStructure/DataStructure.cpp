

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

//duple linked list//

//class Node
//{
//public :
//	int value;
//	Node * next;
//	Node * prev;
//
//};
//
//void insertAtBeginning(Node*& head, int value)
//{
//	Node* newhead = new Node();
//	newhead->prev = NULL;
//	newhead->value = value;
//	newhead->next = head;
//	if (head != NULL)
//	{
//		head->prev = newhead;
//	}
//	head = newhead;
//
//
//}
//
//Node* find(Node* head, int Value)
//    {
//        Node* current = head;
//        while (current != NULL) {
//            if (current->value == Value)
//                return current;
//            current = current->next;
//        }
//
//        return NULL;
//    }
//
//void insertinafter(Node*& prev_node, int valueadd)
//{
//	if (prev_node == NULL) 
//	
//	{
//		cout << "the given previous node cannot be NULL";
//		return;
//
//	}
//	Node* newnode = new Node();
//	newnode->value = valueadd;
//	newnode->prev = prev_node;
//	newnode->next = prev_node->next;
//	
//	if(prev_node->next!=NULL)
//	{
//		prev_node->next->prev = newnode;
//	}
//		prev_node->next = newnode;
//
//
//
//}
//
//void insertinlast(Node*& head, int value)
//{
//	Node* new_tail = new Node();
//	    new_tail->value = value;
//	    new_tail->next = NULL;
//	    Node* current = head;
//	    if (head == NULL)
//	    {
//			new_tail->prev = NULL;
//	        head = new_tail;
//	        return;
//	    }
//	    while (current->next != NULL) {
//	        {
//	            current = current->next;
//	        }
//	    }
//	    new_tail->prev = current;
//	    current->next = new_tail;
//}
//
//void DeleteNode(Node*& head, Node*& NodeToDelete) 
//{
//
//
//	if (head == NULL || NodeToDelete == NULL) {
//		return;
//	}
//	if (head == NodeToDelete) {
//		head = NodeToDelete->next;
//		head->prev = NULL;
//	}
//	if (NodeToDelete->next != NULL) {
//		NodeToDelete->next->prev = NodeToDelete->prev;
//	}
//	if (NodeToDelete->prev != NULL) {
//		NodeToDelete->prev->next = NodeToDelete->next;
//	}
//	delete NodeToDelete;
//}
//
//void DeletefirstNode(Node*& head)
//{
//
//	if (head == NULL) 
//	{
//		return;
//	}
//	if (head->next == NULL) 
//	{
//		delete head;
//		head = NULL;
//		return;
//	}
//	head = head->next;
//	head->prev = NULL;
//
//}
//
//void DeleteLastNode(Node*& head) {
//
//	/*
//		1-Traverse the list to find the last node.
//		2-Set the next pointer of the second-to-last node to NULL.
//		3-Delete the last node.
//	*/
//
//	if (head == NULL) {
//		return;
//	}
//	if (head->next == NULL) {
//		delete head;
//		head = NULL;
//		return;
//	}
//	Node* current = head;
//	while (current->next->next != NULL) {
//		current = current->next;
//	}
//	Node* temp = current->next;
//	current->next = NULL;
//	delete temp;
//}
//
//
//




//linked list//

//class Node
//{
//public :
//	int value;
//	Node * next;
//
//
//
//};
//
//
//void insertinfirst(Node*&head,int value)
//{
//    Node* new_header = NULL;
//    new_header = new Node ();
//    new_header->next = head;
//    new_header->value = value;
//    head = new_header;
//
//
//}
//
//void insertinlast(Node*&head,int value)
//{
//    Node* new_tail = new Node();
//    new_tail->value = value;
//    new_tail->next = NULL;
//    Node* current = head;
//    if (head == NULL)
//    {
//        head = new_tail;
//        return;
//    }
//    while (current->next != NULL) {
//        {
//            current = current->next;
//        }
//    }
//    current->next = new_tail;
//
//
//}
//
//void deletenode(Node*& head, int value)
//{
//   
//    Node* current = head;
//    Node* brevnodecurrent = head;
//    if (head == NULL)
//    {
//        return;
//    }
//    if (head->value == value)
//    {
//        head = current->next;
//        delete current;
//        return;
//    }
//
//    while ( current != NULL && current->value !=value)
//    {
//        brevnodecurrent = current;
//        current = current->next;
//    }
//    if (current == NULL || current->value != value)
//        return;
//    brevnodecurrent->next = current->next;
//    delete current;
//
//}
//
//void deletelastnode(Node*& head)
//{
//   
//    Node* current = head;
//    Node* prevcurrent;
//    if (head == NULL)
//    {
//        return;
//    }
//    if (head->next == NULL)
//    {
//        head=NULL;
//        delete current;
//        return;
//    }
//    while (current !=NULL&&current->next != NULL)
//    {
//        prevcurrent = current;
//        current = current->next;
//    }
//    prevcurrent->next = NULL;
//    delete current;
//
//}
//
//void deletefirstnode(Node*& head)
//{
//    if (head == NULL)
//    {
//        return;
//    }
//    Node* temp = head;
//    head = temp->next;
//    delete temp;
//    return;
//
//}
//
//Node* find(Node * head, int Value)
//    {
//        Node* current = head;
//        while (current != NULL) {
//            if (current->value == Value)
//                return current;
//            current = current->next;
//        }
//
//        return NULL;
//    }
//
//void PrintList(Node * &head)
//
//    {
//        while (head != NULL) {
//            cout << head->value << " ";
//            head = head->next;
//        }
//    }
//
//void insertinafter(Node* & prev_node, int valueadd)
//{
//    if (prev_node == NULL) {
//        cout << "the given previous node cannot be NULL";
//        return;
//    }
//
//    Node* new_node = new Node();
//    new_node->value = valueadd;
//    new_node->next = prev_node->next;
//    prev_node->next = new_node;
//
//}
//

#include <iostream>
#include <map>


using namespace std;

//map//

//int main() {
//    // Declare a map with string keys and int values
//    map<string, int> studentGrades;
//
//
//    // Inserting grades for three students
//    studentGrades["Ali"] = 77;     // Assigning a grade of 77 to the student "Ali"
//    studentGrades["Ahmed"] = 85;   // Assigning a grade of 85 to the student "Ahmed"
//    studentGrades["Fadi"] = 95;    // Assigning a grade of 95 to the student "Fadi"
//
//
//    // Printing all map values
//    cout << "\nPrinting all map values..\n\n";
//
//    // Iterating over the map
//    for (const auto& pair : studentGrades) {
//        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
//    }
//
//
//    // Finding the grade for a specific student
//    string studentName = "Fadi";
//    if (studentGrades.find(studentName) != studentGrades.end()) {
//        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
//    }
//    else {
//        cout << "Grade not found for " << studentName << endl;
//    }
//
//
//    return 0;
//}





int main()

{
    
    system("pause>0");
    return 0;

}



