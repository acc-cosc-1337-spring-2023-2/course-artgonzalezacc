#include "my_vector.h"

//
using std::cout;

template<typename T>
Vector<T>::Vector(int s)
 : capacity{s}, elements{new T[s]}
{
    cout<<"created new memory at "<<elements<<"\n";
}

template<typename T>
Vector<T>::Vector(const Vector<T>& v)
 : size{v.size}, capacity{v.capacity}, elements{new T[v.capacity]}
{
    cout<<"Copy constructor = created memory at "<<elements<<"\n";
    for(auto i=0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temporary memory for v1
2-Copy values from v into v1 temporary memory
3-Delete v1 elements memory
4-Point v1 elements to temporary memory
5-Set v1.size to v.size
6-Return a reference to itself
*/
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
    T* temp = new T[v.size];

    for(auto i=0; i < v.size; i++){
        temp[i] = v.elements[i];
    }

    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"copy assignment new memory created "<<elements<<"\n";
    temp = nullptr;
    size = v.size;

    return *this;
}

/*
1-Get v.elements memory(switch/steal the pointer making v empty)
2-Get size from v
3-point v.elements to nothing(nullptr)
4-set v size to 0
*/
template<typename T>
Vector<T>::Vector(Vector<T>&& v)
 : size{v.size}, elements{v.elements}
{
    cout<<"move constructor switch pointer "<<elements<<"\n";
    v.elements = nullptr;
    v.size = 0;
}

/*
1-clear/delete original memory from v
2-point v1 elements to v.elements
3-get size from v
4-point v.elements to nullptr
5-set v.size to 0
6-return a self reference
*/
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)
{
    cout<<"Move assignment delete memory "<<elements<<"\n";
    delete[] elements;

    elements = v.elements;
    cout<<"Move assignment switch pointers "<<elements<<"\n";

    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

/*
1-make sure that new size is greater than capacity
2-create temp memory of new_size allocation
3-copy values from old memory to temp memory
4-delete the old memory
5-set elements to temp memory
6-set capacity to new_size
*/
template<typename T>
void Vector<T>::Reserve(int new_size)
{
    if(new_size <= capacity)
    {
        return;
    }

    T* temp = new T[new_size];
    cout<<"Reserve new memory "<<temp<<"\n";

    for(auto i=0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    cout<<"Delete old memory "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}

/*
1-if capacity is 0 call Reserve w reserve default size as function argument
2-else if size equal capacity call Reserve with capacity * reserve default mutiplier
3-add value current elements[size] 
4-increment the size
*/
template<typename T>
void Vector<T>::PushBack(T value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

template<typename T>
Vector<T>::~Vector()
{
    cout<<"delete the memory at"<<elements<<"\n";
    delete[] elements;
}

//configure Vector template class to suport int, double, char
template class Vector<int>;
template class Vector<double>;
template class Vector<float>;

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector()
{   //recommended usage of my vector
    //cout<<"loaded to the stack\n";
    Vector<int> v(3);
    v[0] = 3;//write
    cout<<v[0]<<"\n";//read

    //cout<<"unloaded fomm the stack\n";
    ////more code here
}

Vector<int> get_vector()
{
    Vector<int> v(3);
    return v;
}
