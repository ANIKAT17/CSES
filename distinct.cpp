#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll int n,i;
	cin>>n;
	int a[n];
	ll count=0;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < n; i++)
	{
		if(a[i]!=a[i+1])
		{
			count++;
		}
	}
	cout<<count;
}