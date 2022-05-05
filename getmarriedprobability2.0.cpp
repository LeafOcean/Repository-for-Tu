#include<iostream>
using namespace std;
int main()
{
	long long a = 1;
	int b = 1;
	srand(time(NULL));
	a = rand() % 100;
	cout << "请输入被测试人的姓名（用空格连接）" << endl;
	cin >> b;
	cout << "你们的结婚率是" << a <<"%" << endl;
	system("pause");
	return 0;
}