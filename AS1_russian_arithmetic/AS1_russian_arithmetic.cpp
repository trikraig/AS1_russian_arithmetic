/**
C++ Programming Assignment 1 (GAV1030-N), AS1_russian_arithmetic.cpp
Purpose: Russian Arithmetic

@author Craig Palmer 18/01/2019

*/

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> firstNum;
	vector <int> secondNum;
	vector <int> thirdNum;
	int inputNum;
	int result{ 0 };



	// Takes input values from user.
	cout << "Please enter your first value to calculate using Russian Arithmetic. " << endl;
	cin >> inputNum;
	firstNum.push_back(inputNum);

	cout << "Please enter your second value. " << endl;
	cin >> inputNum;
	secondNum.push_back(inputNum);

	// Repeatedly halves first number value and stores into vector array firstNum.
	for (int i = 0; firstNum[i] > 1; i++)
	{
		int calcNum;
		calcNum = firstNum[i] / 2;
		firstNum.push_back(calcNum);
	}

	// Repeatedly doubles second number value equal to number of steps taken for first number value calculation and stores into vector array secondNum.
	for (int i = 0; i < (firstNum.size() - 1); i++)
	{
		int calcNum;
		calcNum = secondNum[i] * 2;
		secondNum.push_back(calcNum);
	}

	// Checking value of firstNum vector, if odd then the corresponding value in secondNum vector is copied over to thirdNum vector array.
	for (int i = 0; i < firstNum.size(); i++)

		if ((firstNum[i] % 2) != 0)
		{
			inputNum = secondNum[i];
			thirdNum.push_back(inputNum);
		}

	// Adds all values stored in thirdNum vector array.
	for (int num : thirdNum)
	{
		result += num;
	}


	// Outputs result to the user.
	cout << "The result is: " << result << endl;
































	return 0;
}





