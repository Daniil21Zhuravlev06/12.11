//Даниил Журавлёв
#include <iostream>
using namespace std;
int main() {
	/*с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.*/
	/*int i = 2;
	while (1 <= 100) {
		cout << i << ' ';
		i += 2;
	}*/
	/*Вводить целые числа, пока не будет введено число <= 0.*/
	/*int a = 100;
	while (a > 0) {
		cin >> a;
	}*/
	/*Необходимо вывести на консоль такую последовательность чисел :
	1 2 4 8 16 32 64 128 256 512*/
	/*int i = 1;
	while (1 <= 512) {
		cout << i << ' ';
		i *= 2;
	}*/
	/*Выведите все точные квадраты натуральных чисел, не превосходящие данного числа N.*/
	/*int n, i;
	cin >> n;
	i = 1;
	while (i * i <= n) {
		cout << i * i << ' ';
		i++;
	}*/
	/*Дано целое число, не меньше 2. Выведите его наименьший натуральный делитель, отличный от 1.*/
	/*int i, n;
	cin >> n;
	i = 2;
	while (n % i != 0) {
		i++;
		cout << i << endl;
	}*/
	/*Дано целое число, не меньшее 2. Выведите его наименьший натруальные делители, отличный от 1 и от самого себя.*/
	/*int i, n;
	cin >> n;
	i = 2;
	while (i <= n/2) {
		if (n % i == 0) cout << i << endl;
		i++;
	}*/
	/*int i = 1, n;
	cin >> n;
	while (i <= n) {
		cout << i << endl;
		i*=2;
	}*/
	//double x, y;
	//int k = 0;
	//cin >> x >> y;
	//while (x < y) {
	//	x = x * 1.04;// x = x + 0.1*x = x(1+0.1)=1.1x
	//	k++;
	//}
	//cout << k << endl;
	int a;
	cin >> a;
while (a != 0) {
	cout << a % 10 << ' ';
	a = a / 10;
}
	return 0;
}