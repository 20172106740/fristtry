// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "����Ĭ�Ϲ��캯��" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::CDate(int y, int m, int d)
{
	cout<<"���๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
}
void CDate::display()
{
	cout<< "����display" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::~CDate(void)
{
	cout<< "������������" << year << "��" << month << "��" << day << "��" << endl;
}
class LEnovo :public CDate
{
public:
	LEnovo(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
		cout<< "�������캯��" << year << "��" << month << "��" << day << "��" << endl;
	}
	LEnovo()
	{
		cout << "��������������" << year << "��" << month << "��" << day << "��" << endl;
	}
};
int main()
{
	LEnovo omydatel(2018,6,4);
	omydatel.display();
    return 0;
}