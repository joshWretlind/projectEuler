/**
 * Author: Josh Wretlind
 * projectEuler problem 1
 * Print out multiples of 3 or 5 below 100
 * Complexity: O(N)
 **/
#include<iostream>

using namespace std;

main() {

	int max = 1000;
	int count = 0;
	for(int i = 0; i < max; i++) {
		if(i%3 == 0 || i%5 == 0){
			count += i;
		}
	}
	cout << count;
}