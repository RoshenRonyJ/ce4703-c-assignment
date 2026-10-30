#ifndef UTILITYCODE_H
#define UTILITYCODE_H
/**
 * @file utilitycode.h
 * @brief Declares general-purpose utility functions used across the program.
 *
 * @details
 *  This module provides helper functions that are not tied to specific working
 *  functions but are required throughout the project. The primary utility implemented
 *  here is the random number generator, which returns numbers in an inclusive range.
 *
 *  Functions in this module include:
 *    - randomInrange() : Returns a random integer within a specified range.
 *
 *  These functions are used by several Working Functions, such as WF3 (random fill)
 *  and WF6 (randomize/shuffle), as well as menu operations MF1–MF3.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Generates a random number within a specified range.
 * @param lower The minimum value (inclusive).
 * @param upper The maximum value (inclusive).
 * @return A random integer between lower and upper.
 * @details
 *  This function relies on the standard `rand()` function. The caller must ensure
 *  that `srand(time(NULL))` has been called once at program startup (this is handled
 *  in main.c). Behavior is undefined if `lower > upper`.
 */
int randomInrange(int lower, int upper);// Generate random number in range

/**
 * @brief Seeds the random number generator using current time.
 * @param Should be called once at the start of main().
 */
void seedRandom(void);// Seed the random number generator

#endif // UTILITYCODE_H
