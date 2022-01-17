#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 36000
#define SIZE2 11

/* "Never tell me the odds!"    Han Solo */

/* Deitel Dice Rolling Problem.  Write a program that simulates the rolling of 
two dice. The program should use rand twice to roll the first die and second die, 
respectively. The sum of the two values should then be calculated. [Note: Because
each die can show an integer value from 1 to 6, then the sum of the two values 
will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least 
frequent sums.]  Your program should roll the two dice 36,000 times. Use a one-
dimensional array to tally the numbers of times each possible sum appears. Print 
the results in a tabular format. Also, determine if the totals are reasonable; 
i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls 
should be 7. */ 

int main()
{

	int face1;
	int face2;
	int counter[11] = { 0 };

	srand((unsigned int) time(NULL));

	for (int i = 1; i <= SIZE; i++)
	{
		face1 = rand() % 6 + 1;
		face2 = rand() % 6 + 1;
	
			if (face1 + face2 == 2)
				counter[0] += 1;
			else if (face1 + face2 == 3)
				counter[1] += 1;
			else if (face1 + face2 == 4)
				counter[2] += 1;
			else if (face1 + face2 == 5)
				counter[3] += 1;
			else if (face1 + face2 == 6)
				counter[4] += 1;
			else if (face1 + face2 == 7)
				counter[5] += 1;
			else if (face1 + face2 == 8)
				counter[6] += 1;
			else if (face1 + face2 == 9)
				counter[7] += 1;
			else if (face1 + face2 == 10)
				counter[8] += 1;
			else if (face1 + face2 == 11)
				counter[9] += 1;
			else if (face1 + face2 == 12)
				counter[10] += 1;

		
	}

	puts(" SUM\tFREQUENCY");
	for (int i = 0; i < SIZE2; i++)
		printf("%4d\t%d\n", i + 2,  counter[i]);

	puts("");

	return 0;
}

