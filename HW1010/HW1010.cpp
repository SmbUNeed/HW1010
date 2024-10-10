#include <iostream>
#include <string>
#include <list>
#include <windows.h>

using namespace std;

string PosOrNeg(int num) {
	string str;
	str = num > 0 ? " �������������" : str = 0 ? " ����" : " �������������";
	return str;
}

float Mean(list<int> arr) {
	float result = 0;
	for (int i : arr) {
		result += i;
	}
	result /= 2;
	return result;
}

void EvenOrOdd(list<int> arr) {
	list<int> even;
	list<int> odd;
	for (int i : arr) {
		if (i % 2 == 0 && i != 0) even.push_back(i);
		else if (i % 2 == 1) odd.push_back(i);
	}

	cout << "������:" << endl;
	for (int i : even) cout << i <<  ", ";
	cout << "\b\b  " << endl;
	cout << "��������:" << endl;
	for (int i : odd) cout << i << ", ";
	cout << "\b\b  " << endl;
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string strin;

	int a;

	list<int> arr;

	cout << "���������� ������� ��� �����" << endl;
	for (int i = 0; i < 2; i++) {
		cin >> a;
		arr.push_back(a);
	}

	for (int i : arr) {
		cout << "����� " << i << PosOrNeg(i) << endl;
		cout << endl;
	}

	cout << "������� �������� �������: " << Mean(arr);
	cout << endl;

	EvenOrOdd(arr);
}