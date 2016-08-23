//Programmer: Alex Berry
//Date: August 22 2016
//Purpose: First Assignment - FLAG

#include <iostream>
#include <string>
using namespace std;

int main()
{

	string s1 = " *   *   *   *   *   * ";
	string s2 = "   *   *   *   *   *   ";
	string s3 = "_________________________________\n";
	string s4 = "________________________________________________________\n";

	cout << s4 << s1 << s3 << s2 << s3;
	cout << s1 << s3 << s2 << s3;
	cout << s1 << s3 << s2 << s3;
	cout << s1 << s3 << s2 << s3;
	cout << s4 << s4 << s4 << s4 << s4;

	return 0;
}