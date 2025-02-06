#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player() 
    :name{"None"}, health{0}, xp{0}
{
    cout << "No args constructor called with better way" << endl;
}  
    
Player::Player(string name_val) 
    :name{name_val}, health{0}, xp{0}
{
    cout << "String arg constructor called with better way" << endl;
}  
Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three args contructor called with better way" << endl;    
}

int main()
{

    {
        Player frank;
        Player hero("Hero");
        Player villain("Villain",100 ,12);
    }
    
    Player *enemy = new Player;
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    
    delete enemy;
    delete level_boss;
    
    return 0;
    
}
