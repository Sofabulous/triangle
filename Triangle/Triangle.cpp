// Triangle.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include<iostream>
#include <iomanip>
#define N 10
using namespace std;
void printTriangle(int n);
void printEmptyTriangle(int n, int m);
int main() {
	printEmptyTriangle(20, 5);
	system("pause");
	return 0;
}
void printTriangle(int n) {
	for (int i = 0; i<n; i++) {
		cout << setw((n - i) * 2) << "*";
		for (int j = 0; j<i * 2; j++)
			cout << " *";
		cout << endl;
	}
	cout << endl;
	printf("wwww");
}
void printEmptyTriangle(int n, int m) {
	for (int i = 0; i<n - m; i++) {
		cout << setw((n - i) * 2) << "*";
		//��I����1��Ϊ0
		if (i>0)
			for (int j = 0; j<m - 1 && j<i; j++)
				cout << " *";
		if (i>0) {
			cout << setw((2 * i - m + 2 - m) * 2) << " *";
			//��������޶�����j<i��Ϊj<i-1
			for (int j = 0; j<m - 1 && j<i - 1; j++)
				cout << " *";
		}
		cout << endl;
	}
	//Ϊ����������������������
	for (int i = n - m; i<n; i++) {
		cout << setw((n - i) * 2) << "*";
		for (int j = 0; j<i * 2; j++)
			cout << " *";
		cout << endl;
	}
}


