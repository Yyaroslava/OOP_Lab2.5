// Date.h
#pragma once
#include <string>
#include "Triad.h"

using namespace std;

class Date {
private:
	Triad t;
public:
	Date() { t = Triad(); };
	Date(Triad t_value) { t = t_value; };
	Date(const Date& d_value) { t = d_value.getTriad(); };
	Date& operator = (const Date&);
	operator string() const;
	friend ostream& operator << (ostream&, const Date&);
	friend istream& operator >> (istream&, Date&);
	//префиксный инкремент
	friend const Date& operator++(Date& i);
	//постфиксный инкремент
	friend const Date operator++(Date& i, int);
	//префиксный декремент
	friend const Date& operator--(Date& i);
	//постфиксный декремент
	friend const Date operator--(Date& i, int);
	friend bool operator< (const Date&, const Date&);
	friend bool operator<= (const Date&, const Date&);
	friend bool operator== (const Date&, const Date&);
	friend bool operator!= (const Date&, const Date&);
	friend bool operator> (const Date&, const Date&);
	friend bool operator>= (const Date&, const Date&);
	Triad getTriad() const { return t; }
	void setTriad(Triad tValue) { t = tValue; }
};
