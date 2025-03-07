/* 

Mohamed Shehta 7/3/2025
eJPT V1

06.3- Programming in C Plus Plus - Part 3 
*/

#include <iostream>
using namespace std;

int main () {
	int i, j, lines;
	cout << "please enter a number " << endl;
	cin >> lines; // Take input from the user (number of lines)
	cin.ignore();
	
	for (j=1; j<=lines * 2; j=j+2) // Loop to print leading spaces for center alignment
	    {
	     	for (i=j; i<=lines*2-2; i=i+2)
	     	{
	   		    cout << " ";
		    }
		    // Loop to print stars (*) in pyramid shape
	     	for (i=1; i<=j; i++)
	        {
		     cout << "*";
      	    }
      	     cout << endl;   // Move to the next line after printing stars   	
	     }
	cin.ignore();
}
