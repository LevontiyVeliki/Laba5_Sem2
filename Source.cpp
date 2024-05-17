#include "Header.h"
#include <list>


void Stack::push_back(std::list<double> *st, double newbie) {
	st->push_back(newbie);
};
void Stack::pop(std::list<double> *st) {
	st->pop_back();
}
double Stack::top(std::list<double> *st) {
	return st->back();
}


