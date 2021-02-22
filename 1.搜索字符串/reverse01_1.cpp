#include <iostream>
using namespace std;
int main()
{
	int password;
lable1:
	cout << "请输入：";
	cin >> password;
	if (password == 114514)
	{
		cout << "输入正确"<<endl;
	}
	else
	{
		cout << "输入错误"<<endl;
		goto lable1;
	}
	return 0;
}

