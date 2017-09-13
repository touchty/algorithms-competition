#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c; // read in char
	int flag = 1; //indicate left or right

	while ((c = getchar()) != EOF)
		if ( '"' == c )
		{
			if ( 1 == flag ) printf("%s", "``");
			else printf("%s", "''");

			flag = !flag;
		}
		else putchar(c);
	return 0;
}