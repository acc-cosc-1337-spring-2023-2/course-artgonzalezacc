#include "recursion.h"

using std::cout;

//Write code for recursive display function
void recursive_hello(int num)
{
    if(num == 0)
    {
        cout<<"base base\n";
        return;
    }

    cout<<"hello\n";
    cout<<"load to stack "<<num<<"\n";
    recursive_hello(num-1);
    cout<<"unload from stack\n";

}

void iterative_hello()
{
    while(true)
    {
        cout<<"hello\n";
    }
}


int iterative_factorial(int num)
{
    auto factorial = 1;

    for(auto i=num; i > 0; i--)
    {
        factorial *= i;
    }

    return factorial;
}
//Write code for recursive factorial
int recursive_factorial(int num)
{
    int f;//tracks num * r;
    int r;//tracks the return value of recursive_factorial

    if(num == 0)
    {
        cout<<"base case\n";
        return 1;
    }

    cout<<"load to stack"<<num-1<<"\n";
    r = recursive_factorial(num-1);
    f = num * r;
    cout<<"unload from stack num: "<<num<<" r: "<<r<<" f: "<<f<<"\n";

    return f;
}
