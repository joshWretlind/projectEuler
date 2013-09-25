#include<iostream>
#include<cmath>

using namespace std;

long double calculateSelfPowers(int size){
	long double count = 0;
	for(long double i = 1; i <= size; i++){
		count += pow(i,i);
	}
	return count;
}

int main(){
	cout.precision(50000);
	cout << calculateSelfPowers(10001) << endl; 
}