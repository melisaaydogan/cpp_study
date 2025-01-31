#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num{10};
    
    cout << "Value of num is: " << num << endl;
    cout << "Sizeof of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;

    int *p;
    
    cout << "\nValue of p is: " << p << endl;
    cout << "Sizeof of p is: " << sizeof p << endl;
    cout << "Address of p is: " << &p << endl;
    
//-----------------------------------    

    p= nullptr;
    cout << "Value of p is: " << p<< endl;
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4{nullptr};
    string *p5{nullptr};
    
    cout << "\nSizeof of p1 is: " << sizeof p1 << endl;
    cout << "Sizeof of p2 is: " << sizeof p2 << endl;
    cout << "Sizeof of p3 is: " << sizeof p3 << endl;
    cout << "Sizeof of p4 is: " << sizeof p4 << endl;
    cout << "Sizeof of p5 is: " << sizeof p5 << endl;
    
//-----------------------------------

    int score{10};
    int *score_ptr{nullptr};

    score_ptr = &score;
    
    cout << "\nValue of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "nValue of score_ptr is: " << score_ptr << endl;

//Dereferencing a Pointer

    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr {&high_temp};
    
    cout << *temp_ptr << endl;
    
    temp_ptr = &low_temp;
    
    cout << *temp_ptr << endl;
    
    
 //-----------------------------------
  
  string name{"Melisa"};
  string *string_ptr{&name};
  
  cout << *string_ptr << endl;
  name = "Melike";
  cout << *string_ptr << endl;
  
  cout << "\n---------------------\n" << endl;
  
  vector <string> stooges {"Melisa", "Melike", "Gonca"};
  vector <string> *vector_ptr{nullptr};
  
  vector_ptr = &stooges;
  
  cout <<"First stooge: " <<(*vector_ptr).at(0) << endl;
  cout << "Stooges: ";
  for (auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;
  
    return 0;
}