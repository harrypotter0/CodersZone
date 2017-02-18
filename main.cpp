#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int i,n=600851475143,a[201201],j=0;
while(n%2==0)
{
n=n/2;a[j]=2;j++;
}
for(i=3;i<n;i=i+2)
{
while(n%i==0)
{
a[j]=i;j++;
n=n/i;}}
if(n>2)a[j]=n;
sort(a,a+j);
cout<<a[j]<<endl;
    return 0;
}
