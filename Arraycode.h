#ifndef ARRAYCODE_H
#define ARRAYCODE_H
/**
 * @file Arraycode.h
 * @brief Declares all Working Functions (WF1–WF15) used for array operations.
 *
 * @details
 *  This module contains all low-level array manipulation functions required by the
 *  assignment.
 *   The functions perform input, random filling, sorting, printing, clearing,
 *  randomizing, used-element counting, and full statistical analysis.
 *
 *  **Macros included:**
 *   - `UNUSED` : Marks an unused array index (set to `-1`)
 *   - `SWAP(a,b)` : Safely swaps two integers
 *
 *  **Working Functions implemented:**
 *    - WF2  fillarrayfromkeyboard()
 *    - WF3  fillarraywithRandno()
 *    - WF4  cleararray()
 *    - WF5  arraysort()
 *    - WF6  randomizearray()
 *    - WF7  printused()
 *    - WF8  printall()
 *    - WF9  arraymin()
 *    - WF10 arraymax()
 *    - WF11 arraysaverage()
 *    - WF12 arraymedian()
 *    - WF13 variancearray()
 *    - WF14 standevarray()
 *    - WF15 arraysusedno()
 */
// -----------------------MACROS -------------------------

// Marks unused array elements

#define UNUSED -1

// Swaps two integer values safely
#define SWAP(a, b) { int temp = a; a = b; b = temp; }

// ----------------------- FUNCTION PROTOTYPES -------------------------

/**
*  @file menu.c
 * @brief Fills an array with values entered by the user.
 * @param arr The array to fill.
 * @param size The maximum size of the array.
 * @return The number of used elements.
 * @details
 *  Reads integers from the keyboard until a negative value is entered.
 *  All valid numbers are stored sequentially. Remaining elements are set to UNUSED.
 */
int fillarrayfromkeyboard(int arr[], int size);

/**
 * @brief Fills an array with random numbers between min and max.
 * @param arr The array to fill.
 * @param size The total capacity.
 * @param lower The minimum random value.
 * @param upper The maximum random value.
 * @return The number of used elements.
 * * @details
 *  Fills the first N positions with random values. The rest are set to UNUSED.
 */
int fillarraywithRandno(int arr[], int size, int lower, int upper);// Fill array with random numbers

/**
 * @brief Clears all elements of an array (sets them to UNUSED).
 * @param arr The array to clear.
 * @param size The number of elements in the array.
 */
void cleararray(int arr[], int size);// Clear all elements to UNUSED

/**
 * @brief Sorts the used elements of the array in ascending order.
 * @param arr The array to sort.
 * @param size The capacity of the array.
 */
void arraysort(int arr[], int size);// Sort array using bubble sort

/**
 * @brief Randomly rearranges the used elements of the array.
 * @param arr The array to randomize.
 * @param size The number of elements in the array.
 */
void randomizarray(int arr[], int size);// Randomize array

/**
 * @brief Prints only the used elements of an array.
 * @param arr The array to print.
 * @param size The size of the array.
 */
void printused(int arr[], int size);// Print only used elements

/**
 * @brief Prints all elements of an array, including UNUSED ones.
 * @param arr The array to print.
 * @param size The number of elements.
 */
void printall(int arr[], int size);// Print all elements including UNUSED

/**
 * @brief Counts how many used elements are in the array.
 * @param arr The array to check.
 * @param size The total capacity.
 * @return The number of used elements.
 */
int arrayusedno(int arr[], int size);// Count used elements

#endif // ARRAYCODE_H
