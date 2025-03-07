/* 

Mohamed Shehta 7/3/2025
eJPT V1

06.4- Programming in C Plus Plus - Part 3 

*/

#include <iostream>
using namespace std;

int main ()
{
	int x = 10; //normal variable
	int y = 0; // normal variable 
	int *p1, *p2; // pointer variable 
	
	p1 = &x; // p1 location of x
	p2 = p1; // p2 location of x
	y = *p2; // y value of p2
	*p2 = 5; // value of p2 is 5
	
	cout << "p1 : " << p1 << "\np2 : " << p2 << endl;
	cout << "\ny : " << y << "\nx : " << x << endl;
	
	cin.ignore();
	return 0;
}
