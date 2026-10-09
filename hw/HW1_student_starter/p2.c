/* CS100 Fall 2026 - HW1 Problem 2: Find Bugs!
 *
 * BinB's buggy program is in the handout. Put your FIXED program here.
 * Do not rename this file: the autograder builds p2.c.
 */
#include <stdio.h>

int main(void)
{
	// Calculate the average score of all students in a class.

	int num = 0;
	double sum = 0;

	printf("How many students are there?\n");
	scanf("%d", &num);
	printf("What are their scores?\n");

	// We programmers count from zero!

	for (int i = 0; i < num; i++)
	{
		double score;
		scanf("%lf", &score);
		sum += score;
	}

	double average = sum / num;
	if (average == 60)
		printf("Good!\n");
	else if (average > 60)
		printf("Excellent!\n");
	else
		printf("Bad!\n");

	printf("Average score is %.2f.\n", average);

	return 0;
}
