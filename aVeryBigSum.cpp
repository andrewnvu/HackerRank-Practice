//Andrew Vu
#include <iostream>
#include <vector>

using namespace std;

int main() {

	int arraySize;
	long long int sum = 0;
	cin >> arraySize;

	vector <long int> myArray(arraySize);
	for (int i = 0; i < arraySize; ++i) {
		cin >> myArray[i];
		sum += myArray[i];
	}

	cout << sum << endl;

	//system("PAUSE");
	return 0;
}
