#include<iostream>
using namespace std;
int main()
{
    cout << "Hello and Welcome to use the calculator!" << endl;
    int a;
    cout << "Enter the first number: ";
    cin >> a;

    int b;
    cout << "Enter the second number: ";
    cin >> b;
    cout << endl;

    int input_operation;
    cout << "Enter the operation you want to perform: (1 for Addition, 2 for Subtraction, 3 for Multiplication and 4 for Division) : ";
    cin >> input_operation;

    switch (input_operation)
    {
    case 1:
    cout << "Addition of" << a << "  " << "and" << " " << "b" << " is : " << a + b;
    break;

    case 2:
    cout << "Subtraction of "  << b << "  " << "and" << " " << "b " << " is : " << a - b;
    break;

    case 3:
    cout << "Multiplication of "  << a << "  " << "and" << " " << "b" << " is : " << a * b;
    break;

    case 4:
    cout << "Division of "  << a << "  " << "and" << " " << "b" << " is : " << a / b;
    break;
    
    default:
    cout << "Enter a valid operater!" << endl;
    break;
    }

    return 0;
}