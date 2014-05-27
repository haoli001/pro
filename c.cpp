#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string h;
	while(cin>>h){
		if(h.length()!=n)
		{
			if(h.length()>n)
			h.erase(n,h.length()-n);
			else 
			h.insert(h.length(),n-h.length(),'0');
		}
//		cout<<h<<endl;
		if(n&1)
		{
			int i,j;
			i=j=(n-1)/2;
			if(h[i]=='1')
			{
				h[i]='0';
			}
			while(1)
			{	
				while(i>=0&&h[i]==h[j])i--,j++;
				if(i>=0)
				h[j]=h[i];
				else break;
			}
		}
		else {
			int i,j;
			i=(n-1)/2;
			j=i+1;
			while(1)
			{
				while(i>=0&&h[i]==h[j])i--,j++;
				if(i>=0)
				h[j]=h[i];
				else break;
			}
		
		}
		cout<<h<<endl;
	}
	return 0;
}
