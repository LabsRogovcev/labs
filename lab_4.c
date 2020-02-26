#include <stdio.h>
#include "input_lab_4.h"

int main()
{
	while (n!=0)
	{
		counter++;
		n /= 10;
	}
	printf("%d\n", counter); 
}