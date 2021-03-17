#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    
    if (a == 123456)
    {
        cout << "QAQ";
        __asm
        {
            je lable1;
            jmp lable2;
            _emit 0x8;
        lable1:;
        lable2:;
        }
    }
    else
    {
        cout << "QVQ";
        __asm
        {
            je lable3;
            jmp lable4;
            _emit 0x8;
        lable3:;
        lable4:;
        }
    }
    return 0;
}
