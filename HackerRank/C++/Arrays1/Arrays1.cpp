#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int temp, i;
	for (i = 0; i < n/2; ++i) {
		temp = arr[n-i-1];
		arr[n-i-1] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

