#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printArray(int str[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", str[i]);
	printf("\n");
}
void sel(int str[], int n, int k)
{
    int i,res[k];
    for(i=0; i<k;i++)
    {
        res[i]=str[i];
    }
    
	srand(time(NULL));
	for(;i<n;i++)
	{
	    int j = rand()%(i+1);
	    if(j<k)
	    res[j]=str[i];
	}
    printArray(res,k);
}

// Driver program to test above function.
int main()
{
	int str[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int n = sizeof(str)/sizeof(str[0]);
	int k = 5;
	sel(str, n, k);
	return 0;
}
