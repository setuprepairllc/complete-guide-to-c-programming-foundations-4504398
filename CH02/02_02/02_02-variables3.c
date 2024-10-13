#include <stdio.h>

int main()
{
	int c;
	char a = 'X';
	int count = 25;
	double longitude = 47.677878;

	printf("%c\n%d\n%f\n%d\n",
				 a,
				 count,
				 longitude,
				 c);
	printf("The address of the variable is: %p\n", (void *)&c);
	return 0;
	return 0;
}
