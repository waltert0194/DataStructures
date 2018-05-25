#include <iostream>  
#include <string>    
#include "Queue.h"
using namespace std;

//Print a Queue
template<class T>
void printQueue(Queue<T> & q, string name){
  cout << name << ": ";
  cout << "size = " << q.size();
  cout << ", queue = (front) ";
  while( !q.empty() ){
    cout << q.front() << " ";
    //Uncomment the line below to view memory addresses
    cout << (unsigned long) &q.front() << " ";
    q.dequeue();
  }
  cout << "(back)" << endl;
}

//Test the Queue class in Queue.h
int main( ){

  Queue<int> q1;
  for(int i = 1; i < 30; i++){
    q1.push(i);
    if(i % 3 == 0){
      q1.pop();
      q1.pop();
    }
  }
  printQueue<int>(q1, "q1");
  printQueue<int>(q1, "q1");

  Queue<char> q2;
  int i = 1;
  for(char c = 'a'; c <= 'z'; c++, i++){
    if(i % 3 == 0){
      char d = (char) (c - 32);
      q2.enqueue(d);
    }
    else{
      q2.enqueue(c);
    }
    if(i % 6 == 0){
      q2.dequeue();
      q2.dequeue();
    }
  }
  printQueue<char>(q2, "q2");
  printQueue<char>(q2, "q2");
  
  Queue<double> q3;
  for(double k = 1; k <= 1000000; k++){
    q3.push(k);
  }
  for(double k = 1; k <= 1000000 - 6; k++){
    q3.pop();
  }
  printQueue<double>(q3, "q3");
  printQueue<double>(q3, "q3");
  
  return 0;
}

