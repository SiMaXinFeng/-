//Josephu
#include<iostream>
#include<stdlib.h>
using namespace std;
bool a[101];
int i;
int main()
{
	int n,m;
	cout<<"N个人围成一圈，从第一个人开始报数"<<endl<<"数到M的人出圈；再由下一个人开始报数，数到M出圈......"<<endl<<"以此类推，请分别输入N和M的值："<<endl; 
	cin>>n>>m;
	cout<<endl;
	for (int i=1;i<=n;++i) a[i]=false;						//等同于memset(a,0,sizeof(a))
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

