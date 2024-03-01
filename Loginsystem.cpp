#include <iostream>
using namespace std;
class login {
private:
	string email;
	string password;
public:
	void insert() {
		cout << "Email:";
		cin >> email;
		cout << endl;
		cout << "Password:";
		cin >> password;
	}
	void giveacces() {
		char p;
		cout << endl;
		cout << "Student:Name" << endl
			<< "Subjects:A1,A2,A3,A4,A5" << endl
			<< "Do you want to put the grades(Y-Yes N-No):";
		cin >> p;
		if (p == 'Y' || p=='y') 
			grades();
	}
	void grades() {
		cout << endl;
		const int n = 5;
		int v[n];
		for (int i = 0;i < 5;i++) {
			cout << "Your " << i + 1 << " grade(in numbers):";
			cin >> v[i];
		}
		cout << endl;
		cout << "Grades for: A1,A2,A3,A4,A5:";
		for (int i = 0;i < 5;i++) {
			cout << v[i] << " ";
		}
		cout << endl << endl;
	}
	void check() {
		if (email == "youremail@example.com" && password == "12345") {
			giveacces();
		}
		else {
			cout << "The email or password don't match!";
		}
	}
};
int main() {
	login example1;
	example1.insert();
	example1.check();
}
