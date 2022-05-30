//Swap algorithms
//Sam Baker - 05/29/2022

#include <iostream>
#include "swap.h"

void tempSwap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


void addSwap(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}


/*
int main(){
	int a = 5;
	int b = 10;

	std::cout << "A: " << a << " B: " << b << "\n";
	tempSwap(&a, &b);
	std::cout << "A: " << a << " B: " << b << "\n";
	addSwap(&a, &b);
	std::cout << "A: " << a << " B: " << b << "\n";
}
*/