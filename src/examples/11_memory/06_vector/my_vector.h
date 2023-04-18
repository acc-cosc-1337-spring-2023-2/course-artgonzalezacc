//
#include<iostream>

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(int s);
    int Size()const{return size;}
    int Capacity()const{return capacity;}
    ~Vector();
private:
    int* elements;//holds the dynamic list on the heap
    int size{0};//current size of the list; doubles as the current_index
    int capacity;//total available slots for elements    
};

#endif

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector();