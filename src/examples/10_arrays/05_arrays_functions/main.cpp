#include "arr_functions.h"
#include<iostream>

using std::cout;

int main() 
{
	//create dynamic memory
	int* num = new int(5);//creates dynamic memory; 5 is in heap memory

	//use the memory(data)-limit the scope
	cout<<*num<<"\n";

	//delete
	delete num;

	return 0;
}