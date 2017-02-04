#include <string>
#include <iostream>

using namespace std;
 
// Base class
class Vehicle
{
  public:
    int id_vehicle;

    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};

class Car: public Vehicle
{
  public:
    int id_car;

    Car()
    {
      cout << "This is a Car Vehicule\n";
    }
};

class Animal
{
  public:
    Animal()
    {
      cout << "This is an Animal\n";
    }
};
// Sub class inheriting from Base Class(Vehicle)
class Horse : public Vehicle, public Animal
{
  public:
    int id_horse;
};
 
// main function
int main()
{
    //Multiple Inheritance
    Horse obj1;
          
    // An object of class Horse has all data members
    // and member functions of class Vehicle
    obj1.id_horse = 7;
    obj1.id_vehicle = 91;
    cout << "Horse id is: " <<  obj1.id_horse << '\n';
    cout << "Vehicle id is: " <<  obj1.id_vehicle << '\n';
    
    //(Multilevel) Inheritance
    Car obj2;

    return 0;
}