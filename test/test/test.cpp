#include <iostream>
#include <string>
#include <stdlib.h>
#include "Array.h"
using namespace std;



int main(void) {

	Array arr1(10);
	
	//return ����
	//arr1.pringInfo().setLen(5).pringInfo().setLen(1).pringInfo();
	
	//return ָ��
	arr1.pringInfo()->setLen(5)->pringInfo()->setLen(1)->pringInfo();

	cout << &arr1 << endl;

	system("pause");
	return 0;
}