#include "my_vector.h"
#include<string>

using std::cout; using std::string;
template<typename T>
T add(T value1, T value2)
{
    return value1 + value2;
}
int main()
{   
    auto result = add(5, 10);
    cout<<"Result: "<<result<<"\n";

    auto result1 = add(10.5, 5.3);
    cout<<"Result: "<<result1<<"\n";

    string v1 = "C++ ";
    string v2 = "rocks";
    auto result2 = add(v1, v2);
    cout<<"Result: "<<result2<<"\n";
    
    return 0;
}

