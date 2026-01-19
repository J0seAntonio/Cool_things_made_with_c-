#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    cout << "Hello human, please insert two digits for the calculator 3000x" << endl;
    cout << "Digit #1: " << endl;
    cin >> num1;
    cout << "Digit #2: " << endl;
    cin >> num2;

    sum = num1 + num2;

    cout << "The result is: " << sum;
    return 0;
}