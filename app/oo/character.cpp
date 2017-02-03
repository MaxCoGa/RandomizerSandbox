#include <string>
#include <iostream>

using namespace std;

class Character
{
    // Access specifier
    public:
 
    // Data Members
    string name;
    int id;
 
    //Default Constructor
    Character()
    {
        cout << "Default Constructor called" << endl;
        name="default";
        id=-1;
    }
     
    //Parameterized Constructor
    Character(string s,int x)
    {
        cout << "Parameterized Constructor called" << endl;
        name=s;
        id=x;
    }

    //Definition for Destructor
    ~Character()
    {
        cout << "Destructor called for id: " << id <<endl;
    } // when program is done destructor is called

    // printname is not defined inside class definition
    void printname();
    
    //Member Functions()
    // printid is defined inside class definition
    void printid()
    {
        cout << "Character id is: " << id;
    }

};

// Definition of printname using scope resolution operator ::
void Character::printname()
{
    cout << "Character name is: " << name;
}
 
///////////////////////////////////////////////////////////////
int main() {
 
    // Declare an object of class Character Default
    Character obj1;
 
    // accessing data member
    // obj1.name = "Max";
    // obj1.id=37;

    // call printname()
    obj1.printname();
    cout << endl;
    // accessing member function
    obj1.printid();
    cout << endl;


    Character obj2("Max",37);
    // call printname()
    obj2.printname();
    cout << endl;
    // accessing member function
    obj2.printid();
    cout << endl;

    return 0;
}