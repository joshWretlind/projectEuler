#include<iostream>
#include<vector>

using namespace std;

vector<long double> factorial;

void calculateFactorials(int size){
	factorial.push_back(1.0L);
	for(int i = 1; i < size; i++){
		factorial.push_back(factorial[i-1] * i);
	}
}

int main(){
	calculateFactorials(3);
	for(int i = 0; i < factorial.size(); i++){
		cout << factorial[i] << " ";
	}
}