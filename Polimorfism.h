#pragma once
#include<iostream>
using namespace std;

class BaseClass
{
protected:
	int a;
public:
	void printA() const
	{
		(const_cast<BaseClass*> (this))->a = 10;
		cout << a << endl;
	}
	virtual void Print()
	{
		printA();
	}
	virtual ~BaseClass()
	{
		cout << "Destructorul clasei de baza a fost apelat" << endl;
	}
};


class DerivedClass :public BaseClass
{
public:
	int b;
	virtual void Print()
	{
		b = 3;
		cout << b << endl;
	}
	~DerivedClass()
	{
		cout << "Destructorul clasei derivate a fost apelat" << endl;
	}
};