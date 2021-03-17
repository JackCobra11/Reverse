#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    __asm
    {
        je lable1;
        jmp lable2;
        _emit 0x8;
    lable1:;
    lable2:;
    }
    if (a == 123456)
    {
        cout << "QAQ";
    }
    else
    {
        cout << "QVQ";
    }
    return 0;
}
