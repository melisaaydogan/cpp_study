#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 {"Melisa"};
    string s2 {"Melisa"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    /*Determine if two pointers point to the same location
    * does not compare the data where tey point*/
    
    cout << (p1 == p2) << endl; //false
    cout << (p1 == p3) << endl; //true

    cout << "\n-------------------\n";
    
    /*Determine if two pointers point to the same data
    *you must compare the referenced pointers*/
    
    p1 = &s1;
    p2 = &s2;
    p3 = &s1;
    
    cout << (*p1 == *p2) << endl; //true
    cout << (*p1 == *p3) << endl; //true
    return 0;
}