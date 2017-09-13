#include <stdio.h>

//Calculate the value of n!
int factorial(int n)
{
	int m = 1;
	for (int i =1; i <= n; ++i)
	{
		/* code */
		m *= i;
	}
	return m;
}

//test factorial()
int testfac()
{
	int fac_5 = 120;
	if (fac_5 == factorial(5))
		return 0;
	else
		return -1;
}

//Calculate combinatorial
int combinatorial(int m, int n)
{
	int result = factorial(n) / (factorial(m) * factorial(n-m));
	return result;
}

int main(int argc, char const *argv[])
{
	
	int m, n;
	scanf("%d%d",&m, &n);
	printf("%d\n", combinatorial(m, n));
	return 0;
}