//Andrew Vu

#include <iostream>
#include <vector>

using namespace std;

#define ELEMENTS 3

int main() {
	//aScore for Alice, bScore for Bob
	int aScore = 0, bScore = 0;
	vector <int> alice(ELEMENTS);
	vector <int> bob(ELEMENTS);

	for (int i = 0; i < 2; i++) {
		cin >> alice[i];
		cin >> bob[i];

		//comparison
		if (alice[i] > bob[i]) {
			aScore += 1;
		}
		else if (bob[i] > alice[i]) {
			bScore += 1;
		}
	}
	
	cout << aScore << " " << bScore;

	//system("PAUSE");
	return 0;
}
