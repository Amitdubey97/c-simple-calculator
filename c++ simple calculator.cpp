#include <iostream>
using namespace std;

int main() {
    
    double num1, num2;
    char op;
    double result;

    
    cout << "Welcome to the  simple calculator program!" << endl;

    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;

    
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1; 
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1; 
    }

    
    cout << "Result: " << result << endl;

    return 0; 
}