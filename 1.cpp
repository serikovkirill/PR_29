#include<iostream>
using namespace std;
int sum_digit(int a) { //функция, находящая сумму цифр числа.
	int c,sc=0;
	while (a != 0) {
		c = a % 10;
		sc += c;
		a = a / 10;
	}
	return sc;
}
int main(){
	int a;
	cin >> a;
	if (sum_digit(a % 1000) == sum_digit(a) -sum_digit(a % 1000)) { //проверка условия задачи.
		cout << "YES";
	}
	else cout << "NO";
}