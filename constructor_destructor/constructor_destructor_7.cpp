#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Move{
private:
    int *data;
public:
    //Constructor
    Move (int d);
    
    //Copy constructor
    Move(const Move &source);
    
    //Move constructor
    Move(Move &&source) noexcept;
    
    //Destructor
    ~Move(); 
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for " << d << endl;
    
}

Move::Move(const Move &source)
    :Move(*source.data)
{
    cout << "Copy constructor - move for" << *data << endl;
}

Move::Move(Move &&source) noexcept
    :data(source.data)
{
    source.data = nullptr;
    cout << "Move constructor - moving resource " << *data << endl;
}

Move::~Move()
{
    if(data != nullptr){
        cout << "Constructor freeing data for " << *data << endl;
    }
    else{
        cout << "Constructor freeing data nullptr" << endl;
    }
    delete data;
}

int main()
{
    vector<Move> vec;
    
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    
    return 0;
}