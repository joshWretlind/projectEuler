#include<iostream>

using namespace std;

bool isDivisible(int n, int target){
	for(int i = 1; i <= n; i++) {
		if(target%i != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	bool foundSmallestDivisiable = false;
	int i = 0;
	for(i = 3;  !foundSmallestDivisiable; i++){
		foundSmallestDivisiable = isDivisible(20,i);

	}
	
	cout << i -1 << endl;
	return 0;
}