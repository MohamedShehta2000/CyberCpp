/*

Elkhwaga 

learning in 5/3/2025

*/

// eJPT V1 netriders academey 

#include <iostream>
using namespace std;

int global_variable = 4;
int main()
{
	// vaiables declaration 
	
	// int a=0; int b=2; int sum= a+b;
	
	cout << "value of global_variable: " << global_variable << endl;
	
// Decleration of local variables
    int global_variable = 2;
	
	cout << "value of local_variable: " << global_variable << endl;
    
	int a = 0;
	int b = 2;
	int sum = a + b;
	
	cout << "the value of variable sum is: " << sum << endl;
	
	a = 3;
	
	sum = a + b;
	
	cout << "the value of variable sum is: " << sum << endl;
	
	cin.ignore();
	return 0;
}
