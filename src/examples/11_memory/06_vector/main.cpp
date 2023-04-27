#include "my_vector.h"

using std::cout;

int main()
{   
    Vector<float> chars;
    chars.PushBack(1.5);
    cout<<"output: "<<chars[0]<<"\n\n";


    Vector<int> nums;
    nums.PushBack(5);
    cout<<nums[0]<<"\n";

    Vector<double> doubles;
    doubles.PushBack(5.5);
    cout<<doubles[0]<<"\n";

    
    return 0;
}

