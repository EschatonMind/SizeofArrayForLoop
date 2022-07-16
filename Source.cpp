#include <iostream>
using namespace std;
int main() {
	int Values[2][2];
	int Size1 = sizeof(Values) / sizeof(Values[0]);
	int Size2 = sizeof(Values[0]) / sizeof(int);
	for (int i = 0; i < Size1; i++) {
		for (int j = 0; j < Size2; j++) {
			cin >> Values[i][j];
		}
	}
	for (int k = 0; k < Size1; k++) {
		cout << " " << " | " << flush;
		for (int l = 0; l < Size2; l++) {
			cout << Values[k][l]<< " | " << flush;
		}
		cout << endl;
	}
	return 0;
}