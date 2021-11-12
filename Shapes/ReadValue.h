#include <iostream>
#include <climits>
#include <string>

template<typename inputType>
inputType ReadValue(std::string prompt)
{
	inputType returnValue = 0;
	std::cout << prompt;
	std::cin >> returnValue;
	while (std::cin.fail() == 1) {
		std::cout << "Error! The input cannot be read.\n";
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << prompt;
		std::cin >> returnValue;
	}
	return returnValue;
}

template<typename inputType>
inputType ReadValue(std::string prompt, inputType minValue)
{
	inputType returnValue = 0;
	returnValue = ReadValue<inputType>(prompt);
	while (returnValue < minValue) {
		std::cout << "Error!  The value must be >= " << minValue << std::endl;
		returnValue = ReadValue<inputType>(prompt);
	}
	return returnValue;
}

template<typename inputType>
inputType ReadValue(std::string prompt, inputType minValue, inputType maxValue)
{
	inputType returnValue = 0;
	returnValue = ReadValue<inputType>(prompt, minValue);
	while (returnValue > maxValue) {
		std::cout << "Error!  The value must be <= " << maxValue << std::endl;
		returnValue = ReadValue<inputType>(prompt, minValue);
	}
	return returnValue;
}
