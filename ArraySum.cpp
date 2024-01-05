#include <iostream>
using namespace std;
int main() {
	const int n = 6;
	int target;
	int v[n];
	cout << "Give the vector:" << endl;
	for (int i = 0;i < n;i++) {
		cout << "A[" << i + 1 << "]=";
		cin >> v[i];
	}
	cout << "Put the target number (the number must be sum of one after the other element):" << endl;
	cin >> target;
	int position1;
	int position2;
	for (int a = 0;a < n;a++) {
		if (v[a] + v[a + 1] == target) {
			position1 = a;
			position2 = a + 1;
		}
	}
	cout <<"The numbers that correspond to the target: "<< "[" << position1 << "," << position2 << "]";

}
