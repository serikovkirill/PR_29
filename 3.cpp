#include<iostream>
#include<string>
using namespace std;
int main() {
	int k = 0;
	string s,surname=""; //Donald Ervin Knuth
	//char name='_';
	getline(cin, s);
	for (unsigned int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			k++;
		}
		if (s[i] == ' ' && k==2) {
			while (s[i]) {
				cout << s[i+1];
				i++;
			}
		}
	}
	cout << ' ';
	k = 0;
	cout << s[0] << '.';
	for (unsigned int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			k++;
		}
		if (k == 1 && s[i] == ' ') {
			cout << s[i + 1] << '.';
			k++;
		}
	}
}