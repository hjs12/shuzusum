#include <iostream>
#include <fstream>
using namespace std;

int ArraySum(int n,int bottom,int top)
{int a[100];//��������
int s=0;
ifstream in("D:\\����.txt");
if(!in){cout<<"���ܴ������ļ�:\n";}
for(int i=0;in>>a[i],i<n;i++)
if(bottom<a[i]&&a[i]<<top)
s+=a[i];//ע��forѭ����ʽ
return s;}

int main(void)
{int n,bottom,top;
cout<<"���������鳤�ȣ�";
cin>>n;
cout<<"���������ֵ��Сֵ:";
cin>>bottom>>top;
cout<<"��Ϊ��"<<ArraySum(n,bottom,top)<<endl;
return 0;
}