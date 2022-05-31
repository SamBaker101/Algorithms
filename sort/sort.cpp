//Sort algorithms
//Sam Baker - 05/29/2022

#include "sort.h"

//generates array of random values to be used by sorters
void generateValues(int *array, int len){
	srand((unsigned) time(0));
	for (int i = 0; i < len; i++){
		array[i] = rand() % MAX_NUM;
	}
}


void bubbleSort(int *array, int len){
	using std::swap;

	int i, j;
	for (i = 0; i < (len - 1); i++){
		for (j = 0; j < (len - i - 1); j++){
			if (array[j] > array [j+1])
				swap(array[j], array[j+1]);
		}
	}
}


//just for testing
int main(){
	int len = 20;
	int array[len];

	generateValues(array, len);
	
	for (int i = 0; i < len; i++){
		std::cout << array[i] << ", ";
	}
	std::cout << "\n\n";
	bubbleSort(array, len);
	for (int i = 0; i < len; i++){
		std::cout << array[i] << ", ";
	}
	std::cout << "\n\n";

}