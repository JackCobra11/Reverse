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
            je label1;
            jmp label2;
            _emit 0x8;
        label1:;
        label2:;
        }
    }
    else
    {
        cout << "QVQ";
        __asm
        {
            je label3;
            jmp label4;
            _emit 0x8;
        label3:;
        label4:;
        }
    }
    return 0;
}
