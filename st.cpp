#include <iostream>
#include <algorithm>
using namespace std;
const int len=100000+10;
int a[len]={0};
int aa[len]={0};
long long  c[len]={0};
long long cc[len]={0};
int n;
int lowbit(int x)
{
	return x&(-x);
}
void  add(int l,int x,long long *b){
	while(l<=n){
		b[l]+=x;
		l+=lowbit(l);
	}

}
long long sum(int flag,int n){
	long long summ=0;
	while(n>0){
		if(flag==1)
		summ+=c[n];
		else 
		summ+=cc[n];
		n-=lowbit(n);
	}
	return summ;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		aa[i]=a[i];
	}
	sort(aa+1,aa+n+1);
	for(int i=1;i<=n;i++)
	{
		add(i,a[i],c);
		add(i,aa[i],cc);
	}
///*
	for(int i=1;i<=n;i++)
		cout<<c[i]<<" ";
	cout<<endl;
	for(int i=1;i<=n;i++)
	cout<<cc[i]<<" ";
	cout<<endl;
//*/
	int f;
	cin>>f;
	for(int i=0;i<f;i++)
	{
		int q,l,r;
		cin>>q>>l>>r;
		cout<<sum(q,r)-sum(q,l-1)<<endl;
	}
return 0;
}
