/*
Mohamed Shehta 7/3/2025 
eJPTv1
06.3- Programming in C Plus Plus - Part 3
*/


#include <iostream>>
using namespace std;

int main ()
{
	int user_value;
	cout << "Insert a number\n";
	cin >> user_value;
	cin.ignore();
	
	if(user_value < 10)
	{
		cout << "The value is less than 10";
	}
	
	else{
		cout << "The value is greater than 10";
	}
	
	cout << "\nPress Enter To Exit...";
	cin.ignore();
	return 0;
}
