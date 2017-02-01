#include <iostream>
using namespace std;
  
// Main program
main()
{
    cout << "calculator\n";

    char op; // operator: +, -, *, /
    float num1, num2; // inputs
    float res; // result
  
    cout << "Enter the first number:";
    cin >> num1;

    cout << "Enter an operator (+ - * /):";
    cin >> op;

    cout << "Enter the second number:";
    cin >> num2;
  
    // Switch statement begins
    switch (op) {
          
        // op + 
        case '+':
            res = num1 + num2;
            break;
          
        // op - 
        case '-':
            res =  num1 - num2;
            break;
          
        // op *
        case '*':
            res =  num1 * num2;
            break;
          
        // op /
        case '/':
            res =  num1 / num2;
            break;
          
        // error: operator is not in the current list: +, - , *, / 
        default:
            cout << "Error! operator is not correct";
            break;
    } // switch statement ends

    if (res) {
        cout << "The result is:";
        cout << res;
    }
  
    return 0; 
}