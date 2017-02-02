#include <iostream>
#include "Calculator.h"

using namespace std;
  
// Main program
main()
{
    cout << "calculator\n";

    char op = '+'; // operator: +, -, *, /
    double num1 = 0.0; // inputs
    double num2 = 0.0; // inputs
    double res = 0.0; // result
  
    cout << "Enter the formula following this format: x+y or x-y or x*y or x/y";
  
    // call to the Calculator c object
    Calculator c;
    while (true)
    {
        cin >> num1 >> op >> num2;
        res = c.Calculate(num1, op, num2);
        cout << "Result is: " << res << endl;
    }

    return 0;
}