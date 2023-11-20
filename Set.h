#pragma once
#include "IIterable.h"
class Set : public IIterable
{
private:
	double* arr=nullptr;
	int size;
	int index;
public:
	Set(int size_);
	~Set();
	IIterable* append(IIterable* objects);
	//���������� ��������� ���������
	IIterator* begin();
	//���������� �������� ���������
	IIterator* end();
	//���������� ���������� ��������
	int getSize();
	//��������� ������� �� �������
	bool isEmpty();
	//�������� ��������� �� �������
	double getByIndex(int index_);
	//���������� ������ ����� ���������
	double get();
	//��������� �� ��������� �������
	void next();
	//��������� �� ���������� �������
	void prev();
	//���������� ������ ���� ����������
	bool operator==(IIterator* object);
	//���������� ������ ���� ����������
	bool operator!=(IIterator* object);
	IIterator* getIT();
};

