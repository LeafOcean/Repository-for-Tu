#include <iostream>
#include <windows.h>
//#include <cstdlib>
using namespace std;
int days = 0;
int hours = 1;
int mintues = 10;
int seconds = 0;
void printMenu()
{
	cout << "���ҷ�ζС�ݼ�������22��" << endl;
	cout << endl;
}

void CountDown_Seconds(int& Days, int& Hours, int& Mintues, int& Seconds)//����
{
	for (; Seconds >= 0; Seconds--)
	{
		cout << "����ʱ" << Days << "��" << Hours << "Сʱ" << Mintues << "��" << Seconds << "��" << endl;//Seconds��Sû�д�д
		Sleep(1000);//��Sleep���Կ����ʱ��
		system("cls");
	}
}
void CountDown_Mintues(int& Days, int& Hours, int& Mintues, int& Seconds)//����
{
	for (; Mintues >= 0; Mintues--)//<=�ĳ�>=
	{
		CountDown_Seconds(Days, Hours, Mintues, Seconds);
		Seconds = 59; //����ĳ�59
	}
}
void CountDown_Hours(int& Days, int& Hours, int& Mintues, int& Seconds)//����
{
	for (; Hours >= 0; Hours--)//<=�ĳ�>=
	{
		CountDown_Mintues(Days, Hours, Mintues, Seconds);
		Mintues = 59;//����ĳ�59
	}
}
void CountDown(int Days, int Hours, int Mintues, int Seconds)
{
	for (; Days >= 0; Days--)//<=�ĳ�>=
	{
		CountDown_Hours(Days, Hours, Mintues, Seconds);
		Hours = 23; //����ĳ�23
	}
}
int main()
{
	int i = 1;
	int set;
	printMenu();
	while (i <= 3)
	{
		cout << "������1����12:00׼ʱ���»س�" << endl;
		cin >> set;
		if (set)
		{
			break;
		}
		i++;
	}
	CountDown(days, hours, mintues, seconds);
	cout << "���ҷ�ζС����ʽ����22�ܣ�" << endl;
	//system("pause");
	return 0;
}