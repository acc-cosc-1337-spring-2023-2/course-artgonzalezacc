#include "static.h"

using std::cout;

void use_static_var()
{
    static auto num = 0;
    cout<<&num<<"\n";
    num++;
    cout<<num<<"\n";
}