#pragma once
class Array
{
public:
	Array(int len);
	~Array();
	Array* pringInfo();//定义为引用，才能让this指向原来的对象，否则是临时对象

	Array* setLen(int len);
	int getLen();
private:
	int len;
};

