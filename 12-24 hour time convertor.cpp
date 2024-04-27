```cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
	string time = "07:10:00PM";
	string sub1 = time.substr(2, 6);  //Splitting the string from pos 2-6
	char c = 'P'; 
	string ftwo = time.substr(0, 2);  //Splitting the first two strings
	int convert = stoi(ftwo);  //Converting the first two strings into integers. Why? -> (Example 3PM -> 15:00)
	string AMdefcase = time.substr(0, 8);
	size_t found = time.find(c); //Checking if the time is on AM or PM by looking for P in string time
	if (found != string::npos) {
		if (convert == 12) {
			string sub2 = to_string(convert); //Converting int convert to string to append to the string sub1 giving us the full time !
			cout << sub2.append(sub1);
		}
		else {
			convert = convert + 12; //Adding 12 hours converting from PM to 12 hour time
			string sub3 = to_string(convert); //Converting int convert to string to append to the string sub1 giving us the full time !
			cout << sub3.append(sub1);
		}
	}
	else {
		if (convert == 12) {
			convert = convert - 12;
			string sub4 = to_string(convert); //Converting int convert to string to append to the string sub1 giving us the full time !
			cout << "0" + sub4.append(sub1);
		}
		else {
			cout << AMdefcase;
		}
	}
}
```
