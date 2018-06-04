// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDate
{
protected:
	int year;
	int month;
	int day;
public:

	CDate();
	CDate::~CDate(void);
	CDate(int y, int m, int d);
	void display();
};
CDate::CDate()
{
	year = 2017;
	month = 12;
	day = 1;
	cout << "基类默认构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::CDate(int y, int m, int d)
{
	cout<<"基类构造函数" << year << "年" << month << "月" << day << "日" << endl;
}
void CDate::display()
{
	cout<< "基类display" << year << "年" << month << "月" << day << "日" << endl;
}
CDate::~CDate(void)
{
	cout<< "基类析构函数" << year << "年" << month << "月" << day << "日" << endl;
}
class LEnovo :public CDate
{
public:
	LEnovo(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
		cout<< "派生构造函数" << year << "年" << month << "月" << day << "日" << endl;
	}
	LEnovo()
	{
		cout << "派生类析构函数" << year << "年" << month << "月" << day << "日" << endl;
	}
};
int main()
{
	LEnovo omydatel(2018,6,4);
	omydatel.display();
    return 0;
}