#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{int a[100];//��������
int sum=0;
ifstream in("D:\\����.txt");
if(!in){cout<<"���ܴ������ļ�:\n";}
for(int i=0;in>>a[i],i<100;i++)
sum+=a[i];//ע��forѭ����ʽ
cout<<"����Ԫ��֮��Ϊ:"<<sum<<endl;
return 0;}
