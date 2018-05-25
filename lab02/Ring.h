/*
 * Name: Walter Thompson
 * Date Submitted: 2/1/2017
 * Lab Section: 1
 * Assignment Name: Lab02
 *
 */

#ifndef RING_H
#define RING_H

#include <iostream>
using namespace std;

/*
 * This class represents a ring (circular) data structure.
 * Do not modify anything in the Ring class definition (its interface).
 * You will implement the functions after the class definition.
 */
template <class T>
class Ring{

 private:
  // Size of this ring
  int mySize;
  // Index to use for the add function
  int addIndex;
  // A pointer to the data (an array of T objects) stored by this ring 
  T * data;

 public:
  /*
   * Constructor that initializes mySize to initialSize,
   * endIndex to 0, and data to a new T array.  The
   * size of data should be equal to mySize.
   * The default of initialSize is 0.
   */
  explicit Ring(int initialSize);
   
  /*
   * Destructor that uses the deallocates memory properly to ensure
   * that a memory leak will not occur with this object.
   */
  ~Ring();
  
  /*
   * Return the T object at the specified index mod mySize in this ring.
   * Assume index >= 0.  This function should always works when index >= 0.
   */
  const T & operator[](int index);

  /*
   * Places obj in the addIndex of data (adds obj to the ring), 
   * and updates addIndex appropriately.  addIndex should be incremented 
   * by one each time an obj is added to this ring.  
   * When addIndex exceeds the last index of data, then addIndex 
   * should be set to 0.  
   */
  void add(T obj);

  /*
   *  Return the size of this ring.
   */
  int size();

  /*
   * Print to standard output, the contents
   * of this ring.
   */
  void print();

};// end of Ring class definition (it's interface)

//You can modify the code below to implement the functions in this class

// Implement the constructor below
// You must use the new operator in your implementation
template <class T>
Ring<T>::Ring(int initialSize = 0){

	mySize=initialSize;
	addIndex=0;
	data = new T[mySize];
}

// Destructor to ensure that there will be no
// memory leaks associated with this Ring object
template <class T>
Ring<T>::~Ring(){

	delete [] data;
}

// Overload operator that returns the T object at
// the specified index mod mySize in this ring.
template <class T>
const T & Ring<T>::operator[](int index){
	
	return data[index % mySize];
	
}

//	Places obj in the addIndex of data (adds obj to the ring), 
// and updates addIndex.
template <class T>
void Ring<T>::add(T obj){
		
	data[addIndex % mySize]=obj;
	addIndex++;
}

//Returns the size of the ring
template <class T>
int Ring<T>::size(){

	return mySize;
}

//Prints the results
template <class T>
void Ring<T>::print(){
  for(int i = 0; i < mySize; i++){
    cout << data[i] << endl;
  }
}

#endif
