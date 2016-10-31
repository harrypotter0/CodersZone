#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    int a[200];
	    int m=1;
	    a[0] = 1;
	    for(int j=1; j<=n; j++){
	        int temp = 0;
	        for(int k=0; k<m; k++){
	            int x = a[k]*j + temp;
	            a[k] = x%10;
	            temp = x/10;
	        }
	        while(temp != 0){
	            a[m++] = temp%10;
	            temp = temp/10;
	        }
	    }
	    for(int j=m-1; j>=0; j--){
	        cout<<a[j];
	    }
	    cout<<endl;
	}
	return 0;
}
