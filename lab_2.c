#include <stdio.h>
#include "input_lab_2.h"

int main()
{
	b = a*a;
	c = b*b*b;
	result = c*a;
	printf("%d\n", result);

	(x < y) ? ((x < z) ? printf("%d\n", x):printf("%d\n", z)):(x > y) ? ((y<z) ? printf("%d\n", y):printf("%d\n", z)):printf("%s\n", "NO");//min(x,y,z)
	int first = x+y+z, second = x*y*z;
	(first>second) ? printf("%d\n", first):printf("%d\n", second);//max(x+y+z, x*y*z)
}