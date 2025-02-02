#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num{100};
    int &ref {num};
     
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------\n";
    num = 200;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------\n";
    num = 300;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------\n";
    vector<string> stooges {"X", "Y" ,"Z"};
    for (auto str : stooges)
        str ="A";
    
    for (auto str : stooges)
        cout << str << endl; //No change, X Y Z
    
    cout << "\n---------------\n";
    
    for (auto &str :stooges)
        str ="B";
    
    for (auto const &str : stooges)
        cout << str << endl; //Changed B B B

    return 0;
}