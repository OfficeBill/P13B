// File Name:     P13B-1
// Author:        William Inkrott
// Date:          12/12/24
// Description:   Write a program that, when given a year under the Gregorian calendar, indicates whether or not that year is a leap year. 

bool isLeapYear(int year);

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	int year = 0;
	bool yesOrNo;
	while (1 == 1)
	{
		year = 0;
		cout << "Enter a year or Q to quit: ";
		cin >> year;
		if (year == 0)
		{
			return 0;
		}
		if (year >= 1582)
		{
			yesOrNo = isLeapYear(year);
			if (yesOrNo == true)
			{
				cout << year << " is a leap year." << endl;
			}
			else
			{
				cout << year << " is not a leap year." << endl;
			}
		}
		else
		{
			cout << "Year must be greater than or equal to 1582." << endl;
		}
	}
}

bool isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}