#include <iostream>  
#include <string>    
#include "Stack.h"
using namespace std;

//Print a stack
template<class T>
void printStack(Stack<T> & s, string name){
  cout << name << ": ";
  cout << "size = " << s.size();
  cout << ", stack = (top) ";
  while( !s.empty() ){
    cout << s.top() << " ";
    //Uncomment the line below to view memory addresses
    //cout << (unsigned long) &s.top() << " ";
    s.pop();
  }
  cout << "(bottom)" << endl;
}

//Test the Stack class in Stack.h
int main( ){

  Stack<int> s1;
  for(int i = 1; i < 30; i++){
    s1.push(i);
    if(i % 3 == 0){
      s1.pop();
      s1.pop();
    }
  }
  printStack<int>(s1, "s1");
  printStack<int>(s1, "s1");

  Stack<char> s2;
  int i = 1;
  for(char c = 'a'; c <= 'z'; c++, i++){
    if(i % 4 == 0){
      s2.push('#');
    }
    else{
      s2.push(c);
    }
    if(i % 6 == 0){
      s2.pop();
      s2.pop();
    }
  }
  printStack<char>(s2, "s2");
  printStack<char>(s2, "s2");

  Stack<double> s3;
  for(double k = 1; k <= 1000000; k++){
    double value = 0.5 * k;
    s3.push(value);
  }
  for(double k = 1; k <= 1000000 - 6; k++){
    s3.pop();
  }
  printStack<double>(s3, "s3");
  printStack<double>(s3, "s3");

  return 0;
}

