// Triangle.cpp : 定义控制台应用程序的入口点。
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
		//将I大于1改为0
		if (i>0)
			for (int j = 0; j<m - 1 && j<i; j++)
				cout << " *";
		if (i>0) {
			cout << setw((2 * i - m + 2 - m) * 2) << " *";
			//将错误的限定条件j<i改为j<i-1
			for (int j = 0; j<m - 1 && j<i - 1; j++)
				cout << " *";
		}
		cout << endl;
	}
	//为后面的行输出完整的三角形
	for (int i = n - m; i<n; i++) {
		cout << setw((n - i) * 2) << "*";
		for (int j = 0; j<i * 2; j++)
			cout << " *";
		cout << endl;
	}
}


