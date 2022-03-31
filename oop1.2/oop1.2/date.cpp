//date.ccp
#include "date.h"
#include <Windows.h>
bool date::init(int day1, int month1, int year1)
{
	if (day1<1 || month1<1 || day1>31 || month1>12)
	{
		return false;
	}
	set_day(day1);
	set_month(month1);
	set_year(year1);
	return true;

}
void date::Read()
{
	int day;
	int month;
	int year;
	do
	{
		cout << "  day= ? "; cin >> day;
		cout << " month= ? "; cin >> month;
		cout << " year= ? "; cin >> year;
		
	} while (!init(day, month, year));
}
void date::presen()
{
	string str;
	if (month==1)
	{
		str = "січня";
	}
	if (month == 2)
	{
		str = "лютого";
	}
	if (month == 3)
	{
		str = "березня";
	}
	if (month == 4)
	{
		str = "квітня";
	}
	if (month == 5)
	{
		str = "травня";
	}
	if (month == 6)
	{
		str = "червня";
	}
	if (month == 7)
	{
		str = "липня";
	}
	if (month == 8)
	{
		str = "серпня";
	}
	if (month == 9)
	{
		str = "вересня";
	}
	if (month == 10)
	{
		str = "жовтня";
	}
	if (month == 11)
	{
		str = "листопада";
	}
	if (month == 12)
	{
		str = "грудня";
	}
	cout << day << str << year << "року" << endl;
}
void date::represen()
{
	if (day<10)
	{
		if (month < 10)
		{
			cout << '0' << day << '.' << '0' << month << '.' << year << endl;
		}
		else
		{
			cout << '0' << day << '.' << month << '.' << year << endl;
		}
	}
	else
	{
		if (month < 10)
		{
			cout << day << '.' << '0' << month << '.' << year << endl;
		}
		else
		{
			cout  << day << '.' << month << '.' << year << endl;
		}
	}
}
void date::Display() const
{
	cout << " day = " <<day << endl;
	cout << " month = " << month << endl;
	cout << " year = " << year << endl;
}