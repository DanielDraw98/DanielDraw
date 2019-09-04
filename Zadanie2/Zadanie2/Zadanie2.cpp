#include <iostream>
using namespace std;

int main(){
	int a[10];
	int c1 = 0, c2 = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			c1++;
		}
		else {
			c2++;
		}
	}
	cout << c1 << endl;
	cout << c2 << endl;
}