// File Name:     P13B-1
// Author:        William Inkrott
// Date:          12/12/24
// Description:   Write a program that, when given a year under the Gregorian calendar, indicates whether or not that year is a leap year. 


int daysInMonth(int month, int year);
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
	int year = 0, month = 0, days = 0;
	bool yesOrNo;
	while (1 == 1)
	{
		year = 0;
		cout << "Enter a month and a year or Q to quit: ";
		cin >> year;
		if (year == 0)
		{
			return 0;
		}
		if (year >= 1582)
		{
			if (month >=1 and month <= 12)
			{
				days = daysInMonth(month, year);
				cout << year << " of " << month << " has " << days << " days." << endl;
			}
		}
		else
		{
			cout << "Error. Month must be 1-12 and year must be >= 1582." << endl;
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

int daysInMonth(int month, int year)
{
	if (month == 1)
	{
		return 30;
	}
	if (month == 2)
	{
		return ;
	}
	if (month == 3)
	{
		return 30;
	}
	if (month == 4)
	{
		return 31;
	}
	if (month == 5)
	{
		return 30;
	}
	if (month == 6)
	{
		return 31;
	}
	if (month == 7)
	{
		return 30;
	}
	if (month == 8)
	{
		return 30;
	}
	if (month == 9)
	{
		return 31;
	}
	if (month == 10)
	{
		return 30;
	}
	if (month == 11)
	{
		return 31;
	}
	if (month == 12)
	{
		return 30;
	}
}