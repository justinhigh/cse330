/***********************************************************************************
*Justin Pulido
*Stack_test2.cpp
*February 21, 2018
*The program is testing the Stack.h file implementations and seeing if they are all 
 functioning properly.
*It solves the problem by using the constructor and deconstructor from 
 Vector.h and the List.h class and uses it for the Stack.h. We then use those 
 constructors in the main program to be able to execute the program 
 successfully. 
*100% Completed
*Big O(n) where it is the size problem. 
***********************************************************************************/

#include <iostream>
#include <cassert>
#include "Stack.h"
#include "../lab3/String.h"
#include "../lab4/Vector.h"
#include "../lab5/List.h"

using namespace std;

int main()
{
	Stack<int, Vector> s1;
	assert(s1.size() == 0);
	assert(s1.empty());
	
	s1.push(16);
	assert(s1.size() == 1);
	assert(s1.top() == 16);

	s1.pop();
	assert(s1.size() == 0);

	s1.push(11);
	assert(s1.size() == 1);
	assert(s1.top() == 11);
	
	s1.push(22);
	assert(s1.size() == 2);
	assert(s1.top() == 22);
	
	s1.push(33);
	assert(s1.size() == 3);
	assert(s1.top() == 33);
	
	s1.pop();
	assert(s1.size() == 2);
	assert(s1.top() == 22);

	Stack<String, List> s2;
    s2.push("abc");
    s2.push("de");
    s2.pop();
    assert(s2.top() == "abc");

	cout << "SUCCESS" << endl << endl;
	
	return 0;
}
