// 包含iostream头文件，使用std命名空间
#include <iostream>
using namespace std;
// 主函数
int main()
{
    // 循环1到100
    for(int i=1;i<=100;i++)
    {
        // 如果i除以7的余数为0，或者i除以10等于7，或者i等于7乘以10，则输出“敲桌子”
        if(i%7==0||i%10==7||i/10==7)
        {
            cout<<"敲桌子"<<endl;
        }
        // 否则输出i
        else
        {
            cout<<i<<endl;
        }
        
    }
    // 暂停程序
    system("pause");
    // 返回0
    return 0;
}