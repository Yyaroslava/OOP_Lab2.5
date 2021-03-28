// Triad.cpp
#include "Triad.h"
#include <iostream>

using namespace std;

Triad& Triad::operator = (const Triad& A) {
	first = A.first;
	second = A.second;
	third = A.third;
	return *this;
}

Triad::operator string() const {
	stringstream ss;
	ss << first << "." << second << "." << third;
	return ss.str();
}

ostream& operator << (ostream& out, const Triad& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, Triad& A) {
	cout << "Enter first digit: "; in >> A.first;
	cout << "Enter second digit: "; in >> A.second;
	cout << "Enter third digit: "; in >> A.third;
	return in;
}

//префиксная версия возвращает значение после инкремента
const Triad& operator++(Triad& i) {
	int third = i.getThird();
	third++;
	i.setThird(third);
	return i;
}

//постфиксная версия возвращает значение до инкремента
const Triad operator++(Triad& i, int) {
	int third = i.getThird();
	third++;
	i.setThird(third);
	return i;
}

//префиксная версия возвращает значение после инкремента
const Triad& operator--(Triad& i) {
	int third = i.getThird();
	third--;
	i.setThird(third);
	return i;
}

//постфиксная версия возвращает значение до инкремента
const Triad operator--(Triad& i, int) {
	int third = i.getThird();
	third--;
	i.setThird(third);
	return i;
}

bool operator< (const Triad &t1, const Triad &t2) {
	if (t1.first < t2.first) return true;
	if (t1.first > t2.first) return false;
	if (t1.second < t2.second) return true;
	if (t1.second > t2.second) return false;
	if (t1.third < t2.third) return true;
	if (t1.third > t2.third) return false;
	return false;
}

bool operator<= (const Triad& t1, const Triad& t2) {
	if (t1.first < t2.first) return true;
	if (t1.first > t2.first) return false;
	if (t1.second < t2.second) return true;
	if (t1.second > t2.second) return false;
	if (t1.third < t2.third) return true;
	if (t1.third > t2.third) return false;
	return false;
}

bool operator== (const Triad& t1, const Triad& t2) {
	if ((t1.first == t2.first) && (t1.second == t2.second) && (t1.third == t2.third)) return true;
	return false;
}

bool operator!= (const Triad& t1, const Triad& t2) {
	if ((t1.first == t2.first) && (t1.second == t2.second) && (t1.third == t2.third)) return false;
	return true;
}

bool operator> (const Triad& t1, const Triad& t2) {
	if (t1.first < t2.first) return false;
	if (t1.first > t2.first) return true;
	if (t1.second < t2.second) return false;
	if (t1.second > t2.second) return true;
	if (t1.third < t2.third) return false;
	if (t1.third > t2.third) return true;
	return false;
}

bool operator>= (const Triad& t1, const Triad& t2) {
	if (t1.first < t2.first) return false;
	if (t1.first > t2.first) return true;
	if (t1.second < t2.second) return false;
	if (t1.second > t2.second) return true;
	if (t1.third < t2.third) return false;
	if (t1.third > t2.third) return true;
	return true;
}