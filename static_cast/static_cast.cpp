#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int total {};
    int num1{}, num2{}, num3{};
    const int count{3};
    
    cout << "Enter three integer" << endl;
    cin >> num1 >> num2 >> num3;
    
    total  = num1 + num2 + num3;
    
    double average{0.0};
    
    average =static_cast<double>(total) / count;
    
    cout << "The three numbers were " << num1 <<", " <<num2 <<", "<< num3 << endl;
    
    cout << "The sum of the numbers: " << total << endl;
    
    cout << "The average of the numbers: " << average << endl;

    
	return 0;
}
