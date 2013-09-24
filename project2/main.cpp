/**
 * Author: Josh Wretlind
 * projectEuler problem 1
 * Print out sum of all fibonacci numbers below 4 million
 * Complexity: Time:  O(N)
 *             Space: O(N)
 **/
#include<iostream>
#include<vector>

using namespace std;

//this is an array of fibonacci numbers
vector<int> fibonacci;

/**
 * caclulateFibonacci
 * Purpose: This is to calculate all of the fibonacci numbers below 4 million
 * Complexity: Time:  O(N)
 *             Space: O(N)
 **/
void calculateFibonacci(){
	fibonacci.push_back(1);
	fibonacci.push_back(2);
	for(int i = 2; fibonacci[i-2] + fibonacci[i-1] < 4000000; i++) {
		fibonacci.push_back(fibonacci[i-2] + fibonacci[i-1]);
	}
}

main() {
	int count =0;
	calculateFibonacci();
	for(int i = 0; i < fibonacci.size(); i++){
		if(fibonacci[i]%2 == 0){
			count += fibonacci[i];
		}
	}
	cout.precision(19);
	cout << count << endl;
}
