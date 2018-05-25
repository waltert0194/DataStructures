/*
 * Name: Walter Thompson
 * Date Submitted:2/22/17
 * Lab Section:001
 * Assignment Name: Lab05
 */

/*
 *	The purpose of this program is to read base 10 numbers given by the user and
 *	convert the numbers to any base 2-36.
 */

#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<stack>

using namespace std;

int main(int argc, char *argv[]){

	string number = argv[1]; 
	string base = argv[3];
	//string middle;
	stack<int> theStack;

	string digits ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D',
						'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S',
						'T','U','V','W','X','Y','Z'};

	int num_convert = stoi(number); // converts number string to int 
	int base_convert = stoi(base); //converts base string to int

	while(num_convert != 0) //finds the mod and divides the number by the base
	{
		theStack.push(num_convert % base_convert); 
		num_convert = num_convert / base_convert;
	}

	cout << number << "(base-10) is equal to ";
	while(!theStack.empty())
	{
		cout << digits[theStack.top()];
		theStack.pop();
	}
	cout << "(base-" << base << ")\n";

	return 0;
}
