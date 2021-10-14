//задача 1 Напишите функцию, которая моделирует бросание двух игральных кубиков (на каждом может выпасть от 1 до 6 очков). (Используйте генератор псевдослучайных чисел.)
#include<iostream>
using namespace std;
int main() {
	int Q, W;
	setlocale(LC_ALL,"Russian");
	srand(time(NULL));
	Q = 1 + rand() % 6;
	W = 1 + rand() % 6;
	cout <<"1 игральный кубик=" << Q << endl;
	cout <<"2 игральный кубик=" << W << endl;
	return 0;
}