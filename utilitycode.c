/**
 * @file utilitycode.c
 * @brief Implements utility helper functions used throughout the program.
 *
 * @details
 *  This module currently contains the random number generator used by several
 *  Working Functions such as WF3 (fill with random numbers) and WF6 (randomize array).
 *  Additional utility functions may be added as needed.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utilitycode.h"

/**
 * @brief Seeds the random number generator using the current time.
 * This should be called once in main() before any random functions are used.
 */
void seedRandom(void)// Seed the random number generator
{
	srand((unsigned int)time(NULL));// Seed with current time
}

/**
 * @brief Generates a random integer within a given range [lower, upper].
 * @param lower The minimum integer value (inclusive).
 * @param upper The maximum integer value (inclusive).
 * @return A random number between lower and upper.
 * @note
 *  Used by:
 *    - WF3 : fillarraywithRandno()
 *    - WF6 : randomizearray()
 */
int randomInrange(int lower, int upper)// Generate random number in range
{
    if (lower > upper) {
        // Swap if the range is reversed
		int temp = lower;// Swap values
        lower = upper;
        upper = temp;
    }

	return (rand() % (upper - lower + 1)) + lower;// Return random number in range
}


