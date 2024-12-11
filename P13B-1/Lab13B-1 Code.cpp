// File Name:     P13B-1
// Author:        William Inkrott
// Date:          12/12/24
// Description:   Write a program that, when given a year and month under the Gregorian calendar, indicates whether or not that year is a leap year
//                and how many days are in that month in that particular year. 

int daysInMonth(int month, int year);
bool isLeapYear(int year);
int dayNameFinder(int year, int month, int day);

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	int year = 0, month = 0, totdays = 0, day = 0, dayOfWeek = 0;
	bool yesOrNo;
	string nameOfMonth, dayOfWeekAlpha;
	while (1 == 1)
	{
		year = 0;
		cout << "Enter a month and a year or Q to quit: ";
		cin >> month;
		cin >> day;
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
				totdays = daysInMonth(month, year);
				dayOfWeek = dayNameFinder(year, month, day);
				// 0sat, 1sun, 2mon, etc. 
				if (dayOfWeek == 0)
				{
					dayOfWeekAlpha = "Saturday";
				}
				if (dayOfWeek == 1)
				{
					dayOfWeekAlpha = "Sunday";
				}
				if (dayOfWeek == 2)
				{
					dayOfWeekAlpha = "Monday";
				}
				if (dayOfWeek == 3)
				{
					dayOfWeekAlpha = "Tuesday";
				}
				if (dayOfWeek == 4)
				{
					dayOfWeekAlpha = "Wednesday";
				}
				if (dayOfWeek == 5)
				{
					dayOfWeekAlpha = "Thursday";
				}
				if (dayOfWeek == 6)
				{
					dayOfWeekAlpha = "Friday";
				}
				cout << dayOfWeekAlpha << ", " << nameOfMonth << " " << day << ", " << year << endl;
			}
			else
			{
				cout << "Error. Please try again." << endl;
			}
		}
		else
		{
			cout << "Error. Please try again." << endl;
		}
	}
}

int dayNameFinder(int year, int month, int day)
{
	int newMonth = 0, newYear = 0, dayNumerical = 0;
	if (month >= 3 and month <= 12)
	{
		newMonth = month;
		newYear = year;
	}
	else
	{
		if (month == 1)
		{
			newMonth = 13;
		}
		if (month == 2)
		{
			newMonth = 14;
		}
		newYear = year - 1;
	}
	dayNumerical = (day + (((newMonth + 1) * 26) / 10) + newYear + (newYear / 4) + (6 * (newYear / 100)) + (newYear / 400)) % 7;
	return dayNumerical;
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