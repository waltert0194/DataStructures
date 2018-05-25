/*
 * Name: Walter Thompson
 * Date Submitted: 2/10/17
 * Lab Section: 2
 * Assignment Name: lab03
 *
 */

#ifndef VECTOR_H
#define VECTOR_H

#include <algorithm>
#include <iostream>
using namespace std;

template <class Object>
class Vector{ 

 static const int SPARE_CAPACITY = 1;

 private:

  int theSize;
  int theCapacity;
  Object * objects;

 public:

  typedef Object * iterator;
  typedef const Object * const_iterator;

  explicit Vector( int initSize = 0 ) : theSize( initSize ),
    theCapacity( initSize + SPARE_CAPACITY ){
      objects = new Object[ theCapacity ];
  }

  Vector( const Vector & rhs ) : theSize( rhs.theSize ),
    theCapacity( rhs.theCapacity ), objects( nullptr ){
      objects = new Object[ theCapacity ];
      for( int k = 0; k < theSize; ++k )
        objects[ k ] = rhs.objects[ k ];
  }

  //Implement all of the functions below
  //Do not modify any function prototypes below

  Vector & operator= ( const Vector & rhs ){

		Vector copy = rhs;
		std::swap( *this, copy);
		return *this;
  }

  ~Vector(){ 

		delete [] objects;
  }

  Vector( Vector && rhs ) : theSize( rhs.theSize ),
    theCapacity( rhs.theCapacity ), objects( rhs.objects ){
		
		rhs.objects = nullptr;
		rhs.theSize = 0;
		rhs.theCapacity = 0;
  }

 //reference to a thing that is about to be destroyed
  Vector & operator= ( Vector && rhs ){
		
		std::swap( theSize, rhs.theSize );
		std::swap( theCapacity, rhs.theCapacity );
		std::swap( objects, rhs.objects );
		
		return *this;
  }
  //double the size of the vector
  void resize( int newSize ){

		if( newSize > theCapacity )
		{
			reserve( newSize * 2);	
		}
		theSize = newSize;
  }	
 
  void reserve( int newCapacity ){

		if(newCapacity < theSize)
		{
			return;
		}

		Object *newArray = new Object[newCapacity];
		for(int k = 0; k < theSize; ++k)
		{
			newArray[k] = move( objects[k]);
		}

		theCapacity = newCapacity;
		std::swap(objects, newArray);
		delete [] newArray;
		
  }

  Object & operator[]( int index ){ 

		return objects[index];
  }

  const Object & operator[]( int index ) const{ 

		return objects[index];
  }

  bool empty( ) const{ 
	
		return size() == 0;
  }
  //returns the size
  int size( ) const{ 
		
		return theSize;
  }
	//returns the capacity
  int capacity( ) const{ 

		return theCapacity;
  }

  void push_back( const Object & x ){

		if( theSize == theCapacity)
		{
			reserve(2 * theCapacity + 1);
		}
		objects[theSize++] = x;
  }

  void push_back( Object && x ){
		
		if( theSize == theCapacity)
		{
			reserve(2 * theCapacity + 1);
		}
		objects[theSize++] = std::move(x);		
  }

  void pop_back( ){

		--theSize;
  }

  const Object & back ( ) const{

		return objects[theSize - 1];
  }

  iterator begin( ){ 

		return &objects[0];
  }

  const_iterator begin( ) const{ 

		return &objects[0];	
  }

  iterator end( ){ 
		return &objects[size()];
  }

  const_iterator end( ) const{ 
		return &objects[size()];
  }

  void insert(const_iterator position, const Object & val){
	
	iterator i = (iterator) position;

	if( empty())
	{
		push_back(val);
	}

	else
	{
		long offset = end() - position;

		if( theSize == theCapacity)
		{
			reserve(2 * theCapacity);
		}

		theSize++;
		i = end() -1;
		if(theSize > 0)
		{
			//cout << "i = " << (long) i << "position
			for(long j = 1; j <= offset; j++){
				iter_swap(i, i-1);
				i--;
			}
			*i = val;
		}
	}
  }

  void insert(const_iterator position, int n, const Object & val){
	
		iterator i = (iterator) position;

		if( empty())
		{
			push_back(val);
		}

		else
		{
			long offset = end() - position;

			if( theSize == theCapacity)
			{
				reserve(2 * theCapacity);
			}

			theSize++;
			i = end() -1;
			if(theSize > 0)
			{
				//cout << "i = " << (long) i << "position
				for(long j = 1; j <= offset; j++)
				{
					iter_swap(i, i-1);
					i--;
				}
				*i = val;
		}
	}
  }

  void erase(const_iterator position){
		
		for(int i=0; i<size(); i++)
		{
			if(i==*position)
			{
				while(i<size())
				{
					objects[i]=objects[i+1];
					i++;
				}
			}
		}	
		pop_back();

}
  void erase(const_iterator first, const_iterator last){

	/*	iterator i = (iterator) first;
		long e = first - last;
		for(long j = 0; j < e; j++)
		{
			pop_back();		
			*i = *(last-1);
		}
	*/
		//for(const_iterator position = first; position != last;)
		//{
		//	position = erase(position);	
		//}
		
		//return last;
		
	}

};//end of Vector class

#endif

