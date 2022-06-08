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


void generateValues(int *arr, int size){

	srand((unsigned) time(0));
	for (int i = 0; i < size; i++){
		arr[i] = rand() % MAX_NUM;
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


int partitionHigh(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j <=high-1; j++){
		if (arr[j] < pivot){
			i++;
			std::swap(arr[i], arr[j]);
			//std::cout << "i, j, pivot, low, high: " << i << " " << j << " " << pivot << " " << low << " " << high << "\n";
		}
	}
	std::swap(arr[i+1], arr[high]);
	return i+1;
}



void quickSort(int arr[], int low, int high){  //change to std::array ... if it makes sense to
		if (low < high){
			int part = partitionHigh(arr, low, high);
			quickSort(arr, low, part-1);
			quickSort(arr, part+1, high);
		}
}


void insertSort(std::array<int, TEST_LENGTH> *arr){
	int key, j;
	for (int i = 1; i < arr->size(); ++i){
		key = arr->at(i);
		j = i - 1;

		while (j >= 0 && key < arr->at(j)){
			arr->at(j+1) = arr->at(j);
			j = j-1;
			//std::cout << j << "\n";
		}
		arr->at(j+1) = key;
	}
}


void heapify(std::array<int, TEST_LENGTH> *arr, int n, int index){
	int left = 2* index + 1;
	int right = left + 1;

	int largest = index;

	if (left < n && arr->at(left) > arr->at(largest))
		largest = left;

	if (right < n && arr->at(right) > arr->at(largest))
		largest = right;
		
	if (largest != index){
		std::swap(arr->at(index), arr->at(largest));
		heapify(arr, n, largest);	
	}
}


void heapSort(std::array<int, TEST_LENGTH> *arr){
	int index;
	for (index = arr->size()/2 - 1; index >= 0; index --) 
		heapify(arr, arr->size(), index);

	for (index = arr->size() - 1 ; index > 0; index --){
		std::swap(arr->at(0), arr->at(index));
		heapify(arr, index, 0);

	}
}


//just for testing
/*
int main(){
	using std::array;
	array<int, TEST_LENGTH> arr;
	int c_arr[TEST_LENGTH];

	generateValues(&arr);
	
	for (auto i : arr){
		std::cout << i << ", ";
	}
	std::cout << "\n\n";
	heapSort(&arr);

	for (auto i : arr){
		std::cout << i << ", ";
	}
	std::cout << "\n\n";
}
*/