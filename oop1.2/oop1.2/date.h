//date.h
#pragma once
#include <string>
#include<iostream>
using namespace std;
class date
{
private:
	int day;
	int month;
	int year;
public:
	int get_day() const { return day; }
	int get_month() const { return month; }
	int get_year() const { return year; }
	void set_day(int a) {day = a; }
	void set_month(int a) { month = a; }
	void set_year(int a) { year = a; }
	bool init(int day1, int month1, int year1);
	void presen();
	void represen();
	void Read();
	void Display() const;
};
