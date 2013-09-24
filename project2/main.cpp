/**
 * Author: Josh Wretlind
 * projectEuler problem 1
 * Print out sum of all fibonacci numbers below 4 million
 * Complexity: Time:  O(N)
 *             Space: O(N)
 **/
#include<iostream>

using namespace std;

//this is an array of fibonacci numbers
double* fibonacci;

/**
 * caclulateFibonacci
 * Purpose: This is to calculate all of the fibonacci numbers below 4 million
 * Complexity: Time:  O(N)
 *             Space: O(N)
 **/
void calculateFibonacci(){
	fibonacci[0] = 1;
	fibonacci[1] = 2;
	for(int i = 2; fibonacci[i-2] + fibonacci[i-1] < 4000000; i++) {
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	}
}

main() {
	int count =0;
	calculateFibonacci();
	for(int i = 0; i < ((sizeof(fibonacci)/sizeof*(fibonacci)) -1); i++){
		count += fibonacci[i];
	}
	cout << count << endl;
}