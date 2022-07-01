#include <stdio.h>

#include <stdlib.h>

#include <time.h>



#include <stdio.h>

/**
 *  * main - main block
 *    * Definition: Get a random number and print it
 *     * and if positive,negative or zero
 *      * Return:0
 *       * Description: Get a random number and print the number
 *        * and if it is positive, negative, or zero
 *         * Return: 0
 */

int main(void)

{    
{
	int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n>0)
		printf("%d is positive\n",n);
	else if (n<0)
		printf("%d is negative\n",n);
        n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%d is zero\n",n);
        return (0);
}	
                printf("%i is zero\n", n);
	return (0);

}
