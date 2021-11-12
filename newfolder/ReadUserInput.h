#pragma once

#include <iostream>
#include <climits>
#include <string>
#include <typeinfo>

using namespace std;

template<typename InputType>
InputType readUserInput(string prompt)
{
	InputType returnValue;

	cout << prompt;
	cin >> returnValue;

	while (cin.fail() == 1) {
		cout << "Error! The input cannot be read.\n";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << prompt;
		cin >> returnValue;
	}

	return returnValue;
}

template<typename InputType>
InputType readUserInput(string prompt, InputType minValue)
{
	InputType returnValue = 0;
	returnValue = readUserInput<InputType>(prompt);

	while (returnValue < minValue) {
		cout << "Error!  The value must be >= " << minValue << endl;
		returnValue = readUserInput<InputType>(prompt);
	}

	return returnValue;
}

template<typename InputType>
InputType readUserInput(string prompt, InputType minValue, InputType maxValue)
{
	InputType returnValue = 0;
	returnValue = readUserInput<InputType>(prompt, minValue);

	while (returnValue > maxValue) {
		cout << "Error!  The value must be <= " << maxValue << endl;
		returnValue = readUserInput<InputType>(prompt, minValue);
	}

	return returnValue;
}
