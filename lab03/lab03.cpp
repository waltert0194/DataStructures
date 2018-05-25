#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;

//Print the contents of v and its name to stdout
template<class T>
void printVector(const Vector<T> & v, string name){
  cout << name << ": ";
  cout << "size = " << v.size();
  cout << ", capacity = " << v.capacity();
  cout << ", objects = ";
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

//Test the Vector class in Vector.h
int main(){

  Vector<int> v0(5);
  for(int i = 0; i < v0.size(); i++) v0[i] = i + 1;
  printVector<int>(v0, "v0");
  v0.push_back(6);
  v0.push_back(7);
  printVector<int>(v0, "v0");
  int s = v0.size();
  for(int i = 0; i < s; i++) v0.pop_back();
  printVector<int>(v0, "v0");
  v0.insert(v0.begin(), 1);
  v0.insert(v0.begin() + 1, 4, 21);
  printVector<int>(v0, "v0");
  v0.erase(v0.begin());
  v0.erase(v0.end() - 1);
  printVector<int>(v0, "v0");  
  
  Vector<char> v1;
  for(char i = 'a'; i <= 'z'; i++) v1.push_back(i);
  Vector<char>::iterator i1 = v1.begin();
  v1.insert(i1 + 3, 'z');
  printVector<char>(v1, "v1"); 

  Vector<double> v2;
  for(double i = 1; i <= 1024; i *= 2) v2.push_back(i);
  printVector<double>(v2, "v2");

  Vector<double>::iterator it;
  it = v2.begin();
  it += 6;
  v2.insert(it, 7);
  v2.erase(v2.begin());
  v2.erase(v2.end() - 1);
  printVector<double>(v2, "v2");
    
  Vector<int> v3;
  v3.insert(v3.begin(), 1);
  v3.push_back(2);
  v3.insert(v3.begin(), 200 );  
  v3.insert(v3.begin(), 300 );
  v3.insert(v3.end() - 1, 400 );
  v3.reserve(2 * v3.capacity()); 
  v3.insert(v3.begin() + 2, 5, 13);
  printVector<int>(v3, "v3");

  Vector<string> v4;
  string str("zoey");
  for(int i = 1; i <= 10000; i++) v4.push_back(str + to_string(i));
  for(int i = 1; i <= 5000; i++) v4.pop_back();
  v4.erase(v4.begin() + 2, v4.end() - 3);
  printVector<string>(v4, "v4");
  
}

