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


void generateValues(std::array<int, TEST_LENGTH> *arr); 
void generateValues(int *arr, int size);
void bubbleSort(std::array<int, TEST_LENGTH> *arr);
void selectionSort(std::array<int, TEST_LENGTH> *arr);
void quickSort(int *arr, int low, int high);
int partitionHigh(int *arr, int low, int high);
void insertSort(std::array<int, TEST_LENGTH> *arr); 
void heapify(std::array<int, TEST_LENGTH> *arr, int n, int index);
void heapSort(std::array<int, TEST_LENGTH> *arr, int n);



#endif