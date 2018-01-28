#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string its(int x) {
	switch (x) {
		case 1:
			return "one";
		case 2:
			return "two";
		case 3:
			return "three";
		case 4:
			return "four";
		case 5:
			return "five";
		case 6:
			return "six";
		case 7:
			return "seven";
		case 8:
			return "eight";
		case 9:
			return "nine";
		default:
			cout << "nada" << endl;
			break;
	}
}

int main() {
	int in, in2;
	cin >> in >> in2;
	if(in2 > 9) {
		for(int x = in; x <= 9; x++) {
			cout << its(x) << endl;
		}
	}
	if(in2 <= 9) {
		for(int x = in; x <= in2; x++) {
			cout << its(x) << endl;
		}
	}
	for(int x = 10; x <= in2; x++) {
		if (x%2==0) cout << "even\n";
		if (x%2!=0) cout << "odd\n";
	}

	return 0;
}
