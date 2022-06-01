//Sort algorithms
//Sam Baker - 05/29/2022

#ifndef SORT 
	#define SORT 

#include <iostream>
#include <cstdlib>
#include <array>
#include <algorithm>

#define MAX_NUM 2000
#define TEST_LENGTH 50


void generateValues(int *array, int* len); 
void bubbleSort(int *array, int len);
void selectionSort(std::array<int, TEST_LENGTH> *arr);


#endif