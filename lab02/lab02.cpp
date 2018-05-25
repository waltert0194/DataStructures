#include <iostream>
#include "Ring.h"
using namespace std;

//Tests the Ring class
int main(void){
  cout << "Test 1 - An empty ring of doubles\n";
  Ring<double> r1;
  cout << "r1's size is " << r1.size() << endl << endl;
 
  cout << "Test 2 - A ring that can hold 5 integers\n";
  Ring<int> r2(5);
  cout << "Adding 0,1,2,3,4 to the ring\n";
  for(int i = 0; i < 5; i++){
    r2.add(i);
  }
  r2.print();
  cout << "Add 6 and 7 to the ring,\n"; 
  cout << "and they will replace the first two elements of the ring.\n";
  cout << "Also, the ring still contains the last three items\n";
  r2.add(6);
  r2.add(7);
  r2.print();
  cout << endl;

  cout << "Test 3 - A ring that can hold a playlist of 3 songs (as strings) \n";
  Ring<string> r3(3);
  cout << "Adding 3 songs to the ring\n";
  r3.add("Roar");
  r3.add("Happy");
  r3.add("Eye of the Tiger");
  r3.print();
  cout << "Playlist is full, and two new songs are added\n";
  r3.add("Lucy in the sky with diamonds");
  r3.add("Hello");
  r3.print();
  cout << "r3[13] = " << r3[13] << endl;
  cout << endl;

  cout << "Test 4 - A ring that can hold 6 integers \n";
  Ring<int> * r4 = new Ring<int>(6);
  cout << "Adding 0,1,2,...,15 to the ring\n";
  for(int i = 0; i <= 15; i++) {
    r4->add(i);
  }
  r4->print();

  delete r4;  //Why should we delete r4, but not r1, r2, or r3?

  return 0;
}

