/*
 * Name: Walter Thompson
 * Date Submitted: 3/6/17
 * Lab Section: 1
 * Assignment Name: lab07
 *
 */

/*
 *	The purpose of this program is to implement a queue 
 *	using the list in the standard library.
 * 
 */

#include <iostream>
#include <list>
using namespace std;

template <class T>
class Queue{

	private:
			 list<T> *data;

	public:

	//constructs an empty queue
	Queue(){

		data = new list<T>;

	}

	//deallocate memory to prevent leaks
	~Queue(){

		delete data;

	}

	//returns the size of the queue
	int size(){

		return data->size();

	}

	//returns true if the queue is empty and false otherwise
	bool empty(){

		return data->empty();

	}	

	//adds a value to the back of the queue
	void push(T & value){

		data->push_back(value);

	}		 

	//adds a value to the back of the queue
	void enqueue(T & value){

		data->push_back(value);
	}

	//removes the element at the front of the queue
	void pop(){

		data->pop_front();

	}	

	//removes the element at the front of the queue
	void dequeue(){

		data->pop_front();
	}

	//return a reference to the element at the front of the queue
	T & front(){

			return data->front();	
	}
};
