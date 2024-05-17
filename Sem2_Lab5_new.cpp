#include "Header.h"
#include <list>
#include <iostream>


using namespace std;
int main() {
	Stack st;
	list<double> st1{};
	double top;
	st.push_back(&st1, 4.0);
	st.push_back(&st1, 41.0);
	st.pop(&st1);
	top = st.top(&st1);
	cout << top;
}
