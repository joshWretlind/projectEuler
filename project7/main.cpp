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
	primes = internalPrimes;
	cout << target << endl;
	double testToThisLimit = sqrt(target);
	
	int largestPrime = 0;
	for(int i = 1; i <= testToThisLimit; i++) {
		if(((long int)target)%i == 0){
			largestPrime = i;
			internalPrimes.push_back(largestPrime);
		}
	}
	primes = internalPrimes;
	return largestPrime;
}

int findPrimesUpTo(long int target){
	int i = 2;
	while(primes.size() < target){
		findLargestPrime(i);
		i++;
	}

	for(int i = 0; i < primes.size(); i++){
		cout << " i " << primes[i] << endl;
	}
	return primes[i-1];
}

int  main(){
	cout << findPrimesUpTo(6) << endl;
	return 0;
}
