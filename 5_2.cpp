#include<iostream>
#include<vector>
using namespace std;
bool isprime(int a) {
	if (a == 1) {
		return 0;
	}
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
	}
int kc(int a) {
	int k = 0;
	while (a != 0) {
		a = a / 10;
		k++;
	}
	return k;
}
int main() {
	vector <int> d(10000000, 0);
	int a, b,c;
	int s = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		for (int j = 0; j < kc(i); j++) {
			c = i / pow(10, j);
			if (isprime(c) == 1) {
				d[i]++;
			}
		}
		
	}
	for (int i = a; i <= b; i++) {
		if (d[i] == kc(i) && i!=0) {
			cout << i << endl;
		}
	}
}