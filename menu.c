/**
 * @file menu.c
 * @brief Implements the main menu system and high-level program functions (MF1–MF3).
 * @details
 *  This module provides the user interface for the application. It displays menu options,
 *  reads user input, and calls the relevant functions to perform specific operations
 *  on integer arrays (such as filling, sorting, clearing, and calculating statistics).
 *
 *  Functions in this file:
 *   - displayMenu(): Prints the available user options.
 *   - processMenu(): Handles the user's numeric choice.
 *   - showMenu(): Keeps the application running until exit.
 *   - MF1(): Demonstrates basic array manipulation and min/max operations.
 *   - MF2(): Demonstrates sorting and randomizing arrays.
 *   - MF3(): Demonstrates statistical calculations from user input.
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "Arraycode.h"
#include "Utilitycode.h"
#include "Mathcode.h"

 // ==================== DISPLAY MENU ====================

 /**
  * @brief Displays the main menu options on screen.
  * @details
  *  Prints a numbered list of available functions (MF1–MF3)
  *  and an option to exit the application.
  *  The user must enter a number (1–4) to continue.
  *
  * @note This function does not take any input or return a value.
  */
  /**
    * Prints the menu options for the user.
    * This function only prints text—no input is handled here.
    */
void displayMenu(void)
{
    printf_s("\n");
    printf_s("1) Perform MF1\n");
    printf_s("2) Perform MF2\n");
    printf_s("3) Perform MF3\n");
    printf_s("4) Exit Application\n");
    printf_s("Please enter your choice: ");
}

// ==================== PROCESS MENU ====================

/**
 * @brief Executes a menu option based on user choice.
 * @param choice The integer value entered by the user.
 * @details
 *  Based on the number entered, this function triggers:
 *   - MF1(): Basic array manipulation.
 *   - MF2(): Randomization and sorting demonstration.
 *   - MF3(): Statistical computation from user input.
 *   - 4: Exits the program.
 *
 *  If the input is invalid (not 1–4), a warning message is displayed.
 */

 /**
  * Handles what to do when user enters a choice.
  * Calls MF1, MF2, MF3 or exits depending on the number.
  */
void processMenu(int choice)
{
    switch (choice) {
    case 1:// User selected first case group
        printf_s("\nPerform MF1:\n");
        MF1();
        break;

    case 2:// User selected second case group
        printf_s("\nPerform MF2:\n");
        MF2();
        break;

	case 3:// User selected third case group
        printf_s("\nPerform MF3:\n");
        MF3();
        break;

	case 4:// User selected exit
        printf_s("\nExiting application...\n");
        break;

	default:// Invalid input
        printf_s("\nInvalid choice! Please enter 1–4.\n");
        break;
    }
}

// ==================== SHOW MENU LOOP ====================

/**
 * @brief Runs the menu loop until the user selects Exit.
 * @details
 *  Continuously displays the main menu, reads the user's choice,
 *  and processes it using processMenu(). The loop terminates only
 *  when the user selects option 4 (Exit Application).
 *
 * @note This is the main control loop for the program.
 */



 /**
  * Repeatedly shows the menu and reads input until the user picks 4.
  */
void showMenu(void)
{
    int choice = 0;

    do {
        displayMenu(); // Show menu every loop
		if (scanf_s("%d", &choice) != 1) {// Read user input
            // If input fails, break the loop
			printf_s("\nEnd of input detected. Exiting menu...\n");// Notify user
            break;
        }
		processMenu(choice);// Handle the choice
	} while (choice != 4);// Loop until user selects exit
}

// ==================== MF1 ====================

/**
 * @brief Demonstrates basic array operations.
 * @details
 *  MF1 performs the following actions:
 *   1. Creates and prints arrays with used and unused elements.
 *   2. Clears one array completely.
 *   3. Displays another pre-defined array.
 *   4. Prints the minimum and maximum values of that array.
 *
 *  It helps demonstrate how “used” and “unused” markers (-1)
 *  are handled and how min/max functions operate.
 */
void MF1(void)
{
    int arr[10]; // Create array with capacity 10
	cleararray(arr, 10);// Clear all elements to UNUSED (-1)

    // Fill array with 7 random numbers in range 10–20 (WF3)
    fillarraywithRandno(arr, 7, 10, 20);


	printf_s("\narray (used only) =\t");// Print used elements (WF7)
    printused(arr, 10);

	printf_s("\narray (all elements) =\t");// Print all elements (WF8)
    printall(arr, 10);

	printf_s("\narray (used only) =\t");// Clear the array (WF4)
    printused(arr, 10);

	printf_s("\narray (all elements) =\t");// Print cleared array (WF7/WF8)
    printall(arr, 10);

	printf_s("\narray (all elements) =\t");// Fill with 5 random numbers in range 20–30 (WF3)
    printall(arr, 10);

	int min = arrayminimum(arr, 10);// Find minimum (WF9)
	int max = arraymaximum(arr, 10);// Find maximum (WF10)

	printf_s("minimum value = %d, maximum value = %d\n", min, max);// Print min/max
}

// ==================== MF2 ====================

/**
 * @brief Demonstrates randomization and sorting of arrays.
 * @details
 *  MF2 performs the following:
 *   1. Fills an array with random integers in a range.
 *   2. Displays the unsorted (random) array.
 *   3. Sorts the array in ascending order.
 *   4. Randomizes the sorted array again.
 *
 * @note Uses functions from Arraycode.c for sorting and randomization.
 */
void MF2(void)
{
	int arr[20];// Create array with capacity 20

	fillarraywithRandno(arr, 20, 10, 20);// Fill with random numbers (WF3)
    printf_s("\narray with random (all) = ");
    printall(arr, 20);

	arraysort(arr, 20);// Sort the array (WF5)
    printf_s("\nsorted array (all) =\t  ");
    printall(arr, 20);

	randomizarray(arr, 20);// Randomize the array (WF6)
    printf_s("\nrandomized array (all) =  ");
    printall(arr, 20);
}

// ==================== MF3 ====================

/**
 * @brief Demonstrates user input and statistical calculations.
 * @details
 *  MF3 allows the user to input integer values into an array.
 *  It then computes and displays:
 *   - The number of used elements
 *   - Minimum and maximum values
 *   - Average and median values
 *   - Variance and standard deviation
 *
 *  This function demonstrates how to combine input, sorting,
 *  and mathematical computations in one workflow.
 *
 * @note Automatically ignores unused (-1) array entries.
 */
void MF3(void)
{
	int arr[30];// Create array with capacity 30
	int used = fillarrayfromkeyboard(arr, 30);// Fill from keyboard (WF2)

	int min = arrayminimum(arr, 30);// Compute statistics
	int max = arraymaximum(arr, 30);// WF9, WF10
	double avg = arraysaverage(arr, 30);// WF11
	double median = arraymedian(arr, 30);// WF12
	double variance = variancearray(arr, 30);// WF13
	double stddev = standevarray(arr, 30);// WF14

	printf_s("Array with %d elements has min value of %d and max value of %d\n", used, min, max);// Print results
    printused(arr, 30);

    printf_s("array has average value of %.2f and median value of %.2f\n", avg, median);
    printf_s("\narray with %d used elements has variance %.2f and standard deviation %.2f\n", used, variance, stddev);
}
