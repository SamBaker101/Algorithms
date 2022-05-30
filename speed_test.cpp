//Algorithm speed test for comparison and optimisation
//Sam Baker - 05/29/2022




//includes
#include <iostream>
#include <chrono>

#include "swap/swap.h"


//defines
typedef std::chrono::microseconds microseconds_t; 


//main
int main(int argc, char * argv[]){
	using std::cout;

	int iterations = atoi(argv[1]);
	int a = 5;
	int b = 10;

	auto start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < iterations; i++){
		//tempSwap(&a, &b); //seg fault in this one lol
	}
	
	auto end = std::chrono::high_resolution_clock::now();

	auto time_elapsed = std::chrono::duration_cast<microseconds_t>(end - start);
	cout << "Time Elapsed For " << iterations << " Iterations of Fun1: " << time_elapsed.count() << "\n";
	cout << "Avg MicroSecond Per Iteration: " << (time_elapsed.count()/double(iterations)) << "\n";


	start = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < iterations; i++){
		addSwap(&a, &b); 
	}
	
	end = std::chrono::high_resolution_clock::now();

	time_elapsed = std::chrono::duration_cast<microseconds_t>(end - start);
	cout << "Time Elapsed For " << iterations << " Iterations of Fun2: " << time_elapsed.count() << "\n";
	cout << "Avg MicroSecond Per Iteration: " << (time_elapsed.count()/double(iterations)) << "\n";


}