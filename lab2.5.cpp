// lab2.5.cpp
#include "Date.h"
#include <iostream>

using namespace std;

int main() {
	Triad t1, t2;
	cin >> t1;
	cout << endl;
	cin >> t2;
	cout << endl;
	cout << t1 << endl;
	cout << t2 << endl;
	if (t1 < t2) {
		cout << "t1 < t2" << endl;
	}
	else if (t1 == t2) {
		cout << "t1 = t2" << endl;
	}
	else {
		cout << "t1 > t2" << endl;
	}
	cout << endl;
	Date d1(t1), d2(t2);
	cout << d1 << endl;
	cout << d2 << endl;
	if (d1 < d2) {
		cout << "d1 < d2" << endl;
	}
	else if (d1 == d2) {
		cout << "d1 = d2" << endl;
	}
	else {
		cout << "d1 > d2" << endl;
	}
	return 0;
}
