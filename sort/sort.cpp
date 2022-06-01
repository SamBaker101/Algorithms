//Sort algorithms
//Sam Baker - 05/29/2022

#include "sort.h"




//generates array of random values to be used by sorters
void generateValues(std::array<int, TEST_LENGTH> *arr){
	using std::array;

	srand((unsigned) time(0));
	for (int i = 0; i < arr->size(); i++){
		arr->at(i) = rand() % MAX_NUM;
	}
}


void bubbleSort(std::array<int, TEST_LENGTH> *arr){
	using std::swap; 
	using std::array;

	int i, j;
	for (i = 0; i < (arr->size() - 1); i++){
		for (j = 0; j < (arr->size() - i - 1); j++){
			//std::cout << "arr.size(), i, j" << arr->size() << i << j << "\n";
			if (arr->at(j) > arr->at(j+1))
				swap(arr->at(j), arr->at(j+1));
		}
	}
}


void selectionSort(std::array<int, TEST_LENGTH> *arr){
	int i, j;;
	int smallest;

	while (i < arr->size()){
		smallest = i;
		for (j = i; j < arr->size(); j++){
			if (arr->at(j) < arr->at(smallest))
				smallest = j;
		}
		std::swap(arr->at(i), arr->at(smallest)); 
		i ++ ;
	}
}



//just for testing
/*
int main(){
	using std::array;
	array<int, TEST_LENGTH> arr;

	generateValues(&arr);
	
	for (auto i : arr){
		std::cout << i << ", ";
	}
	std::cout << "\n\n";
	selectionSort(&arr);

	for (auto i : arr){
		std::cout << i << ", ";
	}
	std::cout << "\n\n";
}
*/