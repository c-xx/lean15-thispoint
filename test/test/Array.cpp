#include <iostream>
#include "Array.h"
using namespace std;



Array::Array(int len)
{
	this->len = len;
}


Array::~Array()
{
}

Array* Array::pringInfo() {
	cout << "len=" << len << endl;
	cout << this << endl;
	return this;
}

Array* Array::setLen(int len) {
	this->len = len;
	return this;
}
int Array::getLen() {
	return this->len;
}