//Josephu
#include<iostream>
#include<stdlib.h>
using namespace std;
bool a[101];
int i;
int main()
{
	int n,m;
	cout<<"N����Χ��һȦ���ӵ�һ���˿�ʼ����"<<endl<<"����M���˳�Ȧ��������һ���˿�ʼ����������M��Ȧ......"<<endl<<"�Դ����ƣ���ֱ�����N��M��ֵ��"<<endl; 
	cin>>n>>m;
	cout<<endl;
	for (int i=1;i<=n;++i) a[i]=false;						//��ͬ��memset(a,0,sizeof(a))
	int f=0,t=0,s=0;
	do
	{
		++t;
		if (t==n+1)
		{
			t=1;
		}
		if (a[t]==false)
		{
			++s;
		}
		if (s==m)
		{
			s=0;
			cout<<t<<" ";
			a[t]=true;
			++f;
		}
	}
	while (f!=n);
	{
		cout<<endl;
		system("pause");
		return 0;	
	}system("pause");
}

