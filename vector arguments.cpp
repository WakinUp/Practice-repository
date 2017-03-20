// vector arguments.cpp : Defines the entry point for the console application.
//

//Sampled from http://www.cplusplus.com/reference/vector/vector/vector/

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Testing different ways to declare a vector in C++:
	vector<int> emptyVec;							// empty vector of ints
	vector<int> definedVec = { 1, 2, 3, 4, 5, 7, 10 };			// vector values assignment at sdeclaration
	vector<int> iteratedVec(definedVec.begin(), definedVec.end());		// iterating through "second" vector
	vector<int> copiedVec(iteratedVec);					// copy of third
	vector<int> filled(5, 10);						// filled with size 5, all "10" values	
	int arrInt[] = { 2, 9, 3, 10, 45 };					// predefined array of ints 
	vector<int> import(arrInt, arrInt + sizeof(arrInt) / sizeof(int) );	// copy constructor using a predefined array

	cout << "The contents of emptyVec are:";
	for (vector<int>::iterator it = emptyVec.begin(); it != emptyVec.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	cout << '\n'; cout << "The contents of definedVec are:";
	for (vector<int>::iterator it = definedVec.begin(); it != definedVec.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	cout << '\n'; cout << "The contents of iteratedVec are:";
	for (vector<int>::iterator it = iteratedVec.begin(); it != iteratedVec.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	cout << '\n'; cout << "The contents of copiedVec are:";
	for (vector<int>::iterator it = copiedVec.begin(); it != copiedVec.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	cout << '\n'; cout << "The contents of filled are:";
	for (vector<int>::iterator it = filled.begin(); it != filled.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	cout << '\n'; cout << "The content of a predefined array is:";
	for(int n : arrInt)
		cout << ' ' << n;
	cout << '\n';

	cout << '\n'; cout << "The contents of import are:";
	for (vector<int>::iterator it = import.begin(); it != import.end(); ++it)
		cout << ' ' << *it;
	cout << '\n' << '\n';

	return 0;
}
