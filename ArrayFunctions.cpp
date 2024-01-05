#include <iostream>
using namespace std;
int main() {
	const int n = 7;
	int S = 0;
	int S1 = 0;
	int S2 = 0;
	int S3 = 0;
	int array[n];
	cout << "Give the values of array:" << endl;
	for (int i = 0;i < n;i++) {
		cout << "A[" << i + 1 << "]=";
		cin >> array[i];
	}
	cout << "The elements of array are:[";
	for (int i = 0;i < n;i++) {
		cout << array[i] << ",";
	}
	cout << "]";
	cout << endl;
	cout << "Sum of array is:";
	for (int i = 0;i < n;i++) {
		S = S + array[i];
	}
	cout << S << endl;
	int nr = 0;
	for (int i = 0;i < n;i++) {
		if (array[i] > 0) {
			nr++;
		}
	}
cout << "Positive numbers in the array:" << nr << endl;
	for (int i = 0;i < n;i++) {
		if (array[i]%2==0){
			S1 = S1 + array[i];
		}
		else {
			S2 = S2 + array[i];
		}
	}
	cout << "Sum of even numbers:" << S1 << endl;
	cout << "Sum of odd numbers:" << S2 << endl;
	for (int i = 0;i < n;i++) {
		S3 = array[0] + array[n - 1];
	}
	cout << "Sum of the first and last element in array:"<<S3<< endl;
}
