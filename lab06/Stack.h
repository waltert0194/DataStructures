/*
 * Name: Walter Thompson
 * Date Submitted: 2/27/17
 * Lab Section: 2
 * Assignment Name: lab06
 *
 */

/*
 *	The purpose of this program is to implement a stack 
 *	using the vector in the standard library.
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack{

	private:
			 vector<T> *data;

	public:

	//constructs an empty stack
	Stack(){

		data = new vector<T>;

	}

	//deallocate memory to prevent leaks
	~Stack(){

		delete data;

	}

	//returns the size of the stack
	int size(){

		return data->size();

	}

	//returns true if the stack is empty and false otherwise
	bool empty(){

		return data->empty();

	}	

	//adds a value to the top of the stack
	void push(T value){

		data->push_back(value);

	}		 

	// removes the element at the top of the stack
	void pop(){

		data->erase(data->end()-1);

	}	

	//returns a reference to the element at the top of the stack
	T & top(){

			return data->back();	
	}
};
