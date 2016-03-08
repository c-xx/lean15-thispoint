#pragma once
class Array
{
public:
	Array(int len);
	~Array();
	void pringInfo();

	void setLen(int len);
	int getLen();
private:
	int len;
};

