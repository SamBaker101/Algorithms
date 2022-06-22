//Search algorithms
//Sam Baker - 05/29/2022

#include "sort.h"

void generateValues(std::array<int, TEST_LENGTH> *arr); 
void generateValues(int *arr, int size);


void generateValues(std::array<int, TEST_LENGTH> *arr){
	using std::array;

	srand((unsigned) time(0));
	for (int i = 0; i < arr->size(); i++){
		arr->at(i) = rand() % MAX_NUM;
	}
}


void generateValues(int *arr, int size){

	srand((unsigned) time(0));
	for (int i = 0; i < size; i++){
		arr[i] = rand() % MAX_NUM;
	}
}