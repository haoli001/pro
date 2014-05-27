#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int set[100000+10]={0};
int main()
{
	int n,m;
	cin>>n>>m;
	int j=0;
	for(int i=0;i<m;i++)
	{
		int b;
		cin>>b;
		if(b<n)
		{
			set[j++]=b;
		}
	}
	long long sum=0;
	for(int i=0;i<j;i++)
	{
		sum+=abs(set[])
	}
}
