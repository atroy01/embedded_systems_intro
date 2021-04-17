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
* @file stats.c * 
* @brief This file performs a statistical analysis on an array of numbers. 
* * * The file contains functions that calculate information such as the mean, mediam, max * 
* and minimum of an array of numbers and prints the information to the command line. * * 
* @author Andrew Troy * 
* @date 3/30/2021 * */ 

#include <stdio.h> 
#include "stats.h" 

/* Size of the Data Set */ 
#define SIZE (40) 

void main() { 
  printf("We have entered main()\n"); 
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90}; 
  /* Other Variable Declarations Go Here */ 
  /* Statistics and Printing Functions Go Here */ 
} 
    
/* Add other Implementation File Code Here */ 

int print_statistics(int mean, int median, int maximum, int minimum){} 
int print_array(int length, unsigned char arr[]){} 
int find_median(int length, unsigned char arr[]){}
int find_maximum(int length, unsigned char arr[]){} 
int find_minimum(int length, unsigned char arr[]){} 
int find_mean(int length, unsigned char arr[]){}
int sort_array(int length, unsigned char arr[]){}