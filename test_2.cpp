// 包含iostream头文件，使用std命名空间
#include <iostream>
using namespace std;
// 主函数
int main()
{
     // 定义一个整型变量num，初始值为100
     int num =100；
     // 使用do-while循环
     do 
    {
        // 定义三个整型变量a、b、c，初始值为0
        int a=0,b=0,c=0；
        // 将num的最后一位数赋值给a
        a=num%10；
        // 将num的最后两位数赋值给b
        b=num/10%10；
        // 将num的最后三位数赋值给c
        c=num/100；
        // 如果a的三次方加上b的三次方加上c的三次方等于num，则输出num
        if (a*a*a+b*b*b+c*c*c==num)
        {
            cout<<num<<endl；
        } 
        // num自增
        num++；

    }while (num<1000）；
     // 暂停程序
     system("pause");
     // 返回0
     return 0; 
}