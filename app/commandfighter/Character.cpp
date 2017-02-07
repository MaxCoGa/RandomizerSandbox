#include <string>
#include <iostream>

//#include "Character.h"

using namespace std;

class Character
{

private:
    // data hidden from outside world
    int id;
    // Access specifier

    string name;

    double lvl;
    double hitpoints;
    double money;

public:
    // Default Constructor
    Character()
    {
        name = "default";
        id = -1;
    }

    // Parameterized Constructor
    Character(string s)
    {
        name = s;
        id = 1;

        lvl = 1;
        hitpoints = 100;
        money = 0;
    }

    // Definition for Destructor
    ~Character()
    {
        // cout << "Destructor called for id: " << id << endl;
    } // when program is done destructor is called

    // print
    void printname();
    void printid();

    // ID set/get
    void setId(int a)
    {
        id = a;
    }
    int getId()
    {
        return id;
    }

    // Name set/get
    void setName(string s)
    {
        name = s;
    }
    string getName()
    {
        return name;
    }

    // money
    void setMoney(double m)
    {
        money = m;
    }
    double getMoney()
    {
        return money;
    }

    // level
    void setlvl(double l)
    {
        lvl = l;
    }
    double getlvl()
    {
        return lvl;
    }
    int getIntlvl()
    {
        return (int)lvl;
    }

    // hitpoints
    void setHP(double hp)
    {
        hitpoints = hp;
    }
    double getHP()
    {
        return hitpoints;
    }
};

// Definition of printname using scope resolution operator ::
void Character::printname()
{
    cout << "Character name is: " << name;
}

void Character::printid()
{
    cout << "Character id is: " << id;
}

///////////////////////////////////////////////////////////////

// Only use to test this class
// int main()
// {

//     // Declare an object of class Character Default
//     Character obj1("Test",1);

//     // accessing data member
//     // obj1.name = "Max";
//     // obj1.id=37;

//     // call printname()
//     obj1.printname();
//     cout << endl;
//     // accessing member function
//     obj1.printid();
//     cout << endl;
//     obj1.setId(2);
//     cout << obj1.getId() << endl;

//     return 0;
// }