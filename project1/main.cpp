/**
 * Author: Josh Wretlind
 * projectEuler problem 1
 * Print out multiples of 3 or 5 below 100
 * Complexity: O(N)
 **/
#include<iostream>

using namespace std

main() {

	int max = 1000;
	for(int i = 0; i <= max; i++) {
		if(i%3 == 0 || i%5 == 0){
			cout << i;
		}
	}
}