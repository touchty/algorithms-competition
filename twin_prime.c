#include <stdio.h>
#include <math.h>
#include <assert.h>

//v1
/*
int is_prime(int x)
{
	for (int i = 2; i * i <= x; ++i)
	{
		if(x % i == 0)
			return 0;
	}
	return -1;
}
*/

//v2
int is_prime(int x)
{
	assert(x >= 0);
	if (1 == x)
	{
		return 0;
	}
	int m = floor(sqrt(x) + 0.5);
	for(int i = 2; i <= m; ++i)
	{
		if (x % i == 0) return 0;
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int i, m;
	scanf("%d", &m);
	for (i = m - 2; i >= 3; --i)
	{
		if (is_prime(i) && is_prime(i +2))
		{
			printf("%d<==>%d\n", i, i + 2);
			break;
		}

	}
	return 0;
}