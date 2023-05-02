//
#include "arr_functions.h"

using std::cout; using std::shared_ptr;

void memory_leak()
{
    //create dynamic memory
    int* num = new int(5);
    //use it (for how long will I use the data)

    //forget to call delete
}

void use_dynamic_memory_array(const int num)
{
    int* nums = new int[num]{};//create a list of 3 elements
    //can be a function with a pointer to nums
    cout<<nums[0]<<"\n";
    cout<<nums[1]<<"\n";
    cout<<nums[2]<<"\n";

    delete[] nums;//remember to call delete!!!!
}

int* get_dynamic_memory(const int num)
{   cout<<"Created memory\n";
    return new int[num]{};
}

void limit_dynamic_memory_scope(const int num)
{
    int* nums = get_dynamic_memory(num);

    for(int i=0; i< num; i++)
    {
        cout<<nums[i]<<"\n";
    }

    delete[] nums;//remember to call delete!!!!
}

void delete_dynamic_memory(int* array)
{
    cout<<"delete memory\n";
    delete[] array;
}

void use_dynamic_array(const int num)
{
    //create memory
    shared_ptr<int[]> nums(get_dynamic_memory(num),
     delete_dynamic_memory) ;
    //user memory
    cout<<nums[0]<<"\n";
    nums[0] = 5;
    cout<<nums[0]<<"\n";

    //do not have to remember to call delete
    cout<<"function exiting...\n";
}