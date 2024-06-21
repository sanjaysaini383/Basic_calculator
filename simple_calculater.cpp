#include<bits/stdc++.h>
using namespace std;
int main(){
    
      double num1, num2;
    char oper;
    double result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;


    cout << "Enter an operation that you want to pereform with these two numbers(+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}