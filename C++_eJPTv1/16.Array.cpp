/* 

Mohamed Shehta 7/3/2025
eJPT V1

06.4- Programming in C Plus Plus - Part 3 
*/


#include <iostream>
using namespace std;

int main ()
{
	int x[20];
	int i;
	
	for (i=0;i<20;++i){
		x[i] = i;
	}
	
	for (i=0;i<20; ++i){
		cout << x[i] << ",";
	}
	cin.ignore();
	return 0;
}
