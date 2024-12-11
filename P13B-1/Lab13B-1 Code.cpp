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
	int year = 0, month = 0, totdays = 0, day = 0, dayOfWeek = 0, printDay = 0;
	bool yesOrNo;
	string nameOfMonth, dayOfWeekAlpha;
	while (1 == 1)
	{
		year = 0;
		cout << "Enter a month and a year or Q to quit: ";
		cin >> Month;
		cin >> Year;
		if (Year == 0)
		{
			return 0;
		}
		if (Year >= 1582)
		{
				if (nameOfMonth == "January")
				{
					month = 1;
				}
				if (nameOfMonth == "Febraury")
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




				cout << "S"




                        if (c = dayOfWeek)
						{
                           printDay = printDay + 1;
						   cout << printDay;
						}
				for (r = 0; r < 7; r++)
				{
					for (c = 0; c < 5; c++)
					{
						
					}
					cout << endl;
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