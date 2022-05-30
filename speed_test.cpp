//Algorithm speed test for comparison and optimisation
//Sam Baker - 05/29/2022


//*****Doesn't currently work, timer res to low, use chrono high res clock

//includes
#include <iostream>
#include "swap/swap.h"

//defines
#define ITERATIONS 10000


//main
int main(int argc, char * argv[]){
	using std::cout;

	time_t start, end;
	int a = 5;
	int b = 10;

	time(&start);

	for (int i = 0; i < ITERATIONS; i++){
		//tempSwap(&a, &b); //seg fault in this one lol
	}
	time(&end);

	double time_elapsed = double(end - start);
	cout << "Time Elapsed For " << ITERATIONS << " Iterations of Fun1: " << time_elapsed << "\n";

	time(&start);

	for (int i = 0; i < ITERATIONS; i++){
		addSwap(&a, &b);
	}
	time(&end);

	time_elapsed = double(end - start);
	cout << "Time Elapsed For " << ITERATIONS << " Iterations of Fun2: " << time_elapsed << "\n";


}