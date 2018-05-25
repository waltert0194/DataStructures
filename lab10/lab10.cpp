/*
 * Name: Walter Thompson
 * Date Submitted: 4/5/17
 * Lab Section: 1
 * Assignment Name: lab10
 *
 */


/*
 * The purpose of this lab is to implement serveral common 
 * set theory functions using the C++ STL.
 *
 */

#include <iostream>
#include <string>
#include <set>
using namespace std;

//Print the set A and its label to stdout
//  This function is already implemented (do not change).
template<class T>
void printSet(const set<T> &A, const string label);

//Print the set A and its label to stdout
//  This function is already implemented (do not change).
template<class T>
void printSet(const set<pair<T, T>> &A, const string label);

//Return true if A contains the member x;
// otherwise, return false.
template<class T>
bool contains(const set<T> &A, const T &x);

//Return the union of A and B
//  Unfortunately, we can't name this function union.  Why?
template<class T>
set<T> setUnion(const set<T> &A, const set<T> &B);

//Return the intersection of A and B
template<class T>
set<T> intersection(const set<T> &A, const set<T> &B);

//Return A - B, the difference of sets A and B
template<class T>
set<T> difference(const set<T> &A, const set<T> &B);

//Return A x B, the Cartesian product of A and B.

template<class T>
set<pair<T,T>> cartesianProduct(const set<T> &A, const set<T> &B);

//Return true if A is a subset of B;
// otherwise, return false.
template<class T>
bool subset(const set<T> &A, const set<T> &B);

//Return true if A is a proper subset of B;
// otherwise, return false.
template<class T>
bool properSubset(const set<T> &A, const set<T> &B);

//Test the various set theory functions
int main(){
  int a[] = {1, 2, 3, 4, 5, 6};
  set<int> A(a, a + 6);
  printSet<int>(A, "A");
  cout << "contains<int>(A, 3) = " << contains<int>(A, 3) << endl;
  cout << "contains<int>(A, 12) = " << contains<int>(A, 12) << endl;
  int b[] = {2, 4, 6, 8, 10, 12, 14, 16};
  set<int> B(b, b + 8);
  printSet<int>(B, "B");
  set<int> result = setUnion(A, B);  
  printSet<int>(result, "A union B");
  result = intersection(A, B);
  printSet<int>(result, "A intersect B");
  result = difference(A, B);
  printSet<int>(result, "A - B");
  result = difference(B, A);
  printSet<int>(result, "B - A");
  set<pair<int, int>> cartesianResult = cartesianProduct<int>(A, B);
  printSet<int>(cartesianResult, "A x B");
  cout << "|A x B| = " << cartesianResult.size() << endl;

  int c[] = {1, 2, 3};
  set<int> C(c, c + 3);
  printSet<int>(C, "C");
  cout << "A subset A = " << subset<int>(A, A) << endl;
  cout << "A proper subset A = " << properSubset<int>(A, A) << endl;
  cout << "A subset B = " << subset<int>(A, B) << endl;
  cout << "A subset C = " << subset<int>(A, C) << endl;
  cout << "C subset A = " << subset<int>(C, A) << endl;
  cout << "C proper subset A = " << properSubset<int>(C, A) << endl;
  cout << endl;

  string d[] = {"Lannister", "Stark", "Bolton", "Targaryen", "Tully", "Frey"};
  set<string> D(d, d + 6);
  printSet<string>(D, "D");
  set<string> E;
  printSet<string>(E, "E");
  string f[] = {"Rogers", "Romanova", "Odinson", "Stark", "Banner"};
  set<string> F(f, f + 5);
  printSet<string>(F, "F");
  set<string> result2 = intersection<string>(D, F);
  printSet<string>(result2, "House in Game of Thrones that is also an Avenger's last name");
  result2 = setUnion(D, E);
  printSet<string>(result2, "D union E");
  result2 = intersection(D, E);
  printSet<string>(result2, "D intersect E");
  cout << "E subset D = " << subset<string>(E, D) << endl;
  cout << "E proper subset D = " << properSubset<string>(E, D) << endl;
  cout << "E subset E = " << subset<string>(E, E) << endl;
  cout << "E proper subset E = " << properSubset<string>(E, E) << endl;
  printSet<string>(cartesianProduct<string>(E, F), "E x F");
  printSet<string>(cartesianProduct<string>(F, E), "F x E");
  printSet<string>(cartesianProduct<string>(D, F), "D x F");
  return 0;
}

//Print the set A and its label to stdout
//  This function is already implemented (do not change).
template<class T>
void printSet(const set<T> &A, const string label){
  cout << label << " = "; 
  for(T member : A){
    cout << member << " ";
  }
  cout << endl;
}

//Print the set A and its label to stdout
//  This function is already implemented (do not change).
template<class T>
void printSet(const set<pair<T, T>> &A, const string label){
  cout << label << " = "; 
  typename set<pair<T, T>>::iterator i;
  for (i = A.begin(); i != A.end(); i++){
    cout << "(" << (*i).first << ", " << (*i).second << ") ";
  }
  cout << endl;
}

//Implement all of the functions below

//Return true if A contains the member x;
// otherwise, return false.
template<class T>
bool contains(const set<T> &A, const T &x){
	
	typename set<T>:: iterator i;
	i = A.find(x);

	if(i != A.end())
   {
 		return true;
   }
   else
   {
   	return false;
   }
}

//Return the union of A and B
//  Unfortunately, we can't name this function union in C++.  Why?
template<class T>
set<T> setUnion(const set<T> &A, const set<T> &B){

	set<T> I = A;
	I.insert(B.begin(), B.end());
	return I;
}

//Return the intersection of A and B
template<class T>
set<T> intersection(const set<T> &A, const set<T> &B){

   set<T> I;
   for(T node : A)
   {
       if(contains(B, node))
       {
           I.insert(node);
       }
   }
	return I;
}

//Return A - B, the difference of sets A and B
template<class T>
set<T> difference(const set<T> &A, const set<T> &B){

   set<T> I;
   typename set<T>::iterator i;
   for(T node : A)
   {
        i=B.find(node);
        if(i==B.end())
        {
           I.insert(node);
        }
       
   }
	return I;
}

//Return A x B, the Cartesian product of A and B.
template<class T>
set<pair<T,T>> cartesianProduct(const set<T> &A, const set<T> &B){

	set<pair<T,T>> P;
	
   for(T i: A)
   {
       for(T j: B)
       {
          P.insert(pair<T,T>(i,j));
       }
 
   }	
   return P;
}

//Return true if A is a subset of B;
// otherwise, return false.
template<class T>
bool subset(const set<T> &A, const set<T> &B){

	typename set<T>::iterator i;
   int temp=true;
   for(T node: A)
   {    
   	i=B.find(node);
   	if(!contains(B, node))
		{
      	temp=false;
		}
   }
	return temp;
}

//Return true if A is a proper subset of B;
// otherwise, return false.
template<class T>
bool properSubset(const set<T> &A, const set<T> &B){

	typename set<T>::iterator i;
   int temp=true;
   for(T node: A)
   {    
   	i=B.find(node);
   	if(!contains(B, node))
		{
      	temp=false;
		}
		if(A==B)
			temp=false;
   }
	return temp;
}
