#include<iostream>
#include<memory>

void memory_leak();
void use_dynamic_memory_array(const int num);
int* get_dynamic_memory(const int num);
void limit_dynamic_memory_scope(const int num);
void delete_dynamic_memory(int* array);
void use_dynamic_array(const int num);