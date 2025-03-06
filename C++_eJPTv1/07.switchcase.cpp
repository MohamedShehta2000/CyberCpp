/*
Mohamed Shehta >> 7/3/2025 
eJPTv1
*/

#include <iostream>
using namespace std;

int main ()
{
	int user_value;
	cout << "1 - Addition\n 2 - Subtraction\n 3 - Multiplication\n 4 - Division\n 5 - Exit Program\n";
	cout << "Insert a number: ";
	cin >> user_value;
	cin.ignore();
	
	switch(user_value) {
		case 1:
			cout << "Addition";
			break;
		case 2:
			cout << "Subtraction";
			break;
		case 3:
			cout << "Multiplication";
			break;
		case 4:
			cout << "Division";
			break;
		case 5:
			cout << "Exit Program";
			break;
		default:
			cout << "wrong input";
	}
	cin.ignore();
	return 0;
}
