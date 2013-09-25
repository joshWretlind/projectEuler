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
	cout << isDivisible(10, 2520) << endl;
	return 0;
}