#include<bits/stdc++.h>
using namespace std;
int search (int ma[4][4],int n,int m)
{
   int i=0,j=n-1;
   while(i<=n && j>=0){
   if(ma[i][j] ==m)
   {
       cout<<"mil GYA"<<endl<<i+1<<" "<<j+1;
       return 1;
   }
   if(ma[i][j]>m)
   j--;
   else
   i++;
   }
   return 0;
}
int main()
{
  int re;
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  re =search(mat, 4, 29);
  if(re!=1)
  cout<<"NAHI mila ";
  return 0;
}