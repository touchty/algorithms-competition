#include <stdio.h>

/*All char on key board*/
char *s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(int argc, char const *argv[])
{
	int i, c;
	while ( (c = getchar()) != EOF)
	{
		for (i = 1; s[i] && s[i] != c; ++i);
		if (s[i] && (s[i] != 'Q') && (s[i] != 'A') && (s[i] != 'Z'))
			putchar(s[i-1]);
		else putchar(c);
	}
	return 0;
}