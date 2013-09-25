#include<iostream>

using namespace std;

int main(){
	int size = 100;
	int sum = size*(size+1)/2;
	int squareSum = sum*sum;
	int sumSquare = 0;
	for(int i = 1; i <= size; i++){
		sumSquare += i*i;
	}

	cout << squareSum-sumSquare << endl;
}