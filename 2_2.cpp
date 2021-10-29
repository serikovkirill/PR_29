#include<iostream>
using namespace std;
int main() {
	long long int m, deg=0;
	cin >> m;
	while (m % 3 == 0) {
		m = m / 3;
		deg++;
	}
	cout << deg;
}