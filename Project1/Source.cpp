#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int choice;
	cout << "Введите номер задания:";
	cin >> choice;
	switch (choice) {
	case 1: {
		const int size = 6;
		int month[size];
		int sum = 0;
		for (int i = 0; i < size; i++) {
			cout << "Введите прибыль за месяц - " << i + 1 << endl;
			cin >> month[i];
		}
		for (int i = 0; i < size; i++) {
			sum += month[i];
			cout << "Прибыль за " << i + 1 << " месяц " << month[i] << endl;

		}
		cout << "Прибыль за шесть месяцев - " << sum << endl;
	}
		  break;
	case 2: {
		int min = 1;
		int max = 20;
		const int size = 5;
		int arr[size];
		for (int i = 0; i < size; i++) {
			arr[i] = min + rand() % (max - min + 1);
			cout << arr[i] << " ";
		}
		cout << "\n";
		for (int i = size - 1; i >= 0; i--) {
			cout << arr[i] << " ";
		}
	}
		  break;
	case 3: {
		const int size = 5;
		int pentagon[size];
		int sum = 0;
		for (int i = 0; i < size; i++) {
			cout << "Введите длину стороны - " << i + 1 << endl;
			cin >> pentagon[i];
		}
		for (int i = 0; i < size; i++) {
			sum += pentagon[i];
			cout << "Длина " << i + 1 << " стороны " << pentagon[i] << endl;

		}
		cout << "Периметр пятиугольника - " << sum << endl;
	}
		  break;
	case 4: {
		const int size = 12;
		int month[size];
		for (int i = 0; i < size; i++) {
			cout << "Введите прибыль за месяц - " << i + 1 << endl;
			cin >> month[i];
		}
		for (int i = 0; i < size; i++) {
			cout << "Прибыль за " << i + 1 << " месяц " << month[i] << endl;

		}
		int min = month[0];
		int n_min = 0;
		int max = month[0];
		int n_max = 0;
		for (int i = 0; i < size; i++) {
			if (month[i] < min) {
				min = month[i];
				n_min = i + 1;
			}
			else if (month[i] > max) {
				max = month[i];
				n_max = i + 1;
			}
		}
		cout << "Минимальная прибыль была за " << n_min + 1 << " составляет: " << min << endl;
		cout << "Максимальная прибыль была за " << n_max << " составляет: " << max << endl;

	}
		  break;
	case 5: {
		int min1 = 1;
		int max1 = 25;
		const int size = 10;
		int arr[size];
		for (int i = 0; i < size; i++) {
			arr[i] = min1 + rand() % (max1 - min1 + 1);
			cout << arr[i] << " ";
		}
		cout << "\n";
		int min = arr[0];
		int n_min = 0;
		int max = arr[0];
		int n_max = 0;
		for (int i = 0; i < size; i++) {
			if (arr[i] < min) {
				min = arr[i];
				n_min = i + 1;
			}
			else if (arr[i] > max) {
				max = arr[i];
				n_max = i + 1;
			}
		}
		cout << "Минимальный элемент  " << n_min << " масива равен: " << min << endl;
		cout << "Максимальный элемент " << n_max << " масива равен: " << max << endl;
	}
		  break;
	case 6: {
		const int size = 12;
		int month[size];
		for (int i = 0; i < size; i++) {
			cout << "Введите прибыль за месяц - " << i + 1 << endl;
			cin >> month[i];
		}
		for (int i = 0; i < size; i++) {
			cout << "Прибыль за " << i + 1 << " месяц " << month[i] << endl;
		}
		int min = month[0];
		int n_min = 0;
		int max = month[0];
		int n_max = 0;
		int k, end;
		cout << "Введите начало диапазона:\n";
		cin >> k;
		cout << "Введите конец диапазона:";
		cin >> end;
		for (int i = k; i < end; i++) {
			cout << month[i] << "\n";
			if (month[i] < min) {
				min = month[i];
				n_min = i + 1;
			}
			else if (month[i] > max) {
				max = month[i];
				n_max = i + 1;
			}
		}
		cout << "Минимальный элемент  " << n_min  << " масива равен: " << min << endl;
		cout << "Максимальный элемент " << n_max << " масива равен: " << max << endl;
	}
		  break;
	case 7: {
		int min = -20;
		int max = 20;
		int sum = 0;
		int proizvedeniye = 1;
		const int size = 10;
		int arr[size];
		for (int i = 0; i < size; i++) {
			arr[i] = min + rand() % (max - min + 1);
			cout << arr[i] << " ";
		}
		int min1 = arr[1];
		int n_min;
		int max1 = arr[1];
		int n_max;
		for (int i = 0; i < size; i++) {
			if (arr[i] < min1) {
				min1 = arr[i];
				n_min = i + 1;
			}
			else if (arr[i] > max1) {
				max1 = arr[i];
				n_max = i + 1;
			}
		}
		for (int i = n_min; i < n_max; i++) {
				proizvedeniye = proizvedeniye * arr[i];
		}
		for (int i = 0; i < size; i++) {
			if (arr[i] < 0) {
				sum += arr[i];
			}
		}

		cout << "\n";
		cout << "Минимальный элемент  " << n_min << " масива равен: " << min1 << endl;
		cout << "Максимальный элемент " << n_max << " масива равен: " << max1 << endl;
		cout << "Sum = " << sum << endl;
		cout << "Proiz = " << proizvedeniye << endl;
	}
	}
}
