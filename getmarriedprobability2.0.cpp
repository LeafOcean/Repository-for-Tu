#include<iostream>
using namespace std;
int main()
{
	long long a = 1;
	int b = 1;
	srand(time(NULL));
	a = rand() % 100;
	cout << "�����뱻�����˵��������ÿո����ӣ�" << endl;
	cin >> b;
	cout << "���ǵĽ������" << a <<"%" << endl;
	system("pause");
	return 0;
}