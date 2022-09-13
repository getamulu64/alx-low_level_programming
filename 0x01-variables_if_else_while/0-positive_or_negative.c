#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Entry point
 *
 * Return is success
 */
int main(void)
{

	int n;
	srand(time(0));

	n = rand() - RAN_MAX /2;

	if (n > 0)
                printf("%d is positive\n",n);
	else if (n == 0)
		printg("%d is zero\n",n);
	else
		printf("%d is negative\n",n);
	return (0);
}

