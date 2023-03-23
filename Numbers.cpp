#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int a;
	char exit;
	for (;;) {
		cout << "введите число: ";
		cin >> a;
		cout << "Квадрат числа> " << a << " < равен: " << a * a << endl;
		cout << "если вы хотите продолжить ввод, напишите yes, если хотите прервать цикл, напишите no: ";
		cin >> exit;
		if (exit != 'yes' && exit != 'Yes' && exit != 'Y' && exit != 'y')
			break;
	}

	return 0;
}
