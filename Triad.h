// Triad.h
#pragma once
#include <string>
#include <sstream> 

using namespace std;

class Triad {
private:
	int first;
	int second;
	int third;
public:
	Triad() { first = 0; second = 0; third = 0; };
	Triad(int first_value, int second_value, int third_value) { first = first_value; second = second_value; third = third_value; };
	Triad(const Triad& t_value) { first = t_value.getFirst(); second = t_value.getSecond(); third = t_value.getThird();};
	Triad& operator = (const Triad&);
	operator string() const;
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
	//префиксный инкремент
	friend const Triad& operator++(Triad& i);
	//постфиксный инкремент
	friend const Triad operator++(Triad& i, int);
	//префиксный декремент
	friend const Triad& operator--(Triad& i);
	//постфиксный декремент
	friend const Triad operator--(Triad& i, int);
	friend bool operator< (const Triad&, const Triad&);
	friend bool operator<= (const Triad&, const Triad&);
	friend bool operator== (const Triad&, const Triad&);
	friend bool operator!= (const Triad&, const Triad&);
	friend bool operator> (const Triad&, const Triad&);
	friend bool operator>= (const Triad&, const Triad&);
	int getFirst() const { return first; }
	void setFirst(int value) { first = value; }
	int getSecond() const { return second; }
	void setSecond(int value) { second = value; }
	int getThird() const { return third; }
	void setThird(int value) { third = value; }
};

