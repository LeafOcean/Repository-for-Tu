#include<iostream>
using namespace std;
int main()
{
	cout << "»¶Ó­À´µ½ÍÁ¼Ò·çÎ¶Ğ¡¹İ" << endl;
	int number = 1;
	cout << "ÇëÊäÈëÄúÒªµãµÄ²Ë¶ÔÓ¦µÄ±àºÅ£¨1-7£©" << endl;
	cout << "¿É²ÎÕÕ²Ëµ¥" << endl;
	cin>>number;
	if (number == 1)
	{
		cout << "ÄãÑ¡ÔñµÄ²ËÊÇ£ºÏã¼å¸¹¼¡" << endl;
	}
	else if (number == 2)
	{
		cout << "ÄãÑ¡ÔñµÄ²ËÊÇ£ººÚËÉÂ¶´ó¿é¸¹¼¡" << endl;
	}
	else if (number == 3)
	{
		cout << "ÄãÑ¡ÔñµÄ²ËÊÇ£ºÕĞÅÆ¿¾¸¹¼¡" << endl;
	}
	else if (number == 4)
	{
		cout << "ÄãÑ¡ÔñµÄ²ËÊÇ£º±¬³´¸¹¼¡" << endl;
	}
	else if (number == 5)
	{
		cout << "ÄãÑ¡ÔñµÄ²ËÊÇ£ºÑÎÂ±¸¹¼¡" << endl;
	}
	else if (number == 6)
	{
		cout << "ÄãÑ¡ÔñµÄ²ËÊÇ£ººìÉÕ¸¹¼¡" << endl;
	}
	else if (number == 7)
	{
		cout << "ÄãÑ¡ÔñµÄ²ËÊÇ£º¸¹¼¡»ğ¹ø" << endl;
	}
	else
	{
		cout << "ÄãÊäÈëµÄ²Ë²»´æÔÚ£¬Èí¼şÍË³ö" << endl;
		exit(0);
	}
	cout << "ÇëÊäÈëÈÎÒâÄÚÈİÒÔ¼ÌĞø" << endl;
	cin >> number;
	 
	cout << "×£ÄúÓÃ²ÍÓä¿ì" << endl;
	system("pause");
	return 0;
}