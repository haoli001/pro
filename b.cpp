#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
struct n{
	ll x,r;
	int zl;
	int gh;
	ll x1,x2;
}p[10000+10];
void change(int i,int rv){
	p[i].r=rv;
}
void no(int n)
{
	for(int i=0;i<n;i++)
	{
		if(p[i].zl==1)
		{
			int ll=i;
			while(p[ll].zl!=0&&ll>=0)ll--;
			int jj=i;
			while(p[jj].zl!=0&&jj<n)jj++;
			if(ll>=0||jj<n)
			{
			if(abs(ll-i)!=abs(jj-i))
			p[i].x1=abs(ll-i)<abs(jj-i)?ll:jj;
			else 
			p[i].x1=max(p[ll].x,p[jj].x);
			p[i].r=p[p[i].x1].r;
			}
		}
	}
}
void now(int n,int ii)
{
	for(int i=0;i<n;i++)
	{
		if(p[i].zl==1&&p[i].x1==ii+1){
			p[i].r=p[ii].x;
		}
	}
}
int main()
{
int T;
cin>>T;
for(int caess=1;caess<=T;caess++)
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i].x>>p[i].r;
		p[i].zl=0;
		p[i].gh=0;
	}
	for(int i=0;i<n;i++)
	{
		if(p[i].r==0)
		{
			p[i].zl=1;
		}
	}
	no(n);
	char a;
	scanf("%c",&a);
	if(a=='Q')
	{
	int gg;
	scanf("%d",&gg);
		printf("%lld",p[gg].r);
	}
	else {
		int l,m;
		scanf("%d%d",&l,&m);
		change(l+1,m);
		now(n,l);
	}
}
return 0;
}
