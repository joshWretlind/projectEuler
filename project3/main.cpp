/**
 *
 *
 *
 **/

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> primes;

int findLargestPrime(double target){
	vector<int> internalPrimes;
	double testToThisLimit = sqrt(target);
	
	int largestPrime = 0;
	for(int i = 1; i <= testToThisLimit; i++) {
		if(((long int)target)%i == 0){
			largestPrime = i;
			internalPrimes.push_back(largestPrime);
		}
	}
	if(primes.empty()){
		primes=internalPrimes;
	}
	return largestPrime;
}

int findLargestPrimeFactor(long int target){
	int largestPrime = findLargestPrime(target);
	bool foundLargestFactor = false;
	while(!foundLargestFactor) {
		if(!primes.empty()){
			int topOfStack = primes.back();
			if(findLargestPrime(topOfStack) != 1) {
				primes.pop_back();
			} else {
				return topOfStack;
			}
		}
	}
}

int  main(){
	cout << findLargestPrimeFactor(600851475143) << endl;
	return 0;
}
