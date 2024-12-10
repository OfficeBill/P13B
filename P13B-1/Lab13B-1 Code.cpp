// File Name:     P13B-1
// Author:        William Inkrott
// Date:          12/12/24
// Description:   Write a program that, when given a year and month under the Gregorian calendar, indicates whether or not that year is a leap year
//                and how many days are in that month in that particular year. 

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
	string nameOfMonth;
	while (1 == 1)
	{
		year = 0;
		cout << "Enter a month and a year or Q to quit: ";
		cin >> month;
		cin >> year;
		if (year == 0)
		{
			return 0;
		}
		if (year >= 1582)
		{
			if (month >=1 and month <= 12)
			{
				if (month == 1)
				{
					nameOfMonth = "January";
				}
				if (month == 2)
				{
					nameOfMonth = "Febraury";
				}
				if (month == 3)
				{
					nameOfMonth = "March";
				}
				if (month == 4)
				{
					nameOfMonth = "April";
				}
				if (month == 5)
				{
					nameOfMonth = "May";
				}
				if (month == 6)
				{
					nameOfMonth = "June";
				}
				if (month == 7)
				{
					nameOfMonth = "July";
				}
				if (month == 8)
				{
					nameOfMonth = "August";
				}
				if (month == 9)
				{
					nameOfMonth = "September";
				}
				if (month == 10)
				{
					nameOfMonth = "October";
				}
				if (month == 11)
				{
					nameOfMonth = "November";
				}
				if (month == 12)
				{
					nameOfMonth = "December";
				}
				days = daysInMonth(month, year);
				cout << nameOfMonth << " of " << year << " has " << days << " days." << endl;
			}
			else
			{
				cout << "Error. Month must be 1-12 and year must be >= 1582." << endl;
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
		return 31;
	}
	if (month == 2)
	{
		bool leap = isLeapYear(year);
		if (leap == true)
		{
			return 29;
		}
		if (leap == false)
		{
			return 28;
		}
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