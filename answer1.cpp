#include <iostream>
using namespace std;

bool isSubset( char arr1[], char arr2[] ) {
	int j = 0;

	for (int i = 0; i < strlen(arr2); i++) {
		for (j = 0; j < strlen(arr1); j++) {
			if (arr2[i] == arr1[j]) {
				break; //found the same element, jump to next one
			}
		}
		if ( j >= strlen(arr1) ) {
			return false; //cannot find the same element
		}
	}
	return true;
}


int main() {
	char arr1[99];
	char arr2[99];
	//is arr2 a subset of arr1?
	//complexity: O(n*m), where n = strlen(arr2), m = strlen(arr1)

	cin >> arr1;
	cin >> arr2;
	
	if (isSubset(arr1, arr2)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	return 0;
}
