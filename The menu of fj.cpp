#include<iostream>
using namespace std;
int main()
{
	cout << "��ӭ�������ҷ�ζС��" << endl;
	int number = 1;
	cout << "��������Ҫ��Ĳ˶�Ӧ�ı�ţ�1-7��" << endl;
	cout << "�ɲ��ղ˵�" << endl;
	cin>>number;
	if (number == 1)
	{
		cout << "��ѡ��Ĳ��ǣ���帹��" << endl;
	}
	else if (number == 2)
	{
		cout << "��ѡ��Ĳ��ǣ�����¶��鸹��" << endl;
	}
	else if (number == 3)
	{
		cout << "��ѡ��Ĳ��ǣ����ƿ�����" << endl;
	}
	else if (number == 4)
	{
		cout << "��ѡ��Ĳ��ǣ���������" << endl;
	}
	else if (number == 5)
	{
		cout << "��ѡ��Ĳ��ǣ���±����" << endl;
	}
	else if (number == 6)
	{
		cout << "��ѡ��Ĳ��ǣ����ո���" << endl;
	}
	else if (number == 7)
	{
		cout << "��ѡ��Ĳ��ǣ��������" << endl;
	}
	else
	{
		cout << "������Ĳ˲����ڣ�����˳�" << endl;
		exit(0);
	}
	cout << "���������������Լ���" << endl;
	cin >> number;
	 
	cout << "ף���ò����" << endl;
	system("pause");
	return 0;
}