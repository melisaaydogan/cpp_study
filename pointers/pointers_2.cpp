#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int scores[] {100,95,89};
    
    int *score_ptr {scores};
    
    cout << "Value of scores: " << scores << endl;
    cout << "Value of score_ptr: " << score_ptr << endl;
    cout << "\n--------------------\n";

    cout << score_ptr[0]  << endl;
    cout << score_ptr[1]  << endl;
    cout << score_ptr[2]  << endl;

    cout << "\n--------------------\n";

    cout << score_ptr  << endl;
    cout << score_ptr + 1  << endl;
    cout << score_ptr + 2 << endl;
    
    cout << "\n--------------------\n";
    
    cout << *score_ptr  << endl;
    cout << *(score_ptr + 1)  << endl;
    cout << *(score_ptr + 2) << endl;
    
    cout << "\n--------------------\n";
    
    cout << *scores  << endl;
    cout << *(scores + 1)  << endl;
    cout << *(scores + 2) << endl; 
    cout << "\n--------------------\n";

    return 0;
}