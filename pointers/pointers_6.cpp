#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_data(int *int_ptr){
    *int_ptr *= 2;
}

void swap(int *a, int *b){
    int temp= *a;
    *a =*b;
    *b= temp;
}

void display(vector<string>* v)
{
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
}
    
int main()
{
    int value{10};
    int *int_ptr{nullptr};
    
    cout << "Value: " << value << endl;//10
    double_data(&value);
    cout << "Value: " << value << endl;//20

    cout << "\n------------------\n";
    
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;//40

    cout << "\n------------------\n";

    //swap example
    int x{10}, y{20};
    cout <<"\nx = " << x <<endl;
    cout <<"y = " << y <<endl;

    swap(&x,&y);

    cout <<"\nx = " << x <<endl;
    cout <<"y = " << y <<endl;
    
    //Display example
    cout << "\n------------------\n";
    
    vector<string> stooges{"Lary", "Moe", "Curly"};
    display(&stooges);


    return 0;
}