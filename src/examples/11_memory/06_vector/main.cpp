#include "my_vector.h"

int main()
{
    //std::cout<<"load to the stack\n";
    //use_vector();
    //std::cout<<"unload from the stack\n";
    int num = 5;
    int& num_ref = num;
    //we can't do this 5 = num;
    //int& five = 5;

    return 0;
}

