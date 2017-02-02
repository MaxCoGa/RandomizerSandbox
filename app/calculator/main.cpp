#include <iostream>
#include "Calculator.h"

using namespace std;
  
// Main program
main()
{
    cout << "calculator\n";

    char op = '+'; // operator: +, -, *, /
    double x = 0.0; // inputs
    double y = 0.0; // inputs
    double res = 0.0; // result
  
    cout << "Enter the formula following this format: x+y or x-y or x*y or x/y" << endl;
  
    // call to the Calculator c object
    Calculator c;
    while (true)
    {
        cin >> x >> op >> y;

        // Divide by zero case
        if (op == '/' && y == 0)
        {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else
        {
            res = c.Calculate(x, op, y);
        }
        cout << "Result is: " << res << endl;
    }

    return 0;
}