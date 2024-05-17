#pragma once
#include <list>


class Stack {
public:
	void push_back(std::list<double> *st, double );
	void pop(std::list<double> *st);
	double top(std::list<double> *st);
private:
};