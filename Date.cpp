// Date.cpp
#include "Date.h"
#include <iostream>

using namespace std;

Date& Date::operator = (const Date& A) {
	t = A.t;
	return *this;
}

Date::operator string() const {
	stringstream ss;
	ss << t;
	return ss.str();
}

ostream& operator << (ostream& out, const Date& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, Date& A) {
	in >> A.t;
	return in;
}

//префиксная версия возвращает значение после инкремента
const Date& operator++(Date& i) {
	Triad t = i.getTriad();
	t++;
	i.setTriad(t);
	return i;
}

//постфиксная версия возвращает значение до инкремента
const Date operator++(Date& i, int) {
	Triad t = i.getTriad();
	t++;
	i.setTriad(t);
	return i;
}

//префиксная версия возвращает значение после инкремента
const Date& operator--(Date& i) {
	Triad t = i.getTriad();
	t--;
	i.setTriad(t);
	return i;
}

//постфиксная версия возвращает значение до инкремента
const Date operator--(Date& i, int) {
	Triad t = i.getTriad();
	t--;
	i.setTriad(t);
	return i;
}

bool operator< (const Date& t1, const Date& t2) {
	return t1.getTriad() < t2.getTriad();
}

bool operator<= (const Date& t1, const Date& t2) {
	return t1.getTriad() <= t2.getTriad();
}

bool operator== (const Date& t1, const Date& t2) {
	return t1.getTriad() == t2.getTriad();
}

bool operator!= (const Date& t1, const Date& t2) {
	return t1.getTriad() != t2.getTriad();
}

bool operator> (const Date& t1, const Date& t2) {
	return t1.getTriad() > t2.getTriad();
}

bool operator>= (const Date& t1, const Date& t2) {
	return t1.getTriad() >= t2.getTriad();
}