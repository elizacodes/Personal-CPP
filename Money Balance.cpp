#define _USE_MATH_DEFINES
#include <cmath>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;
double ReadDouble(string prompt);
double CalculateBalance(double B, double A, double R);

int main()
{
	double B = ReadDouble("Enter your initial balance: ");
	double A = ReadDouble("Enter the amount you are depositing monthly: ");
	double R = ReadDouble("Enter your annual percentage rate: ");
	double M = ReadDouble("Enter how many months you want to calculate: ");
	for (int y = 1; y <= M; y++)
	{
		B = CalculateBalance(B, A, R);
		cout << "Balance as of month " << y << ": " << B << "\n";
	}
}

double CalculateBalance(double B, double A, double R)
{
	double balance = (R / 12 + 1) * B + A;
	return balance;
}

double ReadDouble(string prompt)
{
	double x = 0.0;
	cout << prompt;
	cin >> x;
	while(cin.fail() == 1)
	{
		cout << "Error! Cannot read input. \n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << prompt;
		cin >> x;
	}
	return x;
