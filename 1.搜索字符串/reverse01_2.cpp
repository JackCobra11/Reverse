#include <iostream>
using namespace std;
int main()
{
	char str1[] = { 0xC7,0xEB ,0xCA ,0xE4 ,0xC8 ,0xEB ,0xA3 ,0xBA ,'\0'};
	char str2[] = { 0xCA ,0xE4 ,0xC8 ,0xEB ,0xD5 ,0xFD ,0xC8 ,0xB7 ,'\0' };
	char str3[] = { 0xCA ,0xE4 ,0xC8 ,0xEB ,0xB4 ,0xED ,0xCE ,0xF3 ,'\0' };
	int password;
label1:
	cout<<str1;
	cin >> password;
	if (password == 114514)
	{
		cout<<str2<<endl;
	}
	else
	{
		cout<<str3<<endl;
		goto label1;
	}
	return 0;
}
