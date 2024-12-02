#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> test_vals{10,20,30};
    
    cout << "Using array syntax :" << endl;
    cout << test_vals[0] << endl;
    cout << test_vals[1] << endl;
    cout << test_vals[2] << endl;

    cout << "Using vector syntax :" << endl;
    cout << test_vals.at(0) << endl;
    cout << test_vals.at(1) << endl;
    cout << test_vals.at(2) << endl;
    
    cout << "\nThere are " << test_vals.size() <<" numbers in the vector" << endl;
    
    cout << "\nEnter 3 numbers" << endl;
    cin >> test_vals.at(0);
    cin >> test_vals.at(1);
    cin >> test_vals.at(2);
    
    cout << "\nUpdate the values" << endl;
    cout << test_vals.at(0) << endl;
    cout << test_vals.at(1) << endl;
    cout << test_vals.at(2) << endl;
    
    cout << "\nEnter a number to add to the vector" << endl;
    
    int score_to_add{0};
    cin >> score_to_add;
    
    test_vals.push_back(score_to_add);
    
    cout << "\nEnter one or more number to add to the vector" << endl;
    cin >> score_to_add;

    test_vals.push_back(score_to_add);

    cout << "\nThe vector is as below now" << endl;
    cout << test_vals.at(0) << endl;
    cout << test_vals.at(1) << endl;
    cout << test_vals.at(2) << endl;
    cout << test_vals.at(3) << endl;
    cout << test_vals.at(4) << endl;
    
    cout << "\nThere are " << test_vals.size() <<" numbers in the vector" << endl;

    /*2D Vectors*/
    
    vector <vector <int>> twoD_testVal
    {
        {1,2,3,4},
        {2,4,6,8},
        {1,3,5,7}
    };
        
    cout << "\n2D Vector Using array syntax :" << endl;
    cout << twoD_testVal[0][0] << endl;
    cout << twoD_testVal[0][1] << endl;
    cout << twoD_testVal[0][2] << endl;

    cout << "\n2D VectorUsing vector syntax :" << endl;
    cout << twoD_testVal.at(0).at(0) << endl;
    cout << twoD_testVal.at(0).at(1) << endl;
    cout << twoD_testVal.at(0).at(2) << endl;
    
	return 0;
}
