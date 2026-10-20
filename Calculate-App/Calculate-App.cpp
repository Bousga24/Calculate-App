#include <iostream>
using namespace std;

int Add(int number1, int number2)
{
    return number1 + number2;
}

double Divide(double number1, double number2)
{
    return number1 / number2;
}

int Subtract(int number1, int number2)
{
    return number1 - number2;
}

int Multiply(int number1, int number2)
{
    return number1 * number2;
}

int main()
{
    cout << "Hi" << endl;
    cout << "Calculator Project" << endl;

    cout << "Addition: 10 + 5 = " << Add(10, 5) << endl;
    cout << "Subtraction: 10 - 5 = " << Subtract(10, 5) << endl;
    cout << "Multiplication: 10 * 5 = " << Multiply(10, 5) << endl;
    cout << "Division: 10 / 5 = " << Divide(10, 5) << endl;

	cout << "Goodbye!" << endl;
	system("pause>0");
    return 0;
}