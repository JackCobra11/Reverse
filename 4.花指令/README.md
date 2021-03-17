# 花指令

作用：防静态分析，不防动态分析

设计思路：构造恒成立代码，在其中插入无效数据（干扰数据）

去除：NOP

```//代码段
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
