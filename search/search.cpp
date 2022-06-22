//Search algorithms
//Sam Baker - 06/17/2022

#include "search.h"


//generates array of random values to be used by search
void generateValues(std::array<int, TEST_LENGTH> *arr){
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


int simpleSearch(std::array<int, TEST_LENGTH> *arr, int target){
	int i;
	for (i = 0; i < (arr->size()); i++){
		if (arr->at(i) == target) return i;
	}
	return -1;
}


int binSearch(std::array<int, TEST_LENGTH> *arr, int target){
	int first = 0;
	int last = arr->size() - 1;
	int index;

	while (first <= last){
		index = (first + last)/2;
		if (arr->at(index) == target) return index;
		else if (arr->at(index) > target) last = index - 1;
		else if (arr->at(index) < target) first = index + 1;
	}

	return -1;
}

//just for testing
int main(){
	using std::array;
	array<int, TEST_LENGTH> arr;

	generateValues(&arr);
	std::sort(arr.begin(), arr.end());

	srand((unsigned) time(0));
	int target = arr.at(rand() % arr.size());

	for (auto i : arr){
		std::cout << i << ", ";
	}
	std::cout << "\n\n";

	int index = simpleSearch(&arr, target);
	std::cout << index << " : " << arr.at(index) << "\n";

	index = simpleSearch(&arr, arr.at(0));
	std::cout << index << " : " << arr.at(index) << "\n";

	index = simpleSearch(&arr, arr.at(arr.size() - 1));
	std::cout << index << " : " << arr.at(index) << "\n";
}