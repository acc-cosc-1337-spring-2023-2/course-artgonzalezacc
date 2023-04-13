#include "arr_functions.h"
#include<iostream>

using std::cout;

int main() 
{
	//dangling pointer
	int* num = new int(5);
	//another pointer points to data
	//lots of code here
	int* num2 = num;
	//some other region of code; data is deleted
	delete num;

	//try to reuse deleted memory(data)
	cout<<*num2<<"\n";

	return 0;
}