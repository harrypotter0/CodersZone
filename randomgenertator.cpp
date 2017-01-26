#include<bits/stdc++.h>
#include<time.h>
using namespace std;
void swap(int *a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void ran(int arr[],int n)
{
    srand(time(NULL));
    for(int i=n-1;i>0;i--)
    {
        int j=rand()%(i+1);
        swap(&arr[i],&arr[j]);
    }
}
int main ()
{
    int i,t,arr[100];
    cin>>t;
    for(int i=0;i<t;i++)
    cin>>arr[i];
    ran(arr,t);
    for(i=0;i<t;i++)
        cout<<arr[i];
    cout<<endl;
    return 0;
}
