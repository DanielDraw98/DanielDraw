#include <iostream>
using namespace std;

int main()
{
	char *a=new char[1000];
	cin.getline(a, 1000);
	while (*a != 0) {
		if (*a >= 'a' && *a <= 'z') {
				*a=*a-32;
		}
		/*if (*a >= 'A' && *a <= 'Z') {
			a--;

		}*/
		a++;
	}
	cout << a<endl;
}


   