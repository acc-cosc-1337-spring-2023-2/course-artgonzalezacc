//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	auto num = 0;
	cout<<"Enter a number: ";
	cin>>num;

	auto result = multiply_numbers(num);
	cout<<"Value is: "<<result<<"\n";

	num = 4;
	result = multiply_numbers(num);
	cout<<"Value is: "<<result<<"\n";

	return 0;
}
