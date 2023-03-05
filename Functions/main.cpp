#include<iostream>
using namespace std;

int Sum(int a, int b); // Прототип функции(Объявление функции)
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(double a, double b);
int Reminder(int a, int b);
int Factorial(int a);
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b); // Использование функции(Вызов функции)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a,b) << endl;
	cout << a << " * " << b << " = " << Product(a,b) << endl;
	cout << a << " / " << b << " = " << Quotient (a,b) << endl;
	cout << a << " % " << b << " = " << Reminder (a,b) << endl;
	cout << a << " ! " << " = " << Factorial(a) << endl;
	cout << a << " ^ " << b << " = " << Power(a,b) << endl;
}
int Sum(int a, int b) // Реализация функции(Определение функции)
{
	return a + b;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(double a, double b)
{
	return a / b;
}
int Reminder(int a, int b)
{
	return a % b;
}
int Factorial(int a)
{
	int Factorial = 1;
	for (int i = 1; i <= a; i++)
	{
		Factorial *= i;
	}
	return Factorial;
}
int Power(int a, int b)
{
	int result = 1;
	for (int i = 1; i <= b; i++)
	{
		result *= a;
	}
	return result;
}