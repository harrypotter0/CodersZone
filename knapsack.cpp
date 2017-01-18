#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main ()
{
int a[]={1,3,5};
int n,s=3,i,j;
cin>>n;
int min[n];
for(i=0;i<=n;i++)
min[i]=100000;
min[0]=0;
for(i=1;i<=n;i++)
{for(j=0;j<s;j++)
{
if(i>=a[j])
{
if(min[i-a[j]]+1<min[j])
min[i]=min[i-a[j]]+1;
}
}}
if(min[n]==100000)
cout<<"BK**"<<endl;
cout<<min[n];
return 0;
}
