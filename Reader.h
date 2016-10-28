#pragma once
#include<string>
#include<math.h>
#include<iostream>
using namespace std;


class Reader
{
	string firstName;
	string surName;
	string readerCode;
	static constexpr double rconst = 3.2334;
public:
	Reader();
	Reader(string, string, string);
	Reader(string, string);
	void SetCode(string code);
	string GetCode();
	void PrintReader();
	bool operator == (const Reader &r)
	{
		return this->firstName == r.firstName && this->surName == r.surName &&  this->readerCode == r.readerCode;
	}
	friend ostream &operator<<(ostream &out, const Reader &r)
	{
		out << r.firstName << " " << r.surName << " " << r.readerCode << endl;
		return out;
	}
	bool operator>(const Reader &r)
	{
		if (this->firstName == r.firstName)
			return this->surName > r.surName;

		return this->firstName > r.firstName;
	}
	bool operator<=(const Reader &r)
	{
		if (this->firstName == r.firstName)
			return this->surName < r.surName;

		return this->firstName <= r.firstName;
	}
};
