
#include <stdio.h>


int sum(int arr[], int a)
{
	int sum = 0; 
	int i;

	for (i = 0; i < a; i++)
	sum += arr[i];

	return sum;
}

int main()
{
	int arr[] = {12,3,4,15};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Sum of given array is %d", sum(arr, n));
	return 0;
}
