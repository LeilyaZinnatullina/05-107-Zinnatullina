//задача 1

//• Напишите программу, которая определяет, верно ли, что введенное число трехзначное.

#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cin >> a;
	if (a >= 100 && a < 1000) cout << "YES"; else cout << "NO";
	return 0;
}
