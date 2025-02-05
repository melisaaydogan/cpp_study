#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val)
    {
        name = name_val;
    }
    
    //Overloaded constructors
    Player(){
        cout << "No args constructor called" << endl;
    }
    Player(string name){
        cout << "String arg constructor called" << endl;
    }
    Player(string name, int health, int xp){
        cout << "Three args contructor called" << endl;
    }
    
    ~Player(){
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain",100 ,12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
    
}

//Output
/* No args constructor called
 * Destructor called for Slayer
 * No args constructor called
 * String arg constructor called
 * Three args contructor called
 * Destructor called for Villain
 * Destructor called for Hero
 * Destructor called for Frank
 * No args constructor called
 * Three args contructor called
 * Destructor called for Enemy
 * Destructor called for Level Boss
 * */
