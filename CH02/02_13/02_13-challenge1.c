#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare constant ratio equal to 3/4
	const float ratio = 0.75;

	//declare char a
  char a = 'a';
	
	//declare integer b
  int b = 0;

	//declare float c
  float c = 3.14159265358979;

	// output char value, e.g., "the value of variable a is '?'"
	printf("the value of variable a = %d\n",a);
	
	//output integer value, e.g., "the value of variable b is ??"
	printf("the value of variable b = %d\n", b);

	//output float value, e.g., "the value of variable c is ???.??"
	printf("the value of variable c = %f\n", c);

	//output value of ratio, e.g., "the value of constant ratio is ???.??"
	printf("the value of variable tq = %.2f\n", ratio);

	return 0;

}
