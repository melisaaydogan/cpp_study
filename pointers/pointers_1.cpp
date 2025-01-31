#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int *int_ptr{nullptr};
    
    int_ptr = new int; //allocate an integer on the heap
    
    cout << int_ptr << endl;
    cout << *int_ptr<< endl; // garbage

    *int_ptr = 100;
     cout << *int_ptr<< endl; //100

    delete int_ptr; //frees the allocated storage
    
    
    int *array_ptr{nullptr};
    int size {};
    
    cout << "How big do you want the array? ";
    cin >> size;
    
    array_ptr = new int[size]; //allocate array on the heap
    
    delete [] array_ptr; //frees the allocated storage
    
    return 0;
}