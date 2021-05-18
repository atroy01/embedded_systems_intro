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
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100, 90}; 
  /* Other Variable Declarations Go Here */ 
  unsigned char *ptr = test;
  /* Statistics and Printing Functions Go Here */ 
  sort_array(SIZE, ptr);
  printf("The sorted array is:\n");
  print_array(SIZE, ptr);
  unsigned char mean = find_mean(SIZE, ptr);
  unsigned char median = find_median(SIZE, ptr);
  unsigned char maximum = find_maximum(SIZE, ptr);
  unsigned char minimum = find_minimum(SIZE, ptr);
  print_statistics(mean, median, maximum, minimum);
} 
    
/* Add other Implementation File Code Here */ 

void print_statistics(unsigned char mean, unsigned char median, unsigned char maximum, unsigned char minimum){

} 

void print_array(int length, unsigned char *ptr){

} 

unsigned char find_median(int length, unsigned char *ptr){
  
}
unsigned char find_maximum(int length, unsigned char *ptr){ 

} 
unsigned char find_minimum(int length, unsigned char *ptr){ 

} 

unsigned char find_mean(int length, unsigned char *ptr){
 
}

void sort_array(int length, unsigned char *ptr){
  
}
