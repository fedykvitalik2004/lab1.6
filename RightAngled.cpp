#include "RightAngled.h"
#include <iostream>
#include <sstream>
#include <string>

void RightAngled::setValue1()
{
	double a;
	cout << "first="; cin >> a;

	if (a <= 0)
		setValue1();
	else
		test.SetFirst(a);
}

void RightAngled::setValue2()
{
	double b;
	cout << "second="; cin >> b;

	if (b <= 0)
		setValue2();
	else
		test.SetSecond(b);
}

double RightAngled::teorema() const
{
	double a = test.GetFirst();
	double b = test.GetSecond();

	return sqrt((a * a + b * b));
}

double RightAngled::square() const
{
	double a = test.GetFirst();
	double b = test.GetSecond();

	return (a + b) / 2;
}

bool RightAngled::Init(double a, double b)
{
	if (a > 0 && b > 0)
	{
		test.SetFirst(a);
		test.SetSecond(b);
		return true;
	}
	else
		return false;
}

void RightAngled::Read()
{
	double a, b;
	do
	{
		cout << "Input values:" << endl;
		cout << "first="; cin >> a;
		cout << "second="; cin >> b;
	} while (!Init(a, b));
}

string RightAngled::tostring() const
{
	stringstream sout;
	sout << "first is " << test.GetFirst() << " and second is " << test.GetSecond();

	return sout.str();
}

void RightAngled::Pair::Display() const
{
	cout << "first=" << GetFirst() << endl;
	cout << "second=" << GetSecond() << endl;
}