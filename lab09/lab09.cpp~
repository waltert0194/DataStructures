/*
 * Name: Walter Thompson
 * Date Submitted: 3/29/17
 * Lab Section: 1
 * Assignment Name: lab09
 *
 */


/* The purpose of this program is to simulate a database
 *	using the STL map data structure. A text file is read in
 * through the command line. Each line takes a userId, 
 * password, and a command. 
 *
 */

#include<iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;


int main(int argc, char *argv[])
{

   vector<string> v;
	map<string, string> m;
   pair<string,string> p;
	string line; 
   string option; //string to read the options (insert, select, delete)
	string userId; //string to read in the userId
	string password; //string to read in the password
   //string found_pass;
	ifstream input(argv[1]);
	 
    //reads through each line of the text file
    while(getline(input, line))
    {
        stringstream ss(line);
        ss >> option;
        ss >> userId;
        ss >> password;
		  map<string, string>::iterator outer_iter= m.find(userId);

	    
         //cout << "option: " << option << "| userId: " << 
         //userId << "| password: " << password << endl;
     
      //if the command option is "insert", then insert the 
      //username and password on that line. If there is is a 
      //duplicate username, then an error message is given. 
		if(option == "insert")
		{
         
			if(outer_iter == m.end())
         {
				m.insert(pair<string,string>(userId,password));
         	cout<< option << " " << userId << " successful\n";
         }
         else
         {
            cout<< option << " " << userId
            	<< " unsuccessful because it is a duplicate\n";
         }
			
		}
    
      //if the command option is "select", then iterate through the text and
      //determine if the userId is in the database. It also determines 
      //if the password matches the userId
		else if(option == "select")
		{     
           string present;
          if(outer_iter != m.end())
            present= outer_iter->second;
          
          if(outer_iter == m.end()) 

          {
            cout << option << " " << userId 
            << " unsuccessful because it is not in the database\n";
          }
          else
          {
               if(password==present)
               {
                    cout << option << " " << userId
                    	<< " and its password successful\n";
               }  
               else
               {
                    cout << option << " " << userId 
              		  	<< " unsuccessful because its password was incorrect\n";  
               }

          }
      }

      //if the command option is "delete", then remove the userId
      //from the databse. Also catches errors if the userId is not
      //in the database when the delete option is called.
		else if(option == "delete")
		{
         if(m.find(userId) == m.end())
         {
              cout << option << " " << userId 
            << " unsuccessful because it is not in the database\n";   
         } 
         else
         {
			    m.erase(userId);
             cout << option << " " << userId 
             	<< " successful\n";   
         }
		}
      //if the line does not match any of the options,
      //then continue.
      else
      {
             continue;
      }
   }
 	password = ' ';
	return 0;
}
