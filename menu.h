
#ifndef MENU_H
#define MENU_H

/**
 * @file menu.h
 * @brief Declares the menu system and high-level menu functions (MF1–MF3).
 *
 * @details
 *  This header file provides the interface to the application’s user-interaction layer.
 *  The functions declared here are implemented in menu.c and control the overall flow
 *  of the program. These functions call Working Functions (WF1–WF15) to perform
 *  operations such as filling, clearing, sorting, and analysing arrays.
 *
 *  Functions included:
 *    - displayMenu() : Prints available menu options.
 *    - processMenu() : Executes behaviour based on user selection.
 *    - showMenu()    : Main menu loop (runs until exit).
 *    - MF1()         : Demonstrates basic array operations.
 *    - MF2()         : Demonstrates sorting and randomization.
 *    - MF3()         : Demonstrates full statistical analysis from user input.
 */

#include <stdio.h>
#include "Arraycode.h"
#include "Utilitycode.h"
#include "Mathcode.h"

/**
 *  
 * @brief Displays the main menu with available options.
 * @details
 *  Prints the following choices exactly:
 *   1) Perform MF1
 *   2) Perform MF2
 *   3) Perform MF3
 *   4) Exit Application
 *
 *  This function only prints text; no input is handled here.
 */
void displayMenu(void);// Display menu options

/**
 * @brief Handles the user's choice and performs the corresponding action.
 * @param choice Integer selection entered by the user (1–4).
 *
 * @details
 *  Depending on the value of `choice`:
 *    - 1 → MF1() is executed
 *    - 2 → MF2() is executed
 *    - 3 → MF3() is executed
 *    - 4 → Exit message is printed
 *    - Any other input prints an “invalid selection” message
 */
void processMenu(int choice);// Process user menu choice

/**
 * @brief Runs the main menu loop that keeps the program active until exit.
 * @details
 *  Continuously:
 *    1. Displays menu
 *    2. Reads user input
 *    3. Calls processMenu()
 *
 *  The loop terminates only when the user chooses option 4.
 */
void showMenu(void);// Main menu loop

/**
 * @brief Performs the operations defined for MF1.
 * Typically: filling arrays, clearing, sorting, and finding min/max.
 *  @details
 *  Performs the following:
 *   - Creates array of capacity 10
 *   - WF3: fill array with 7 random numbers (10–20)
 *   - WF7: print used elements
 *   - WF8: print all elements
 *   - WF4: clear array
 *   - WF7/WF8: reprint (empty array)
 *   - WF3: fill array with 5 numbers (20–30)
 *   - WF5: sort array
 *   - WF8: print all elements
 *   - WF9/WF10: print minimum and maximum
 */
void MF1(void);//	Perform MF1 operations

/**
 * @brief Performs the operations defined for MF2.
 * Typically: randomizing and sorting array values.
 * @details
 *  Performs the following:
 *   - Fills array with random values
 *   - WF8: prints all values
 *   - WF5: sorts used values
 *   - WF8: prints sorted array
 *   - WF6: randomizes array
 *   - WF8: prints randomized array
 */
void MF2(void);//	Perform MF2 operations

/**
 * @brief Performs the operations defined for MF3.
 * Typically: keyboard input and computing statistical values.
 *  @details
 *  Steps:
 *   - Uses WF2 to read values from user
 *   - Prints min and max (WF9, WF10)
 *   - Prints all elements (WF8)
 *   - Computes average (WF11)
 *   - Computes median (WF12)
 *   - Computes variance (WF13)
 *   - Computes standard deviation (WF14)
 */
void MF3(void);//	Perform MF3 operations

#endif // MENU_H
