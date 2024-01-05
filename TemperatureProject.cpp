#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
Fillimi:
	const int n = 7;
	int nr = 0;
	int v[n];
	double sum = 0;
	double mes;
	for (int i = 0;i < n;i++) {
		cout << "Shkruani temperaturen per diten e " << i + 1 << " =";
		cin >> v[i];
		if (v[i] > 18 || v[i] < -26) {
			cout << "Vlerat mund te jene vetem nga -26 deri tek 18!\n";
			goto Fillimi;
		}
	}
	cout << "Regjistroni temperaturat e arritura gjate nje jave\n";
	cout << "Lejohen vetem vlerat prej -26 deri 18!\n";
	cout << setfill('=') << setw(50) << "=";
	cout << endl << endl << endl;

	for (int i = 0;i < n;i++) {
		cout << "Temperatura per diten e " << i + 1 << " = " << v[i] << endl;
	}
	cout << endl << endl << endl;
	for (int i = 0;i < n;i++) {
		if (v[i] >= 0) {
			nr++;
		}
	}
	int max = v[0];
	int min = v[0];
	for (int i = 0;i < n;i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	for (int i = 0;i < n;i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	for (int i = 0;i < n;i++) {
		sum += v[i];
	}
	mes = sum / 7.0;


	cout << setfill('=') << setw(50) << "=" << endl;
	cout << "Numri i diteve me temperature mbi 0 ... n=   " << nr << endl;
	cout << "Temperatura maksimale e arritur Max=   " << max << endl;
	cout << "Temperatura mesatare e arritur Pmes=   " << setprecision(2) << mes << endl;
}
