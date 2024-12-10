#include <vector>
#include <iostream>

using namespace std;

void find_first_vowel(const std::vector<char>& vec) {
 
    size_t i{0};
    bool vowel_found {false};
 
    if (!vec.empty()) {
        do {
            if (vec.at(i) == 'a' || vec.at(i) == 'e' || vec.at(i) == 'i' || vec.at(i) == 'o' || vec.at(i) == 'u') {
                vowel_found = true;
            } else {
                i++;
            }
        } while (!vowel_found && i < vec.size());
    }
    
    if (vowel_found) {
        cout << "Vowel found: " << vec.at(i);
    } else {
        cout << "No vowel was found";
    }
}

int main()
{
    char chVal {};
    vector<char> testString(5);
    for(int i =0; i< 5; ++i){
        cin >> chVal;
        testString.push_back (chVal);
    }

    find_first_vowel(testString);
    
    return 0;
}