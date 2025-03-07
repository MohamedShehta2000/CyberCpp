/* 

Mohamed Shehta 7/3/2025
eJPT V1

06.4- Programming in C Plus Plus - Part 3 
*/

#include <iostream>
using namespace std;

int var = 1;

int sum (int x, int y){
	
	int z;
	z = x + var;
	return(z);
}

int main ()
{
	int a, b, result;
	cout << "Please enter two numbers: " << endl;
	cin >> a ;
	cin.ignore();
	cin >> b;
	cin.ignore();
	
	result = sum(a,b);
	
	cout << "The result of " << a << "+" << "is" << "result";
	
	cin.ignore();
}
