#include <iostream>

using namespace std; //������������� ������������ ���� std

int main()
{
	setlocale(LC_ALL, "rus"); //��������� ������

	string date1, date2;

	cout << "������� 2  ����: " << endl;
	cout << endl;

	cout << "1 ����: ";
	cin >> date1; //���� ������ ����
	cout << "2 ����: ";
	cin >> date2; //���� ������ ����

	int year1, year2, month1, month2, day1, day2;

	year1 = atoi(date1.substr(6, 4).c_str()); //������� ���� �� string � int
	year2 = atoi(date2.substr(6, 4).c_str());

	month1 = atoi(date1.substr(3, 2).c_str()); //������� ������ �� string � int
	month2 = atoi(date2.substr(3, 2).c_str());

	day1 = atoi(date1.substr(0, 2).c_str()); //������� ��� �� string � int
	day2 = atoi(date2.substr(0, 2).c_str());

	int year = 0, month = 0, day = 0;

	//�������� ������� ���������� ���, ������� � ���� ����� ����� ������
	if (year1 < year2)
	{
		if (month1 < month2)
		{
			year = year2 - year1;
			if (day1 <= day2)
			{
				month = month2 - month1;
				day = day2 - day1;
			}
			if (day1 > day2)
			{
				month = month2 - month1 - 1;
				day = 30 - day1 + day2;
			}
		}
		if (month1 > month2)
		{
			year = year2 - year1 - 1;
			if (day1 <= day2)
			{
				month = 12 - month1 + month2;
				day = day2 - day1;
			}
			if (day1 > day2)
			{
				month = 12 - month1 + month2 - 1;
				day = 30 - day1 + day2;
			}
		}
		if (month1 == month2)
		{
			if (day1 <= day2)
			{
				year = year2 - year1;
				day = day2 - day1;
			}
			if (day1 > day2)
			{
				year = year2 - year1 - 1;
				month = 11;
				day = 30 - day1 + day2;
			}
		}
	}
	if (year1 > year2)
	{
		if (month1 > month2)
		{
			year = year1 - year2;
			if (day1 >= day2)
			{
				month = month1 - month2;
				day = day1 - day2;
			}
			if (day1 < day2)
			{
				month = month1 - month2 - 1;
				day = 30 - day2 + day1;
			}
		}
		if (month1 < month2)
		{
			year = year1 - year2 - 1;
			if (day1 < day2)
			{
				month = 12 - month2 + month1 - 1;
				day = 30 - day2 + day1;
			}
			if (day1 >= day2)
			{
				month = 12 - month2 + month1;
				day = day1 - day2;
			}
		}
		if (month1 == month2)
		{
			if (day1 < day2)
			{
				year = year1 - year2 - 1;
				month = 11;
				day = 30 - day2 + day1;
			}
			if (day1 >= day2)
			{
				year = year1 - year2;
				day = day1 - day2;
			}
		}
	}
	if (year1 == year2)
	{
		if (month1 < month2)
		{
			if (day1 <= day2)
			{
				month = month2 - month1;
				day = day2 - day1;
			}
			if (day1 > day2)
			{
				month = month2 - month1 - 1;
				day = 30 - day1 + day2;
			}
		}
		if (month1 > month2)
		{
			if (day1 < day2)
			{
				month = month1 - month2 - 1;
				day = 30 - day2 + day1;
			}
			if (day1 >= day2)
			{
				month = month1 - month2;
				day = day1 - day2;
			}
		}
		if (month1 == month2)
		{
			if (day1 <= day2)
				day = day2 - day1;
			if (day1 > day2)
				day = day1 - day2;
		}
	}

	int days;

	days = year * 365 + month * 30 + day; //������ ���������� ���� ����� ����� ������

	cout << endl << "������ ���������� ���� ����� ����� ������: " << days << endl;
}