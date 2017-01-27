// C++ program to count trailing 0s in n!
#include <iostream>
using namespace std;

// Function to return trailing 0s in factorial of n
int findTrailingZeros(int n)
{
	int count=0;
	while(n>0)
	{
	    count+=n/5;
	    n=n/5;
	}

	return count;
}

// Driver program to test above function
int main()
{
	int n = 100;
	cout << "Count of trailing 0s in " << 100
		<< "! is " << findTrailingZeros(n);
	return 0;
}
