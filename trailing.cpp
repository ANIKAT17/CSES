#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin>>n;
  ll int count = 0;
 
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
     cout<<count<<endl;

}