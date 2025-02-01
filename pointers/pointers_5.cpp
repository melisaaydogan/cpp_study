#include <iostream>

using namespace std;

int main()
{
    int high_score{100};
    int low_score{25};
    
    const int *score_ptr1 {&high_score};
    
    score_ptr1 = 86; //ERROR
    *score_ptr1 = &low_score; //OK
    
    int *const score_ptr2 {&high_score};
    
    score_ptr2 = 86; //OK
    *score_ptr2 = &low_score; //ERROR
    
    const int *const score_ptr3{&high_score};
    
    score_ptr3 = 86; //ERROR
    *score_ptr3 = &low_score; //ERROR
    
    return 0;
}