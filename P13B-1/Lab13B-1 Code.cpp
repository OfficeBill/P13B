// File Name:     P13B-1
// Author:        William Inkrott
// Date:          12/12/24
// Description:   Write a program that, when given a date in the Gregorian calendar, outputs the day of the week, day, month, and year.

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
	string calendar[] = { "                   1  2  3  4  5  6  7  ",
						  " 2  3  4  5  6  7  8  9 10 11 12 13 14  ",
						  " 9 10 11 12 13 14 15 16 17 18 19 20 21  ",
						  "16 17 18 19 20 21 22 23 24 25 26 27 28  ",
						  "23 24 25 26 27 28 29 30 31              ",
						  "30 31                                   " };
	int year = 0, month = 0, totdays = 0, day = 1, dayOfWeek = 0, index = 0, indexEnd = 0, printIndexEnd = 0;
	bool boolIsLeapYear;
	string nameOfMonth, dayOfWeekAlpha;
	while (1 == 1)
	{
		year = 0;
		cout << "Enter a month and a year or Q to quit: ";
		cin >> nameOfMonth;
		cin >> year;
		if (year == 0)
		{
			return 0;
		}
		if (year >= 1582)
		{
			if (nameOfMonth == "January")
			{
				month = 1;
			}
			if (nameOfMonth == "February")
			{
				month = 2;
			}
			if (nameOfMonth == "March")
			{
				month = 3;
			}
			if (nameOfMonth == "April")
			{
				month = 4;
			}
			if (nameOfMonth == "May")
			{
				month = 5;
			}
			if (nameOfMonth == "June")
			{
				month = 6;
			}
			if (nameOfMonth == "July")
			{
				month = 7;
			}
			if (nameOfMonth == "August")
			{
				month = 8;
			}
			if (nameOfMonth == "September")
			{
				month = 9;
			}
			if (nameOfMonth == "October")
			{
				month = 10;
			}
			if (nameOfMonth == "November")
			{
				month = 11;
			}
			if (nameOfMonth == "December")
			{
				month = 12;
			}

			totdays = daysInMonth(month, year);
			dayOfWeek = dayNameFinder(year, month, day);
			if (dayOfWeek == 0)
			{
				index = 0;
			}
			else
			{
				index = dayOfWeek * 3;
			}
			indexEnd = index + 19;
			cout << nameOfMonth << " " << year << endl;
			cout << "Su Mo Tu We Th Fr Sa" << endl;

			string stringCompare;
			string stringTotDays = to_string(totdays);
			string substring;
			int totalDayLocation;
			
			for (int i = 0; i <= 5; i++)
			{
				substring = calendar[i].substr(index, 20);
				totalDayLocation = substring.find(stringTotDays);
				if (totalDayLocation == -1)
				{
					cout << substring << endl;
				}
				else
				{
					cout << substring.substr(0, totalDayLocation + 2) << endl;
					break;
				}
			}
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
	if (dayNumerical != 0)
	{
		dayNumerical = abs(dayNumerical - 7);
	}
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
		return 31;
	}
	if (month == 4)
	{
		return 30;
	}
	if (month == 5)
	{
		return 31;
	}
	if (month == 6)
	{
		return 30;
	}
	if (month == 7)
	{
		return 31;
	}
	if (month == 8)
	{
		return 31;
	}
	if (month == 9)
	{
		return 30;
	}
	if (month == 10)
	{
		return 31;
	}
	if (month == 11)
	{
		return 30;
	}
	if (month == 12)
	{
		return 31;
	}
}