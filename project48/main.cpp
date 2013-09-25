#include<iostream>
#include<cmath>

using namespace std;

long double calculateSelfPowers(int size){
	long double count = 0;
	for(long double i = 1; i <= size; i++){
		count += pow(i,i);
		cout << "pow "  << pow(i,i) << endl;
	}
	return count;
}

int main(){
	cout << calculateSelfPowers(10) << endl; 
}