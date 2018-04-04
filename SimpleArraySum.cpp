#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
	int numElements;
	cout << "Please enter the number of elements you would like in the array: ";
	cin >> numElements;

	vector<int>array(numElements);
	int sum = 0;

	cout << "Please enter " << numElements << " values into the array: ";
	for (int i = 0; i < numElements; ++i) {
		cin >> array[i];
		sum += array[i];
	}
	
	cout << "The sum is of the values is " << sum << endl << endl;


	char aChar;
	cout << "Please enter any character to exit the program..." << endl;
	cin >> aChar;
	return 0;
}
