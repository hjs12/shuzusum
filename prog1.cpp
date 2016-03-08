#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{int a[100];//创建数组
int sum=0;
ifstream in("D:\\数据.txt");
if(!in){cout<<"不能打开输入文件:\n";}
for(int i=0;in>>a[i],i<100;i++)
sum+=a[i];//注意for循环格式
cout<<"数组元素之和为:"<<sum<<endl;
return 0;}
