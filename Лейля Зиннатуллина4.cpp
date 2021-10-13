//Напишите функцию, которая вычисляет N-ое число Фибоначчи.
#include<iostream>
using namespace std;

int main() {
	int N,c;
	cin >> N;
	int a = 1, b = 1;
	for (c = 1; c <= N; c++) {
		c = a + b;
		a = b;
		b = c;
	}
	cout << "N" << "=" << c << endl;
	return 0;
}

