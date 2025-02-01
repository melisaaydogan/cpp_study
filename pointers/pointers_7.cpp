#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *create_array(size_t size, int init_val = 0)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_val;
    
    return new_storage;
}
void display(const int* const array, size_t size)
{
    for(size_t i{0}; i< size ;++i)
        cout << array[i] << " ";
    cout << endl;
}

int find_max_element(int* arr, int size) {
    int max_val = *arr;
    
    for(size_t i{1}; i< size; i++)
    {
        if(*(arr+i)> max_val)
            max_val = *(arr+i);
    }
    return max_val;
}


void reverse_array(int* arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    
    while(start < end)
    {
        int temp= *start;
        *start = *end;
        *end = temp;    
        
        start++;
        end--;
    }
}

string reverse_string(const string& str) {
    string reversed;

    const char* start = str.c_str();                    // Pointer to the first character
    const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character

    while (end >= start) {
        reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
        end--;
    }

    return reversed;
}

int main()
{
   int *my_array{nullptr};
   size_t size;
   int init_val{};

    cout << "How many integers would you like to allocate?" << endl;
    cin >> size;
    cout << "What value would you like them initialized to?" << endl;
    cin >> init_val;
    
    my_array = create_array(size, init_val);
    cout << "\n-----------------------\n";
    
    display(my_array, size);
    delete [] my_array;

    return 0;
}