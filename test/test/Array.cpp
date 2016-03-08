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

void Array::pringInfo() {

}

void Array::setLen(int len) {
	this->len = len;
}
int Array::getLen() {
	return this->len;
}