#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
class Shallow
{
private:
    int *data;

public:
    void set_data_val(int d) { *data = d;}
    int get_data_val () { return *data;}
    
    //Constructor
    Shallow (int d);
    
    //Copy constructor
    Shallow(const Shallow &source);
    
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
    
}

Shallow::Shallow(const Shallow &source)
    :data(source.data)
{
    cout << "Copy constructor - shallow copy " << endl;
}

~Shallow::Shallow()
{
    delete data;
    cout << "Destructor freeing data " << endl;
}


void display_shallow(Shallow s)
{
    cout << s.get_data_val() << endl;
}

int main()
{    
    Shallow obj1{100};
    display_shallow(obj1);
    
    Shallow obj2{obj1};
    obj2.set_data_val(1000);
    
    
    return 0;
    
}
*/

class Deep{
private:
    int *data;
public:
    void set_data_val(int d) { *data = d;}
    int get_data_val() {return *data;}
    //Constructor
    Deep (int d);
    
    //Copy constructor
    Deep(const Deep &source);
    
    //Destructor
    ~Deep(); 
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
    
}

Deep::Deep(const Deep &source)
    :Deep(*source.data)
{
    cout << "Copy constructor - deep copy " << endl;
}

Deep::~Deep()
{
    delete data;
    cout << "Destructor freeing data " << endl;
}


void display_deep(Deep s)
{
    cout << s.get_data_val() << endl;
}       


int main()
{
    Deep obj1{100};
    display_deep(obj1);
    
    Deep obj2{obj1};
    obj2.set_data_val(1000);
    
    return 0;
}