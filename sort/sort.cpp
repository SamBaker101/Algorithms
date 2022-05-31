//Sort algorithms
//Sam Baker - 05/29/2022

#include "sort.h"

//generates array of random values to be used by sorters
void generateValues(int *array, int len){
	srand((unsigned) time(0));
	for (int i = 0; i < len; i++){
		array[i] = rand();
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
}