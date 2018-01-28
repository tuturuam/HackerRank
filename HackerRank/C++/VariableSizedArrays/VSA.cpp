#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int n, q; 				// n = number of variable-length arrays
		  				// q = number of queries
	scanf("%d %d", &n, &q);
	vector< vector<int> > a; 		// variable-length array
	int i;
	for(int z = 0; z < n; z++) {
		int k; 				// size
		scanf("%d", &k);
		vector<int> a2;			// array to be indexed and queried by q
		for (int j = 0; j < k; j++) {
			scanf("%d", &i);
			a2.push_back(i);
		}
		a.push_back(a2);		// variable-length array defined by a2
	}
	for(int m = 0; m < q; m++) {
		int pick, ind;	
		cin >> pick >> ind;
		cout << a[pick][ind] << endl;
	}
	return 0;
}
