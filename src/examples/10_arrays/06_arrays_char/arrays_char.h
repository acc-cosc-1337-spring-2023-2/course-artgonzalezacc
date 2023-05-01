//char array example
#include<iostream>
#include<string>
#include<memory>

void use_char_null_terminated();
void use_string_terminated();
char* get_dynamic_memory(const int size);
void delete_dynamic_char_memory(char* array);
void limit_dynamic_char_mem_scope(const int size);
