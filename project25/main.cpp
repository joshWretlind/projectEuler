#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

//this is an array of fibonacci numbers
vector<long double> fibonacci;

/**
 * caclulateFibonacci
 * Purpose: This is to calculate all of the fibonacci numbers below 4 million
 * Complexity: Time:  O(N)
 *             Space: O(N)
 **/
int calculateFibonacci(){
	fibonacci.push_back(1.0L);
	fibonacci.push_back(1.0L);
	int i;
	for(i = 2; fibonacci[i-2] + fibonacci[i-1] < pow(10.0L,999.0L); i++) {
		fibonacci.push_back(fibonacci[i-2] + fibonacci[i-1]);
	}
	return i;
}

int main(){
	cout << calculateFibonacci() + 1 << endl;
}