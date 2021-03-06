/*
 * Name: Walter Thompson
 * Date Submitted: 4/12/17
 * Lab Section: 1
 * Assignment Name: lab11
 *
 */


/*
 * The purpose of this lab is to implement heap sort in ascending and
 * descending order using a priority queue. This program also implements
 * a binary search tree sort in both ascending and descending order using
 * a multiset from the C++ STL.
 *
 */



#include <iostream>
#include <string>
#include <queue>          // priority_queue
#include <vector>        
#include <functional>     // greater
#include <set>            // multiset            
using namespace std;

//Sorts v in ascending order.
// This fuction must use a priority_queue that uses a min heap.
void heapSortAscending(vector<int> &v);

//Sorts v in descending order.
// This function must use a priority_queue that uses a max heap.
void heapSortDescending(vector<int> &v);

//Sorts v in ascending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortAscending(vector<int> &v);

//Sorts v in descending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortDescending(vector<int> &v);

//Print v's values and v's label to stdout.
//  Function already implemented (do not modify this function).
void printVector(const vector<int> &v, const string label){
  cout << label;
  for(int i : v) cout << i << " ";
  cout << endl;
}

//Run the sort functions using command line arguments as inputs
int main(int argc, char * argv[]){

  vector<int> v1, v2, v3, v4;
  for(int i = 1; i < argc; i++){
    v1.push_back(atoi(argv[i]));
    v2.push_back(atoi(argv[i]));
    v3.push_back(atoi(argv[i]));
    v4.push_back(atoi(argv[i]));
  }

  heapSortAscending(v1);
  printVector(v1, "Heap sort  (ascending) = ");

  treeSortAscending(v2);
  printVector(v2, "Tree sort  (ascending) = ");

  heapSortDescending(v3);
  printVector(v3, "Heap sort (descending) = ");

  treeSortDescending(v4);
  printVector(v4, "Tree sort (descending) = ");

  return 0;
}

//Implement all the functions below

//Sorts v in ascending order.
// This fuction must use a priority_queue that uses a min heap.
void heapSortAscending(vector<int> &v){

	priority_queue< int, vector<int>, greater<int> > minHeap;
	for (int n: v)
	{
		minHeap.push(n);
	}
	for(int a=0; a < static_cast<signed int>(v.size()); a++)
	{
		v[a] = minHeap.top();
		minHeap.pop();
	}
}

//Sorts v in descending order.
// This function must use a priority_queue that uses a max heap.
void heapSortDescending(vector<int> &v){
	
	priority_queue< int > maxHeap;
	for(int n: v)
	{
		maxHeap.push(n);
	}

	for(int a=0; a < static_cast<signed int>(v.size()); a++)
	{
		v[a] = maxHeap.top();
		maxHeap.pop();
	}

}

//Sorts v in ascending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortAscending(vector<int> &v){

	multiset<int> s;
	multiset<int>::iterator i;
	
	for(int n: v)
	{
		s.insert(n);
	}
	i=s.begin();
	for(int a=0; a < static_cast<signed int>(v.size()); a++)
	{
	
		v[a] = *i;
		i++;
	}
}

//Sorts v in descending order.
// This fuction must use a multiset, which is a balanced binary search tree
// that allows duplicates.
void treeSortDescending(vector<int> &v){

	multiset<int> s;
	multiset<int>::iterator i;

	for(int n: v)
	{
		s.insert(n);
	}
	
   i=s.end();
   i++;
	for(int a=0; a < static_cast<signed int>(v.size()); a++)
	{
		v[a] = *i;
		i--;
	}
}























