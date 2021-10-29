#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, maxarr=-1000000000,count=0,max1=0;
	cin >> n;
	vector <int> a(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max1) {
			max1 = a[i];
		}
	}
	vector <int> b(max1 + 1, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) { //находим количество вхождений элемента в исходный массив.
			if (a[i] == a[j]) {
				b[a[i]]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (b[a[i]] > 1 && a[i] > maxarr) { //ищем максимум среди элементов, встречающихся более одного раза.
			maxarr = a[i];
		}
	}
	if (maxarr == -1000000000) { //в случае если каждый элемент встречается по одному разу переменная, содержащая максимум, не изменит свое значение.
		cout << "NO";
	}
	else
	cout << maxarr;
}