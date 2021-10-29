#include<iostream>
using namespace std;
long long int sum_digits(long long int a) {
	int c,sc=0;
	while (a != 0) {
		c = a % 10;
		sc += c;
		a = a / 10;
	}
	return sc;
}
int main() {
	long long int a, b, c;
	cin >> a >> b;
	for (long long int i = a; i <= b; i++)
	{
		c = sum_digits(i);
		if (c == sum_digits(2 * i) && c == sum_digits(3 * i) && c == sum_digits(4 * i) && c == sum_digits(5 * i) && c == sum_digits(6 * i) && c == sum_digits(7 * i) && c == sum_digits(8 * i) && c == sum_digits(9 * i)) {
			cout << i << endl;
		}
		c = 0;
	}
}