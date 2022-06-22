//Search algorithms
//Sam Baker - 06/17/2022

#include "search.h"


//generates array of random values to be used by search
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



//just for testing
int main(){
	using std::array;
	array<int, TEST_LENGTH> arr;

	generateValues(&arr);
	std::sort(arr.begin(), arr.end());

	for (auto i : arr){
		std::cout << i << ", ";
	}
	std::cout << "\n\n";


	for (auto i : arr){
		std::cout << i << ", ";
	}
	std::cout << "\n\n";
}