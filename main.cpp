#include<bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream in(argv[1]);
	double test;
	while (in >> test) {
		if (test > 2.0) {
			return 1;
		}
	}
	return 0;
}
