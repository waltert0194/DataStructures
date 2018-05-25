/*
 * Name: Walter Thompson
 * Date Submitted: 4/18/17
 * Lab Section: 1
 * Assignment Name: lab12
 *
 */


/*
 * The purpose of this program is to implement a recursive 
 * quick sort function that has a random pivot. The program 
 * also implements a recursive merge sort function.  
 *
 */

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;


//Pivot function for quick sort. This function is later 
//used to make a randomized pivot
int pivot(vector<int>& v,int p,int r)
 {
        int temp1;
        int temp2;
        int x=v[r];
        int i=p-1;
        for(int j=p;j<=r-1;j++)
        {
            if(v[j]<=x)
            {

                i=i+1;
                temp1=v[i];
                v[i]=v[j];
                v[j]=temp1;
            }
        }
        temp2=v[i+1];
        v[i+1]=v[r];
        v[r]=temp2;
        return i+1;
  }

//Function to randomize the pivot() function
int Random_Pivot(vector<int>& v,int p,int r)
 {
        int i=p+rand()%(r-p+1);//randomize equation for pivot
        int temp;
        temp=v[r];
        v[r]=v[i];
        v[i]=temp;
        return pivot(v,p,r);
  }

//recursive quick sort function that uses a random partition
void QuickSort(vector<int>& v, int  p, int r)
{
	int j;
	if(p<r)
	{
		j=Random_Pivot(v, p, r);
		QuickSort(v, p, j-1);
		QuickSort(v,j+1, r);
	}
}

//quick sort function for ease of access in main() function
void QuickSort(vector<int>& v)
{
    QuickSort(v,0 , v.size()-1);
    
}

void merge(vector<int>& v, int p, int mid, int r)
{
    int size = r - p + 1; // Size of the range to be merged
    
    //Temporary vector used to merge both halves
    vector<int> tempv(size);
    
    int i1 = p; // Next element in the first half
    int i2 = mid + 1; // Next element in the second half
    int j = 0; // Next open position in tempv
    
    //Goes through i1 and i2. As long as the end of the vector isnt 
    //reached, move the smaller value into tempv
    while (i1 <= mid && i2 <= r)
    {
        if (v[i1] < v[i2])
        {
            tempv[j] = v[i1];
            i1++;
        }
        else
        {
            tempv[j] = v[i2];
            i2++;
        }
        j++;
    }
    
    while (i1 <= mid)
    {
        tempv[j] = v[i1];
        i1++;
        j++;
    }
    //make a copy of remaining entries of the second half
    while (i2 <= r)
    {
        tempv[j] = v[i2];
        i2++;
        j++;
    }
    
    //Copy back from the tempv
    for (j = 0; j < size; j++)
        v[p + j] = tempv[j];
}


//Function that uses merge sort on the values in the vector.
void mergeSort(vector<int>& v, int p, int r)
{
    if(p == r) return;
    int mid = (p + r) / 2;
    // Sort the first and the second half
    mergeSort(v, p, mid);
    mergeSort(v, mid + 1, r);
    merge(v, p, mid, r);
}

//mergeSort function for ease of use in the main function
void mergeSort(vector<int>& v)
{
    mergeSort(v, 0, v.size()-1);
    
}

int main(int argc, char *argv[])
{
	ifstream input(argv[1]);
	vector<int> v;
   vector<int> v2;
	vector<int>::iterator i;
		
	int p; 
	int r; 
   //int mid=(p+r)/2;

   //Put the values read in from the command line into the vector
	for(int i=1; i< argc; i++)
	{
		v.push_back(atoi(argv[i]));
		int curr = atoi(argv[i]);
		if(curr < p)
			p = curr;
		int curr2 = atoi(argv[i]);
		if(curr2 > r)
			r = curr;
	}
	
   //Prints the unsorted vector
	/*for(i=v.begin(); i!=v.end(); i++)
	{
		cout << ' ' << *i;
	}
	cout << endl;
   */

   //Make a second copy of the vector for Merge Sort
   v2=v;

   //Call to the quicksort function
	QuickSort(v);
	
   //Print out the quick sorted vector
	cout << "Quick Sort =";
	for(i=v.begin(); i!=v.end(); i++)
	{
		cout << ' ' << *i;
	}
	cout << endl;

   //Call to the mergeSort function
   mergeSort(v2);

   //Print out the merge sorted vector
   cout << "Merge Sort =";
	for(i=v2.begin(); i!=v2.end(); i++)
	{
		cout << ' ' << *i;
	}
	cout << endl;

	return 0;
}


