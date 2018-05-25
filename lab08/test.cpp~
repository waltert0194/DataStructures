/*
 * Name: Walter Thompson
 * Date Submitted: 3/???/17
 * Lab Section: 1
 * Assignment Name: lab08
 *
 */

//The purpose of this program is to read an infix epression from the command
//line and convert it to a postfix epression. The program then takes the 
//postfix expression and evaluates it.

#include <sstream>
#include <stack>
#include <limits>
#include <string>
#include <iostream>
#include <list>
using namespace std;

//Function to determine the priority of operators in the 
//infix to postfix conversion.
int priority(string a) {
    int temp;
    //if (a == '(')
        //temp = 1;
    if (a == "*" || a == "/")
        temp = 2;
    else  if (a == "+" || a == "-")
        temp = 3;
    return temp;
}

//Main function that reads an infix expression from the command
//line, converts it to postfix, then evaluates.
int main(int argc, char * argv[]) {
 
    string token; //string used to traverse the infix expression
    string in = argv[1];
    stringstream ss(in);
    list<string> output; //list of strings used to store the postfix expression
    stack<string> operator_stack; //stack to handle operations

    while( getline(ss, token, ' '))
    {

    //for (unsigned int i = 0; i < token.length(); i++) 
    //{
        if (token == "+" || token == "-" || token == "*" 
                                     || token == "/") 
        {
            //Inserts value into the back of the list and removes it
            //from the stack.
            while (!operator_stack.empty() && priority(operator_stack.top())
                                     <= priority(token)) 
            {
                output.push_back(operator_stack.top());
                operator_stack.pop();
            }
            operator_stack.push(token);
        } 
        else if (token == "(")  
        {
            operator_stack.push(token);
        } 
        else if (token == ")") 
        {
            while (operator_stack.top() != "(") 
            {
                output.push_back(operator_stack.top());
                operator_stack.pop();
            }
            operator_stack.pop();
        } 
        else 
        {
            //output << token[i];
            output.push_back(token);
        }
    }

    while (!operator_stack.empty()) 
    {
        output.push_back(operator_stack.top());
        //output << operator_stack.top();
        operator_stack.pop();
    }
    
    //Prints the postfix expression stored in output
    cout << "Postfix Expression: ";
   
    for(list<string>::iterator i=output.begin(); i !=output.end(); i++)
    {
       cout << *i << ' ';
    }
    cout << endl;
   

         double operand2;//=atof(operator_stack.top().c_str()); operator_stack.pop();
			double operand1;//=atof(operator_stack.top().c_str()); operator_stack.pop();
         string operation;//=output.front(); //output.front();//s_op.pop();
			double evaluate;	
			//int weight=0;
			string last;

    while(!output.empty())
    {
        //cout << "while" << endl;
        if(output.front() >= "0")
        {
				//cout << "if" << endl;
            operator_stack.push(output.front());
			
        } 
        else
        {
            
            operand2=atof(operator_stack.top().c_str()); operator_stack.pop();
            //cout << "in " << operand2 << endl;
			   operand1=atof(operator_stack.top().c_str()); operator_stack.pop();
            //cout << "to " << operand1 << endl;
            operation=output.front();

				if(operation == "+")
				{
               //cout << "the" << endl;
					evaluate=operand1+operand2;
			   	last=to_string(evaluate);
					operator_stack.push(last);
					//cout << operand1 << endl;
				}
				else if(operation == "-")
				{
               //cout << "errrrroooorrr" << endl;
					evaluate=operand1-operand2;
					last=to_string(evaluate);
					operator_stack.push(last);
				}
				else if(operation == "*")
				{	
               //cout << "fire" << endl;
					evaluate=operand1*operand2;
					last=to_string(evaluate);
					operator_stack.push(last);
				}
				else if(operation == "/")
				{
               //cout << "flames" << endl;
					evaluate=operand1/operand2;
					last=to_string(evaluate);
					operator_stack.push(last);
				}
	    	}
	   output.pop_front();
   }
	while(!operator_stack.empty())
	{
			operator_stack.pop();
	}
   cout << evaluate << endl;            
    
  return 0;

}
