
/*
 * Name: Walter Thompson
 * Date Submitted:2/17/17
 * Lab Section:001
 * Assignment Name: Lab04
 */

/*
 *	This program is a linked list with implementations of some of the common 
 *	functions used with a linked list. The values given to the list are inserted
 *	in descending order.
 *
 */
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

//This class represents a linked list of node objects 
//that are sorted in descending order.
//Do not modify anything in the class interface
template <class T>
class List{

 private:
  Node<T> * start; //pointer to the first node in this list
  Node<T> * end;   //pointer to the last node in this list
  int mySize;  //size (or length) of this list

 public:
  List();
  ~List();
  int size(); 
  bool empty();
  void insert(T); 
  bool contains(T);
  //Print the name and this list's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    cout << name << ": ";   
    cout << "size = " << size();   
    cout << ", values = ";
    Node<T> * iterator = start;
    while(iterator != NULL){
      cout << iterator->value << ' ';
      iterator = iterator->next; 
    }
    cout << endl;
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below

//Construct an empty list by initializig this list's instance variables
template <class T>
List<T>::List(){
	mySize=0;
	start=NULL;
	end=NULL;
	
}

//Destroy all nodes in this list to prevent memory leaks
template <class T>
List<T>::~List(){

	while(start!=nullptr)
	{
		Node<T> *hold = start->next;
		delete start;
		start = hold;
	}
}

//Return the size of this list
template <class T>
int List<T>::size(){

	return mySize;
}

//Return true if this list is empty
//Otherwise, return false
template <class T>
bool List<T>::empty(){
		
	if(start == NULL)
			return true;
	return false;
}

//Create a new node with value, and insert that new node 
//into this list in its correct position such that
//the values of the nodes in this list are sorted in descending order
template <class T>
void List<T>::insert(T value){

	Node<T> *newnode = new Node<T>(value);
	Node<T> *curr = start; //iterator to traverse the list

	if(start == NULL) //empty list case
	{
		start=newnode;
		end=newnode;
		mySize++;
		//newnode->next = start;
		//start = newnode;
	}
	else
	{
		if(value > start->value) //insert at the front of the list
		{
			newnode->next = start;
			start = newnode;
			//start->next=newnode;
			//start=newnode;
			mySize++;	
			return;
		}
		else if(value <= end->value)	//insert at the end of the list
		{
			end->next=newnode;
			end=newnode;
			mySize++;
			return;
		}
		while(curr->next != NULL)
		{
			if(value > curr-> next->value)
			{
				newnode->next = curr->next;
				curr->next= newnode;
				mySize++;
				return;
			}
			curr=curr->next;	
		}
	}

}


//Return true if this list contains a node whose value is equal to the key
//Otherwise, return false
template <class T>
bool List<T>::contains(T key){

	Node<T> *curr=start;
	
	while(curr!=NULL)
	{
		if(curr->value==key)
		{
			return true;
		}
		else
		{
			curr=curr->next;
		}
	}
	return false;
}

#endif

