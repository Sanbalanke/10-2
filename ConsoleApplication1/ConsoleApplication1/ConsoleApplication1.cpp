// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� �����" << endl;
	cin >> n;
	char s[50];
	int i = 0;
	while (n>0) {
		s[i] = n % 2;
		n /= 2;
		i++;
	}
	i--;
	while (i >= 0) {
		cout << (int)s[i];
		i--;
	}
	cout << endl;
	system("pause");
	return 0;
}