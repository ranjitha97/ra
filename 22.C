#include <stdio.h>
int gcd(int X, int Y)
{
	if (X == 0 || Y == 0)
	return 0
	if (X == Y)
		return 
	if (X > Y)
		return gcd(X-Y, Y);
	return gcd(X, Y-X);
}
int main()
{
	int X= 98, Y = 56;
	printf("GCD of %d and %d is %d ", X, Y, gcd(X, Y));
	return 0;
}
