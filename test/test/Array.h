#pragma once
class Array
{
public:
	Array(int len);
	~Array();
	Array* pringInfo();//����Ϊ���ã�������thisָ��ԭ���Ķ��󣬷�������ʱ����

	Array* setLen(int len);
	int getLen();
private:
	int len;
};

