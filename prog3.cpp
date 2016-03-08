#include <iostream>
#include <fstream>
using namespace std;

int ArraySum(int n,int bottom,int top)
{int a[100];//创建数组
int s=0;
ifstream in("D:\\数据.txt");
if(!in){cout<<"不能打开输入文件:\n";}
for(int i=0;in>>a[i],i<n;i++)
if(bottom<a[i]&&a[i]<<top)
s+=a[i];//注意for循环格式
return s;}

int main(void)
{int n,bottom,top;
cout<<"请输入数组长度：";
cin>>n;
cout<<"请输入最大值最小值:";
cin>>bottom>>top;
cout<<"和为："<<ArraySum(n,bottom,top)<<endl;
return 0;
}