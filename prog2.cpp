#include <iostream>
#include <fstream>
using namespace std;

int ArraySum(int n)
{int a[100];//��������
int s=0;
ifstream in("D:\\����.txt");
if(!in){cout<<"���ܴ������ļ�:\n";}
for(int i=0;in>>a[i],i<n;i++)
s+=a[i];//ע��forѭ����ʽ
return s;}

int main(void)
{int n;
cout<<"���������鳤�ȣ�";
cin>>n;
cout<<"��Ϊ��"<<ArraySum(n)<<endl;
return 0;
}