//
#include<iostream>
#include "arr_functions.h"
void memory_leak()
{
    //create dynamic memory
    int* num = new int(5);
    //use it (for how long will I use the data)

    //forget to call delete
}
