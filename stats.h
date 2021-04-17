/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief This file contains the function declarations for stats.c.
 *
 * These function declarations specify the parameters needed for each function within stats.c
 * These fucntions are used to display common statistics on a given array of numbers.
 * @author Andrew Troy
 * @date 3/30/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


/**
 * @brief Print statistics of an array
 *
 * This function prints various statistcs to the screen
 *
 * @param mean The mean of the array
 * @param median The median of the array
 * @param maximum The maximum of the array
 * @param minimum The minimum of the array
 *
 * @return Nothing. Just print the statistics to the screen using printf();
 */
int print_statistics(int mean, int median, int maximum, int minimum);

/**
 * @brief Print an array to the screen
 *
 * This function takes as input an array and a length and prints the array to the screen
 *
 * @param array The array of numbers to print to the screen
 * @param length The length of the array
 *
 * @return Nothing. Just print the array to the screen using printf();
 */
int print_array(int length, unsigned char arr[]);

/**
 * @brief Find the median of an array
 *
 * This function takes as input an array and a length and returns the median of the array as an int
 *
 * @param array The array of numbers from which the median will be calculated
 * @param length The length of the array
 *
 * @return The median of the array
 */
int find_median(int length, unsigned char arr[]);

/**
 * @brief Find the mean of an array
 *
 * This function takes as input an array and a length and returns the mean of the array as an int
 *
 * @param array The array of numbers from which the mean will be calculated
 * @param length The length of the array
 *
 * @return The mean of the array
 */
int find_mean(int length, unsigned char arr[]);

/**
 * @brief Find the maximum of an array
 *
 * This function takes as input an array and a length and returns the maximum of the array as an int
 *
 * @param array The array of numbers from which the maximum will be identified
 * @param length The length of the array
 *
 * @return The maximum of the array
 */
int find_maximum(int length, unsigned char arr[]);

/**
 * @brief Find the minimum of an array
 *
 * This function takes as input an array and a length and returns the minimum of the array as an int
 *
 * @param array The array of numbers from which the minimum will be identified
 * @param length The length of the array
 *
 * @return The minimum of the array
 */
int find_minimum(int length, unsigned char arr[]);

/**
 * @brief Sort an array
 *
 * This function takes as input an array and a length sorts the array from largest to smallest and prints sorted array to the screen
 * 
 * @param array The array of numbers to be sorted
 * @param length The length of the array
 *
 * @return Nothing. Print to sorted array to the screen.
 */
int sort_array(int length, unsigned char arr[]);

#endif /* __STATS_H__ */