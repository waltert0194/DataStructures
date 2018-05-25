#include <iostream>
#include <string>
#include "List.h"
#include "Node.h"
using namespace std;

//Tests the functions in List.h
int main(){

  List<int> list1;
  list1.print("list1");
  for(int i = 1, j = 1; i <= 10; i++){
    j = -2 * j;
    list1.insert(j);
    list1.print("list1");
  }

  List<string> list2;
  string s[] = {"Sisko", "Janeway", "Picard", "Kirk", "Zoey", "Frodo"};
  for(int i = 0; i < 6; i++) {
    list2.insert(s[i]);
    list2.print("list2");
  }
  if(!list2.contains("Worf")){
    cout << "Worf is not in list2 :(" << endl;
  }

  List<char> list3;
  char c[] = {'z', 'p', 'r', 'p', 'd', 'a', 'h', 'q', 'o'};
  for(int i = 0; i < 9; i++){
    list3.insert(c[i]);
    list3.print("list3");
  }
  if(list3.contains('r')){
    cout << "r is in list3" << endl;
  }
  
  
  return 0;
}

